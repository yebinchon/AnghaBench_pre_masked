
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* olinfo_status; void* cmd_type_len; int buffer_addr; } ;
union ixgbe_adv_tx_desc {TYPE_1__ read; } ;
typedef int u32 ;
typedef size_t u16 ;
struct xdp_buff {int data_end; int data; } ;
struct ixgbevf_tx_buffer {int data; int bytecount; int gso_segs; union ixgbe_adv_tx_desc* next_to_watch; scalar_t__ protocol; } ;
struct ixgbevf_ring {size_t next_to_use; size_t count; int state; struct ixgbevf_tx_buffer* tx_buffer_info; int dev; } ;
struct ixgbe_adv_tx_context_desc {scalar_t__ mss_l4len_idx; void* type_tucmd_mlhl; scalar_t__ fceof_saidx; void* vlan_macip_lens; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ixgbe_adv_tx_context_desc* FUNC_0 (struct ixgbevf_ring*,int ) ;
 union ixgbe_adv_tx_desc* FUNC_1 (struct ixgbevf_ring*,size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (struct ixgbevf_tx_buffer*,int ,int ) ;
 int FUNC_7 (struct ixgbevf_tx_buffer*,int,int) ;
 int FUNC_8 (struct ixgbevf_ring*) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct ixgbevf_ring *VAR_14,
     struct xdp_buff *VAR_15)
{
 struct ixgbevf_tx_buffer *VAR_16;
 union ixgbe_adv_tx_desc *VAR_17;
 u32 VAR_18, VAR_19;
 dma_addr_t VAR_20;
 u16 VAR_21;

 VAR_18 = VAR_15->data_end - VAR_15->data;

 if (FUNC_12(!FUNC_8(VAR_14)))
  return VAR_2;

 VAR_20 = FUNC_4(VAR_14->dev, VAR_15->data, VAR_18, VAR_0);
 if (FUNC_5(VAR_14->dev, VAR_20))
  return VAR_2;


 VAR_21 = VAR_14->next_to_use;
 VAR_16 = &VAR_14->tx_buffer_info[VAR_21];

 FUNC_7(VAR_16, VAR_18, VAR_18);
 FUNC_6(VAR_16, VAR_20, VAR_20);
 VAR_16->data = VAR_15->data;
 VAR_16->bytecount = VAR_18;
 VAR_16->gso_segs = 1;
 VAR_16->protocol = 0;




 if (!FUNC_11(VAR_13, &VAR_14->state)) {
  struct ixgbe_adv_tx_context_desc *VAR_22;

  FUNC_9(VAR_13, &VAR_14->state);

  VAR_22 = FUNC_0(VAR_14, 0);
  VAR_22->vlan_macip_lens =
   FUNC_2(VAR_1 << VAR_9);
  VAR_22->fceof_saidx = 0;
  VAR_22->type_tucmd_mlhl =
   FUNC_2(VAR_12 |
        VAR_7);
  VAR_22->mss_l4len_idx = 0;

  VAR_21 = 1;
 }


 VAR_19 = VAR_8 |
     VAR_5 |
     VAR_6;
 VAR_19 |= VAR_18 | VAR_11;

 VAR_17 = FUNC_1(VAR_14, VAR_21);
 VAR_17->read.buffer_addr = FUNC_3(VAR_20);

 VAR_17->read.cmd_type_len = FUNC_2(VAR_19);
 VAR_17->read.olinfo_status =
   FUNC_2((VAR_18 << VAR_10) |
        VAR_4);


 FUNC_10();


 VAR_21++;
 if (VAR_21 == VAR_14->count)
  VAR_21 = 0;

 VAR_16->next_to_watch = VAR_17;
 VAR_14->next_to_use = VAR_21;

 return VAR_3;
}
