
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u16 ;
struct sk_buff {int data; } ;
struct TYPE_3__ {int sw_err_cnt; } ;
struct hns3_enet_ring {size_t next_to_use; struct hns3_desc* desc; struct hns3_desc_cb* desc_cb; int syncp; TYPE_1__ stats; } ;
struct hns3_desc_cb {unsigned int length; int type; void* dma; void* priv; } ;
struct TYPE_4__ {void* bdtp_fe_sc_vld_ra_ri; void* send_size; } ;
struct hns3_desc {TYPE_2__ tx; void* addr; } ;
struct device {int dummy; } ;
typedef int skb_frag_t ;
typedef enum hns_desc_type { ____Placeholder_hns_desc_type } hns_desc_type ;
typedef void* dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 void* FUNC_0 (unsigned int) ;
 void* FUNC_1 (void*) ;
 void* FUNC_2 (struct device*,int ,unsigned int,int ) ;
 int FUNC_3 (struct device*,void*) ;
 int FUNC_4 (struct hns3_enet_ring*,struct sk_buff*,struct hns3_desc*) ;
 int FUNC_5 (unsigned int*,int) ;
 unsigned int FUNC_6 (unsigned int) ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_6 ;
 int FUNC_8 (struct hns3_enet_ring*,int ) ;
 struct device* FUNC_9 (struct hns3_enet_ring*) ;
 void* FUNC_10 (struct device*,int *,int ,unsigned int,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct hns3_enet_ring *VAR_7, void *VAR_8,
     unsigned int VAR_9, int VAR_10,
     enum hns_desc_type VAR_11)
{
 struct hns3_desc_cb *VAR_12 = &VAR_7->desc_cb[VAR_7->next_to_use];
 struct hns3_desc *VAR_13 = &VAR_7->desc[VAR_7->next_to_use];
 struct device *VAR_14 = FUNC_9(VAR_7);
 skb_frag_t *VAR_15;
 unsigned int VAR_16;
 int VAR_17, VAR_18;
 dma_addr_t VAR_19;

 if (VAR_11 == VAR_1) {
  struct sk_buff *VAR_20 = (struct sk_buff *)VAR_8;
  int VAR_21;

  VAR_21 = FUNC_4(VAR_7, VAR_20, VAR_13);
  if (FUNC_13(VAR_21))
   return VAR_21;

  VAR_19 = FUNC_2(VAR_14, VAR_20->data, VAR_9, VAR_2);
 } else {
  VAR_15 = (skb_frag_t *)VAR_8;
  VAR_19 = FUNC_10(VAR_14, VAR_15, 0, VAR_9, VAR_2);
 }

 if (FUNC_13(FUNC_3(VAR_14, VAR_19))) {
  FUNC_11(&VAR_7->syncp);
  VAR_7->stats.sw_err_cnt++;
  FUNC_12(&VAR_7->syncp);
  return -VAR_3;
 }

 VAR_12->length = VAR_9;

 if (FUNC_7(VAR_9 <= VAR_4)) {
  u16 VAR_22 = 0;

  VAR_12->priv = VAR_8;
  VAR_12->dma = VAR_19;
  VAR_12->type = VAR_11;
  VAR_13->addr = FUNC_1(VAR_19);
  VAR_13->tx.send_size = FUNC_0(VAR_9);
  FUNC_5(&VAR_22, VAR_10);
  VAR_13->tx.bdtp_fe_sc_vld_ra_ri =
   FUNC_0(VAR_22);

  FUNC_8(VAR_7, VAR_6);
  return 0;
 }

 VAR_16 = FUNC_6(VAR_9);
 VAR_18 = VAR_9 & VAR_5;
 VAR_18 = VAR_18 ? VAR_18 : VAR_4;


 for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
  u16 VAR_23 = 0;


  VAR_12->priv = VAR_8;
  VAR_12->dma = VAR_19 + VAR_4 * VAR_17;
  VAR_12->type = (VAR_11 == VAR_1 && !VAR_17) ?
    VAR_1 : VAR_0;


  VAR_13->addr = FUNC_1(VAR_19 + VAR_4 * VAR_17);
  VAR_13->tx.send_size = FUNC_0((VAR_17 == VAR_16 - 1) ?
         (u16)VAR_18 : (u16)VAR_4);
  FUNC_5(&VAR_23,
           VAR_10 && (VAR_17 == VAR_16 - 1) ?
      1 : 0);
  VAR_13->tx.bdtp_fe_sc_vld_ra_ri =
    FUNC_0(VAR_23);


  FUNC_8(VAR_7, VAR_6);

  VAR_12 = &VAR_7->desc_cb[VAR_7->next_to_use];
  VAR_13 = &VAR_7->desc[VAR_7->next_to_use];
 }

 return 0;
}
