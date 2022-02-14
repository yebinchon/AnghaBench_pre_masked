
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_fl {unsigned int avail; size_t pidx; size_t size; unsigned int pend_cred; scalar_t__ cntxt_id; int low; int * desc; struct rx_sw_desc* sdesc; int mapping_err; int alloc_failed; int large_alloc_failed; } ;
struct sge {int fl_pg_order; int starving_fl; scalar_t__ egr_start; int blocked_fl; } ;
struct rx_sw_desc {int dummy; } ;
struct page {int dummy; } ;
struct adapter {struct sge sge; int pdev_dev; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;
typedef int __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct page*,int) ;
 struct page* FUNC_1 (int,int,int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct page*,int ,int,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct adapter*,struct sge_fl*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct adapter*,struct sge_fl*) ;
 int FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (struct rx_sw_desc*,struct page*,int ) ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (scalar_t__,int ) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static unsigned int FUNC_14(struct adapter *VAR_5, struct sge_fl *VAR_6, int VAR_7,
         gfp_t VAR_8)
{
 struct sge *VAR_9 = &VAR_5->sge;
 struct page *VAR_10;
 dma_addr_t VAR_11;
 unsigned int VAR_12 = VAR_6->avail;
 __be64 *VAR_13 = &VAR_6->desc[VAR_6->pidx];
 struct rx_sw_desc *VAR_14 = &VAR_6->sdesc[VAR_6->pidx];
 int VAR_15;






 VAR_8 |= VAR_4;
 VAR_15 = FUNC_3(VAR_5->pdev_dev);

 if (VAR_9->fl_pg_order == 0)
  goto alloc_small_pages;




 while (VAR_7) {
  VAR_10 = FUNC_1(VAR_15, VAR_8 | VAR_3, VAR_9->fl_pg_order);
  if (FUNC_13(!VAR_10)) {
   VAR_6->large_alloc_failed++;
   break;
  }

  VAR_11 = FUNC_4(VAR_5->pdev_dev, VAR_10, 0,
           VAR_0 << VAR_9->fl_pg_order,
           VAR_1);
  if (FUNC_13(FUNC_5(VAR_5->pdev_dev, VAR_11))) {
   FUNC_0(VAR_10, VAR_9->fl_pg_order);
   VAR_6->mapping_err++;
   goto out;
  }
  VAR_11 |= VAR_2;
  *VAR_13++ = FUNC_2(VAR_11);

  FUNC_10(VAR_14, VAR_10, VAR_11);
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
  VAR_10 = FUNC_1(VAR_15, VAR_8, 0);
  if (FUNC_13(!VAR_10)) {
   VAR_6->alloc_failed++;
   break;
  }

  VAR_11 = FUNC_4(VAR_5->pdev_dev, VAR_10, 0, VAR_0,
           VAR_1);
  if (FUNC_13(FUNC_5(VAR_5->pdev_dev, VAR_11))) {
   FUNC_7(VAR_10);
   VAR_6->mapping_err++;
   goto out;
  }
  *VAR_13++ = FUNC_2(VAR_11);

  FUNC_10(VAR_14, VAR_10, VAR_11);
  VAR_14++;

  VAR_6->avail++;
  if (++VAR_6->pidx == VAR_6->size) {
   VAR_6->pidx = 0;
   VAR_14 = VAR_6->sdesc;
   VAR_13 = VAR_6->desc;
  }
 }

out: VAR_12 = VAR_6->avail - VAR_12;
 VAR_6->pend_cred += VAR_12;
 FUNC_8(VAR_5, VAR_6);

 if (FUNC_13(FUNC_6(VAR_5, VAR_6))) {
  FUNC_11();
  VAR_6->low++;
  FUNC_9(VAR_6->cntxt_id - VAR_5->sge.egr_start,
   VAR_5->sge.starving_fl);
 }

 return VAR_12;
}
