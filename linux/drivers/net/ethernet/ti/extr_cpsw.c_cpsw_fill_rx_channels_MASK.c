
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page_pool {int dummy; } ;
struct page {int dummy; } ;
struct cpsw_priv {int ndev; struct cpsw_common* cpsw; } ;
struct cpsw_meta_xdp {int ch; int ndev; } ;
struct cpsw_common {int rx_ch_num; int rx_packet_max; TYPE_1__* rxv; struct page_pool** page_pool; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {int ch; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct page*,scalar_t__,int ,int ) ;
 int FUNC_2 (struct cpsw_priv*,int ,char*,...) ;
 int FUNC_3 (struct cpsw_priv*,int ,char*,int,int) ;
 int VAR_3 ;
 struct cpsw_meta_xdp* FUNC_4 (struct page*) ;
 struct page* FUNC_5 (struct page_pool*) ;
 scalar_t__ FUNC_6 (struct page*) ;
 int FUNC_7 (struct page_pool*,struct page*) ;

int FUNC_8(struct cpsw_priv *VAR_4)
{
 struct cpsw_common *VAR_5 = VAR_4->cpsw;
 struct cpsw_meta_xdp *VAR_6;
 struct page_pool *VAR_7;
 struct page *VAR_8;
 int VAR_9;
 int VAR_10, VAR_11, VAR_12;
 dma_addr_t VAR_13;

 for (VAR_10 = 0; VAR_10 < VAR_5->rx_ch_num; VAR_10++) {
  VAR_7 = VAR_5->page_pool[VAR_10];
  VAR_9 = FUNC_0(VAR_5->rxv[VAR_10].ch);
  for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
   VAR_8 = FUNC_5(VAR_7);
   if (!VAR_8) {
    FUNC_2(VAR_4, VAR_3, "allocate rx page err\n");
    return -VAR_2;
   }

   VAR_6 = FUNC_4(VAR_8) + VAR_1;
   VAR_6->ndev = VAR_4->ndev;
   VAR_6->ch = VAR_10;

   VAR_13 = FUNC_6(VAR_8) + VAR_0;
   VAR_12 = FUNC_1(VAR_5->rxv[VAR_10].ch,
           VAR_8, VAR_13,
           VAR_5->rx_packet_max,
           0);
   if (VAR_12 < 0) {
    FUNC_2(VAR_4, VAR_3,
      "cannot submit page to channel %d rx, error %d\n",
      VAR_10, VAR_12);
    FUNC_7(VAR_7, VAR_8);
    return VAR_12;
   }
  }

  FUNC_3(VAR_4, VAR_3, "ch %d rx, submitted %d descriptors\n",
     VAR_10, VAR_9);
 }

 return 0;
}
