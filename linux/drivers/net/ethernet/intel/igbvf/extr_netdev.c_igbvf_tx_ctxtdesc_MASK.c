
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef size_t u16 ;
struct igbvf_ring {size_t next_to_use; size_t count; struct igbvf_buffer* buffer_info; } ;
struct igbvf_buffer {scalar_t__ dma; int time_stamp; } ;
struct e1000_adv_tx_context_desc {void* mss_l4len_idx; void* type_tucmd_mlhl; scalar_t__ seqnum_seed; void* vlan_macip_lens; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct e1000_adv_tx_context_desc* FUNC_0 (struct igbvf_ring,size_t) ;
 void* FUNC_1 (int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct igbvf_ring *VAR_3, u32 VAR_4,
         u32 VAR_5, u32 VAR_6)
{
 struct e1000_adv_tx_context_desc *VAR_7;
 struct igbvf_buffer *VAR_8;
 u16 VAR_9 = VAR_3->next_to_use;

 VAR_7 = FUNC_0(*VAR_3, VAR_9);
 VAR_8 = &VAR_3->buffer_info[VAR_9];

 VAR_9++;
 VAR_3->next_to_use = (VAR_9 < VAR_3->count) ? VAR_9 : 0;


 VAR_5 |= VAR_1 | VAR_0;

 VAR_7->vlan_macip_lens = FUNC_1(VAR_4);
 VAR_7->seqnum_seed = 0;
 VAR_7->type_tucmd_mlhl = FUNC_1(VAR_5);
 VAR_7->mss_l4len_idx = FUNC_1(VAR_6);

 VAR_8->time_stamp = VAR_2;
 VAR_8->dma = 0;
}
