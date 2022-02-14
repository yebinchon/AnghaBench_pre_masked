
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct sk_buff {unsigned int len; int data; } ;
struct page {int dummy; } ;
struct netcp_intf {int ndev_dev; int tx_pool; struct device* dev; } ;
struct knav_dma_desc {scalar_t__ desc_info; scalar_t__ next_desc; } ;
struct device {int dummy; } ;
typedef int skb_frag_t ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_3__ {int nr_frags; scalar_t__ frag_list; int * frags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct knav_dma_desc*) ;
 unsigned int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (struct device*,struct page*,unsigned int,unsigned int,int ) ;
 scalar_t__ FUNC_5 (struct device*,int ,unsigned int,int ) ;
 int FUNC_6 (struct device*,scalar_t__) ;
 int FUNC_7 (struct device*,scalar_t__,unsigned int,int ) ;
 int FUNC_8 (struct device*,scalar_t__,unsigned int,int ) ;
 struct knav_dma_desc* FUNC_9 (int ) ;
 int FUNC_10 (int ,struct knav_dma_desc*,int,scalar_t__*,unsigned int*) ;
 scalar_t__ FUNC_11 (int ,struct knav_dma_desc*) ;
 int FUNC_12 (struct netcp_intf*,struct knav_dma_desc*,int) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (scalar_t__,unsigned int,int ,struct knav_dma_desc*) ;
 int FUNC_15 (unsigned int*,int,scalar_t__*) ;
 unsigned int FUNC_16 (int *) ;
 struct page* FUNC_17 (int *) ;
 unsigned int FUNC_18 (int *) ;
 unsigned int FUNC_19 (struct sk_buff*) ;
 scalar_t__ FUNC_20 (struct sk_buff*) ;
 TYPE_1__* FUNC_21 (struct sk_buff*) ;
 scalar_t__ FUNC_22 (int) ;

__attribute__((used)) static struct knav_dma_desc*
FUNC_23(struct sk_buff *VAR_2, struct netcp_intf *VAR_3)
{
 struct knav_dma_desc *VAR_4, *VAR_5, *VAR_6;
 unsigned int VAR_7 = FUNC_19(VAR_2);
 struct device *VAR_8 = VAR_3->dev;
 dma_addr_t VAR_9;
 unsigned int VAR_10;
 int VAR_11;


 VAR_9 = FUNC_5(VAR_8, VAR_2->data, VAR_7, VAR_0);
 if (FUNC_22(FUNC_6(VAR_8, VAR_9))) {
  FUNC_2(VAR_3->ndev_dev, "Failed to map skb buffer\n");
  return ((void*)0);
 }

 VAR_4 = FUNC_9(VAR_3->tx_pool);
 if (FUNC_0(VAR_4)) {
  FUNC_2(VAR_3->ndev_dev, "out of TX desc\n");
  FUNC_8(VAR_8, VAR_9, VAR_7, VAR_0);
  return ((void*)0);
 }

 FUNC_14(VAR_9, VAR_7, 0, VAR_4);
 if (FUNC_20(VAR_2)) {
  FUNC_13(FUNC_21(VAR_2));
 } else {
  VAR_4->next_desc = 0;
  goto upd_pkt_len;
 }

 VAR_6 = VAR_4;


 for (VAR_11 = 0; VAR_11 < FUNC_21(VAR_2)->nr_frags; VAR_11++) {
  skb_frag_t *VAR_12 = &FUNC_21(VAR_2)->frags[VAR_11];
  struct page *VAR_13 = FUNC_17(VAR_12);
  u32 VAR_14 = FUNC_16(VAR_12);
  u32 VAR_15 = FUNC_18(VAR_12);
  dma_addr_t VAR_16;
  u32 VAR_17;

  VAR_9 = FUNC_4(VAR_8, VAR_13, VAR_14, VAR_15,
     VAR_0);
  if (FUNC_22(!VAR_9)) {
   FUNC_2(VAR_3->ndev_dev, "Failed to map skb page\n");
   goto free_descs;
  }

  VAR_5 = FUNC_9(VAR_3->tx_pool);
  if (FUNC_0(VAR_5)) {
   FUNC_2(VAR_3->ndev_dev, "out of TX desc for frags\n");
   FUNC_7(VAR_8, VAR_9, VAR_15, VAR_0);
   goto free_descs;
  }

  VAR_16 = FUNC_11(VAR_3->tx_pool, VAR_5);
  FUNC_14(VAR_9, VAR_15, 0, VAR_5);
  VAR_17 = (u32)VAR_16;
  FUNC_15(&VAR_17, 1, &VAR_6->next_desc);
  VAR_7 += VAR_15;
  if (VAR_6 != VAR_4)
   FUNC_10(VAR_3->tx_pool, VAR_6,
        sizeof(*VAR_6), &VAR_16, &VAR_10);
  VAR_6 = VAR_5;
 }
 if (VAR_6 != VAR_4)
  FUNC_10(VAR_3->tx_pool, VAR_6, sizeof(*VAR_6),
       &VAR_9, &VAR_10);


 if (FUNC_21(VAR_2)->frag_list) {
  FUNC_3(VAR_3->ndev_dev, "NETIF_F_FRAGLIST not supported\n");
  goto free_descs;
 }

upd_pkt_len:
 FUNC_1(VAR_7 != VAR_2->len);

 VAR_7 &= VAR_1;
 FUNC_15(&VAR_7, 1, &VAR_4->desc_info);
 return VAR_4;

free_descs:
 FUNC_12(VAR_3, VAR_4, sizeof(*VAR_4));
 return ((void*)0);
}
