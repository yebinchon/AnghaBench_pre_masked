
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_fl {unsigned int avail; size_t pidx; size_t size; unsigned int pend_cred; int cntxt_id; int * desc; struct rx_sw_desc* sdesc; int alloc_failed; int large_alloc_failed; } ;
struct sge {int fl_pg_order; int starving_fl; } ;
struct rx_sw_desc {int dummy; } ;
struct page {int dummy; } ;
struct adapter {struct sge sge; int pdev_dev; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;
typedef int __be64 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct page* FUNC_1 (int ) ;
 struct page* FUNC_2 (int ,int) ;
 int FUNC_3 (struct page*,int) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ,struct page*,int ,int,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct adapter*,struct sge_fl*) ;
 int FUNC_8 (struct page*,int) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct adapter*,struct sge_fl*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct rx_sw_desc*,struct page*,int ) ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static unsigned int FUNC_15(struct adapter *VAR_5, struct sge_fl *VAR_6,
         int VAR_7, gfp_t VAR_8)
{
 struct sge *VAR_9 = &VAR_5->sge;
 struct page *VAR_10;
 dma_addr_t VAR_11;
 unsigned int VAR_12 = VAR_6->avail;
 __be64 *VAR_13 = &VAR_6->desc[VAR_6->pidx];
 struct rx_sw_desc *VAR_14 = &VAR_6->sdesc[VAR_6->pidx];






 FUNC_0(VAR_6->avail + VAR_7 > VAR_6->size - VAR_0);

 VAR_8 |= VAR_4;







 if (VAR_9->fl_pg_order == 0)
  goto alloc_small_pages;

 while (VAR_7) {
  VAR_10 = FUNC_2(VAR_8, VAR_9->fl_pg_order);
  if (FUNC_14(!VAR_10)) {





   VAR_6->large_alloc_failed++;
   break;
  }
  FUNC_8(VAR_10, VAR_1 << VAR_9->fl_pg_order);

  VAR_11 = FUNC_5(VAR_5->pdev_dev, VAR_10, 0,
     VAR_1 << VAR_9->fl_pg_order,
     VAR_2);
  if (FUNC_14(FUNC_6(VAR_5->pdev_dev, VAR_11))) {
   FUNC_3(VAR_10, VAR_9->fl_pg_order);
   goto out;
  }
  VAR_11 |= VAR_3;
  *VAR_13++ = FUNC_4(VAR_11);

  FUNC_12(VAR_14, VAR_10, VAR_11);
  VAR_14++;

  VAR_6->avail++;
  if (++VAR_6->pidx == VAR_6->size) {
   VAR_6->pidx = 0;
   VAR_14 = VAR_6->sdesc;
   VAR_13 = VAR_6->desc;
  }
  VAR_7--;
 }

alloc_small_pages:
 while (VAR_7--) {
  VAR_10 = FUNC_1(VAR_8);
  if (FUNC_14(!VAR_10)) {
   VAR_6->alloc_failed++;
   break;
  }
  FUNC_8(VAR_10, VAR_1);

  VAR_11 = FUNC_5(VAR_5->pdev_dev, VAR_10, 0, VAR_1,
           VAR_2);
  if (FUNC_14(FUNC_6(VAR_5->pdev_dev, VAR_11))) {
   FUNC_9(VAR_10);
   break;
  }
  *VAR_13++ = FUNC_4(VAR_11);

  FUNC_12(VAR_14, VAR_10, VAR_11);
  VAR_14++;

  VAR_6->avail++;
  if (++VAR_6->pidx == VAR_6->size) {
   VAR_6->pidx = 0;
   VAR_14 = VAR_6->sdesc;
   VAR_13 = VAR_6->desc;
  }
 }

out:





 VAR_12 = VAR_6->avail - VAR_12;
 VAR_6->pend_cred += VAR_12;
 FUNC_10(VAR_5, VAR_6);

 if (FUNC_14(FUNC_7(VAR_5, VAR_6))) {
  FUNC_13();
  FUNC_11(VAR_6->cntxt_id, VAR_5->sge.starving_fl);
 }

 return VAR_12;
}
