
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rbdr {size_t pgidx; int pgalloc; int pgcnt; struct pgcache* pgcache; scalar_t__ is_xdp; } ;
struct pgcache {int ref_count; struct page* page; scalar_t__ dma_addr; } ;
struct page {int _refcount; } ;
struct nicvf {struct page* rb_page; TYPE_2__* pnicvf; } ;
typedef int gfp_t ;
struct TYPE_4__ {TYPE_1__* drv_stats; } ;
struct TYPE_3__ {int page_alloc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct page* FUNC_0 (int,int ) ;
 int FUNC_1 (struct page*,int) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static inline struct pgcache *FUNC_5(struct nicvf *VAR_3,
            struct rbdr *VAR_4, gfp_t VAR_5)
{
 int VAR_6;
 struct page *VAR_7 = ((void*)0);
 struct pgcache *VAR_8, *VAR_9;


 VAR_8 = &VAR_4->pgcache[VAR_4->pgidx];
 VAR_7 = VAR_8->page;

 if (VAR_7) {
  VAR_6 = FUNC_2(VAR_7);





  if (VAR_4->is_xdp) {
   if (VAR_6 == VAR_8->ref_count)
    VAR_8->ref_count--;
   else
    VAR_7 = ((void*)0);
  } else if (VAR_6 != 1) {
   VAR_7 = ((void*)0);
  }
 }

 if (!VAR_7) {
  VAR_7 = FUNC_0(VAR_5 | VAR_1 | VAR_2, 0);
  if (!VAR_7)
   return ((void*)0);

  FUNC_4(VAR_3->pnicvf->drv_stats->page_alloc);


  if (VAR_4->pgalloc >= VAR_4->pgcnt) {

   VAR_3->rb_page = VAR_7;
   return ((void*)0);
  }


  VAR_8->page = VAR_7;
  VAR_8->dma_addr = 0;
  VAR_8->ref_count = 0;
  VAR_4->pgalloc++;
 }


 if (VAR_4->is_xdp) {







  if (!VAR_8->ref_count) {
   VAR_8->ref_count = VAR_0;
   FUNC_1(VAR_7, VAR_0);
  }
 } else {




  FUNC_1(VAR_7, 1);
 }

 VAR_4->pgidx++;
 VAR_4->pgidx &= (VAR_4->pgcnt - 1);


 VAR_9 = &VAR_4->pgcache[VAR_4->pgidx];
 VAR_7 = VAR_9->page;
 if (VAR_7)
  FUNC_3(&VAR_7->_refcount);

 return VAR_8;
}
