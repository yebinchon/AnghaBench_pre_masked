
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct htt_rx_ring_setup_ring32 {void* fw_idx_init_val; void* flags; void* rx_ring_bufsize; void* rx_ring_len; void* rx_ring_base_paddr; void* fw_idx_shadow_reg_paddr; } ;
struct TYPE_7__ {int num_rings; } ;
struct TYPE_8__ {TYPE_2__ hdr; struct htt_rx_ring_setup_ring32* rings; } ;
struct TYPE_6__ {int msg_type; } ;
struct htt_cmd {TYPE_3__ rx_setup_32; TYPE_1__ hdr; } ;
struct TYPE_9__ {int paddr; int * vaddr; } ;
struct TYPE_10__ {int size; int base_paddr; TYPE_4__ alloc_idx; } ;
struct ath10k_htt {int eid; struct ath10k* ar; TYPE_5__ rx_ring; } ;
struct ath10k {int htc; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int,int) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct sk_buff* FUNC_5 (struct ath10k*,int) ;
 int FUNC_6 (int *,int ,struct sk_buff*) ;
 int FUNC_7 (struct htt_rx_ring_setup_ring32*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_10(struct ath10k_htt *VAR_20)
{
 struct ath10k *VAR_21 = VAR_20->ar;
 struct sk_buff *VAR_22;
 struct htt_cmd *VAR_23;
 struct htt_rx_ring_setup_ring32 *VAR_24;
 const int VAR_25 = 1;
 u16 VAR_26;
 u32 VAR_27;
 int VAR_28;
 int VAR_29;





 FUNC_0(!FUNC_1(VAR_3, 4));
 FUNC_0((VAR_3 & VAR_2) != 0);

 VAR_28 = sizeof(VAR_23->hdr) + sizeof(VAR_23->rx_setup_32.hdr)
     + (sizeof(*VAR_24) * VAR_25);
 VAR_22 = FUNC_5(VAR_21, VAR_28);
 if (!VAR_22)
  return -VAR_0;

 FUNC_9(VAR_22, VAR_28);

 VAR_23 = (struct htt_cmd *)VAR_22->data;
 VAR_24 = &VAR_23->rx_setup_32.rings[0];

 VAR_23->hdr.msg_type = VAR_1;
 VAR_23->rx_setup_32.hdr.num_rings = 1;


 VAR_26 = 0;
 VAR_26 |= VAR_6;
 VAR_26 |= VAR_11;
 VAR_26 |= VAR_17;
 VAR_26 |= VAR_16;
 VAR_26 |= VAR_9;
 VAR_26 |= VAR_8;
 VAR_26 |= VAR_12;
 VAR_26 |= VAR_10;
 VAR_26 |= VAR_18;
 VAR_26 |= VAR_5;
 VAR_26 |= VAR_19;
 VAR_26 |= VAR_13;
 VAR_26 |= VAR_4;
 VAR_26 |= VAR_7;
 VAR_26 |= VAR_14;
 VAR_26 |= VAR_15;

 VAR_27 = FUNC_4(*VAR_20->rx_ring.alloc_idx.vaddr);

 VAR_24->fw_idx_shadow_reg_paddr =
  FUNC_3(VAR_20->rx_ring.alloc_idx.paddr);
 VAR_24->rx_ring_base_paddr = FUNC_3(VAR_20->rx_ring.base_paddr);
 VAR_24->rx_ring_len = FUNC_2(VAR_20->rx_ring.size);
 VAR_24->rx_ring_bufsize = FUNC_2(VAR_3);
 VAR_24->flags = FUNC_2(VAR_26);
 VAR_24->fw_idx_init_val = FUNC_2(VAR_27);

 FUNC_7(VAR_24);
 VAR_29 = FUNC_6(&VAR_20->ar->htc, VAR_20->eid, VAR_22);
 if (VAR_29) {
  FUNC_8(VAR_22);
  return VAR_29;
 }

 return 0;
}
