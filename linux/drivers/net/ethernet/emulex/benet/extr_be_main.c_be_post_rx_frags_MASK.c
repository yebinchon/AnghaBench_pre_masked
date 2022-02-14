
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct page {int dummy; } ;
struct device {int dummy; } ;
struct be_rx_page_info {int page_offset; int last_frag; struct page* page; } ;
struct be_queue_info {size_t head; int used; int id; } ;
struct be_rx_obj {int rx_post_starved; struct be_rx_page_info* page_info_tbl; struct be_queue_info q; struct be_adapter* adapter; } ;
struct be_eth_rx_d {void* fragpa_hi; void* fragpa_lo; } ;
struct TYPE_5__ {int dma_map_errors; } ;
struct be_adapter {scalar_t__ big_page_size; TYPE_2__ drv_stats; TYPE_1__* pdev; } ;
typedef int gfp_t ;
struct TYPE_6__ {int rx_post_fail; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 struct page* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (struct be_adapter*,int ,scalar_t__) ;
 int VAR_2 ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct device*,struct page*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_6 (struct device*,int) ;
 int FUNC_7 (struct be_rx_page_info*,int ,int) ;
 int FUNC_8 (struct page*) ;
 scalar_t__ FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct be_queue_info*) ;
 struct be_eth_rx_d* FUNC_12 (struct be_queue_info*) ;
 scalar_t__ VAR_3 ;
 TYPE_3__* FUNC_13 (struct be_rx_obj*) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (int) ;

__attribute__((used)) static void FUNC_16(struct be_rx_obj *VAR_4, gfp_t VAR_5, u32 VAR_6)
{
 struct be_adapter *VAR_7 = VAR_4->adapter;
 struct be_rx_page_info *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
 struct be_queue_info *VAR_10 = &VAR_4->q;
 struct page *VAR_11 = ((void*)0);
 struct device *VAR_12 = &VAR_7->pdev->dev;
 struct be_eth_rx_d *VAR_13;
 u64 VAR_14 = 0, VAR_15;
 u32 VAR_16, VAR_17 = 0, VAR_18 = 0;

 VAR_8 = &VAR_4->page_info_tbl[VAR_10->head];
 for (VAR_16 = 0; VAR_16 < VAR_6 && !VAR_8->page; VAR_16++) {
  if (!VAR_11) {
   VAR_11 = FUNC_2(VAR_7->big_page_size, VAR_5);
   if (FUNC_14(!VAR_11)) {
    FUNC_13(VAR_4)->rx_post_fail++;
    break;
   }
   VAR_14 = FUNC_5(VAR_12, VAR_11, 0,
          VAR_7->big_page_size,
          VAR_0);
   if (FUNC_6(VAR_12, VAR_14)) {
    FUNC_10(VAR_11);
    VAR_11 = ((void*)0);
    VAR_7->drv_stats.dma_map_errors++;
    break;
   }
   VAR_17 = 0;
  } else {
   FUNC_8(VAR_11);
   VAR_17 += VAR_3;
  }
  VAR_8->page_offset = VAR_17;
  VAR_8->page = VAR_11;

  VAR_13 = FUNC_12(VAR_10);
  VAR_15 = VAR_14 + VAR_8->page_offset;
  VAR_13->fragpa_lo = FUNC_4(VAR_15 & 0xFFFFFFFF);
  VAR_13->fragpa_hi = FUNC_4(FUNC_15(VAR_15));


  if ((VAR_17 + VAR_3 + VAR_3) >
     VAR_7->big_page_size) {
   VAR_11 = ((void*)0);
   VAR_8->last_frag = 1;
   FUNC_7(VAR_8, VAR_2, VAR_14);
  } else {
   FUNC_7(VAR_8, VAR_2, VAR_15);
  }

  VAR_9 = VAR_8;
  FUNC_11(VAR_10);
  VAR_8 = &VAR_4->page_info_tbl[VAR_10->head];
 }




 if (VAR_11) {
  VAR_9->last_frag = 1;
  FUNC_7(VAR_9, VAR_2, VAR_14);
 }

 if (VAR_16) {
  FUNC_0(VAR_16, &VAR_10->used);
  if (VAR_4->rx_post_starved)
   VAR_4->rx_post_starved = 0;
  do {
   VAR_18 = FUNC_9(VAR_1, VAR_16);
   FUNC_3(VAR_7, VAR_10->id, VAR_18);
   VAR_16 -= VAR_18;
  } while (VAR_16);
 } else if (FUNC_1(&VAR_10->used) == 0) {

  VAR_4->rx_post_starved = 1;
 }
}
