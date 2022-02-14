
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u16 ;
struct xgene_enet_raw_desc {int m0; int m3; int m1; } ;
struct xgene_enet_pdata {int mss_lock; int * mss_refcnt; } ;
struct xgene_enet_desc_ring {int ndev; int tx_errors; int tx_dropped; int * frag_dma_addr; struct sk_buff** cp_skb; } ;
struct sk_buff {int dummy; } ;
struct device {int dummy; } ;
typedef int skb_frag_t ;
typedef int dma_addr_t ;
struct TYPE_2__ {int nr_frags; int * frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 size_t FUNC_1 (int ,int ) ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct device*,int ,int ,int ) ;
 int FUNC_4 (struct device*,size_t,int ,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 struct device* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 struct xgene_enet_pdata* FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct sk_buff*) ;
 TYPE_1__* FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(struct xgene_enet_desc_ring *VAR_7,
        struct xgene_enet_raw_desc *VAR_8)
{
 struct xgene_enet_pdata *VAR_9 = FUNC_9(VAR_7->ndev);
 struct sk_buff *VAR_10;
 struct device *VAR_11;
 skb_frag_t *VAR_12;
 dma_addr_t *VAR_13;
 u16 VAR_14;
 u8 VAR_15;
 u8 VAR_16;
 int VAR_17;

 VAR_14 = FUNC_1(VAR_6, FUNC_5(VAR_8->m0));
 VAR_10 = VAR_7->cp_skb[VAR_14];
 VAR_13 = &VAR_7->frag_dma_addr[VAR_14 * VAR_4];

 VAR_11 = FUNC_7(VAR_7->ndev);
 FUNC_4(VAR_11, FUNC_1(VAR_0, FUNC_5(VAR_8->m1)),
    FUNC_11(VAR_10),
    VAR_1);

 for (VAR_17 = 0; VAR_17 < FUNC_12(VAR_10)->nr_frags; VAR_17++) {
  VAR_12 = &FUNC_12(VAR_10)->frags[VAR_17];
  FUNC_3(VAR_11, VAR_13[VAR_17], FUNC_10(VAR_12),
          VAR_1);
 }

 if (FUNC_0(VAR_2, FUNC_5(VAR_8->m3))) {
  VAR_15 = FUNC_1(VAR_5, FUNC_5(VAR_8->m3));
  FUNC_13(&VAR_9->mss_lock);
  VAR_9->mss_refcnt[VAR_15]--;
  FUNC_14(&VAR_9->mss_lock);
 }


 VAR_16 = FUNC_1(VAR_3, FUNC_5(VAR_8->m0));
 if (FUNC_15(VAR_16 > 2)) {
  VAR_7->tx_dropped++;
  VAR_7->tx_errors++;
 }

 if (FUNC_6(VAR_10)) {
  FUNC_2(VAR_10);
 } else {
  FUNC_8(VAR_7->ndev, "completion skb is NULL\n");
 }

 return 0;
}
