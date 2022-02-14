
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct timespec64 {int tv_nsec; } ;
struct igb_tx_buffer {TYPE_1__* skb; } ;
struct igb_ring {scalar_t__ next_to_use; scalar_t__ count; int reg_idx; scalar_t__ launchtime_enable; int flags; } ;
struct e1000_adv_tx_context_desc {void* seqnum_seed; void* mss_l4len_idx; void* type_tucmd_mlhl; void* vlan_macip_lens; } ;
struct TYPE_2__ {int tstamp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct e1000_adv_tx_context_desc* FUNC_0 (struct igb_ring*,scalar_t__) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 struct timespec64 FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct igb_ring *VAR_3,
       struct igb_tx_buffer *VAR_4,
       u32 VAR_5, u32 VAR_6,
       u32 VAR_7)
{
 struct e1000_adv_tx_context_desc *VAR_8;
 u16 VAR_9 = VAR_3->next_to_use;
 struct timespec64 VAR_10;

 VAR_8 = FUNC_0(VAR_3, VAR_9);

 VAR_9++;
 VAR_3->next_to_use = (VAR_9 < VAR_3->count) ? VAR_9 : 0;


 VAR_6 |= VAR_1 | VAR_0;


 if (FUNC_4(VAR_2, &VAR_3->flags))
  VAR_7 |= VAR_3->reg_idx << 4;

 VAR_8->vlan_macip_lens = FUNC_1(VAR_5);
 VAR_8->type_tucmd_mlhl = FUNC_1(VAR_6);
 VAR_8->mss_l4len_idx = FUNC_1(VAR_7);




 if (VAR_3->launchtime_enable) {
  VAR_10 = FUNC_3(VAR_4->skb->tstamp);
  VAR_4->skb->tstamp = FUNC_2(0, 0);
  VAR_8->seqnum_seed = FUNC_1(VAR_10.tv_nsec / 32);
 } else {
  VAR_8->seqnum_seed = 0;
 }
}
