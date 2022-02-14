
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct xgene_enet_raw_desc16 {int m1; } ;
struct xgene_enet_pdata {TYPE_1__* ring_ops; } ;
struct xgene_enet_desc_ring {int slots; int tail; struct page** frag_page; struct xgene_enet_raw_desc16* raw_desc16; struct net_device* ndev; } ;
struct page {int dummy; } ;
struct net_device {int dummy; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int (* wr_cmd ) (struct xgene_enet_desc_ring*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 struct page* FUNC_3 () ;
 int FUNC_4 (struct device*,struct page*,int ,int ,int ) ;
 int FUNC_5 (struct device*,int ) ;
 struct device* FUNC_6 (struct net_device*) ;
 struct xgene_enet_pdata* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct xgene_enet_desc_ring*,int) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct xgene_enet_desc_ring *VAR_6,
          u32 VAR_7)
{
 struct xgene_enet_raw_desc16 *VAR_8;
 struct xgene_enet_pdata *VAR_9;
 struct net_device *VAR_10;
 dma_addr_t VAR_11;
 struct device *VAR_12;
 struct page *VAR_13;
 u32 VAR_14, VAR_15;
 u16 VAR_16;
 int VAR_17;

 if (FUNC_10(!VAR_6))
  return 0;

 VAR_10 = VAR_6->ndev;
 VAR_9 = FUNC_7(VAR_10);
 VAR_12 = FUNC_6(VAR_10);
 VAR_14 = VAR_6->slots - 1;
 VAR_15 = VAR_6->tail;

 for (VAR_17 = 0; VAR_17 < VAR_7; VAR_17++) {
  VAR_8 = &VAR_6->raw_desc16[VAR_15];

  VAR_13 = FUNC_3();
  if (FUNC_10(!VAR_13))
   return -VAR_4;

  VAR_11 = FUNC_4(VAR_12, VAR_13, 0,
     VAR_5, VAR_3);
  if (FUNC_10(FUNC_5(VAR_12, VAR_11))) {
   FUNC_8(VAR_13);
   return -VAR_4;
  }

  VAR_16 = FUNC_11(VAR_5);
  VAR_8->m1 = FUNC_2(FUNC_1(VAR_2, VAR_11) |
        FUNC_1(VAR_0, VAR_16) |
        FUNC_0(VAR_1));

  VAR_6->frag_page[VAR_15] = VAR_13;
  VAR_15 = (VAR_15 + 1) & VAR_14;
 }

 VAR_9->ring_ops->wr_cmd(VAR_6, VAR_7);
 VAR_6->tail = VAR_15;

 return 0;
}
