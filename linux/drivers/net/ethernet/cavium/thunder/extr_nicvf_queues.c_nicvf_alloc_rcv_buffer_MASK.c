
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct rbdr {scalar_t__ is_xdp; } ;
struct pgcache {scalar_t__ dma_addr; int * page; } ;
struct nicvf {scalar_t__ rb_page_offset; int * rb_page; TYPE_3__* pdev; TYPE_2__* pnicvf; int rb_pageref; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {TYPE_1__* drv_stats; } ;
struct TYPE_4__ {int rcv_buffer_alloc_failures; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int *,scalar_t__,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 struct pgcache* FUNC_3 (struct nicvf*,struct rbdr*,int ) ;
 int FUNC_4 (struct nicvf*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static inline int FUNC_6(struct nicvf *VAR_5, struct rbdr *VAR_6,
      gfp_t VAR_7, u32 VAR_8, u64 *VAR_9)
{
 struct pgcache *VAR_10 = ((void*)0);




 if (!VAR_6->is_xdp && VAR_5->rb_page &&
     ((VAR_5->rb_page_offset + VAR_8) <= VAR_3)) {
  VAR_5->rb_pageref++;
  goto ret;
 }

 FUNC_4(VAR_5);
 VAR_5->rb_page = ((void*)0);


 VAR_10 = FUNC_3(VAR_5, VAR_6, VAR_7);
 if (!VAR_10 && !VAR_5->rb_page) {
  FUNC_5(VAR_5->pnicvf->drv_stats->rcv_buffer_alloc_failures);
  return -VAR_2;
 }

 VAR_5->rb_page_offset = 0;


 if (VAR_6->is_xdp)
  VAR_8 += VAR_4;


 if (VAR_10)
  VAR_5->rb_page = VAR_10->page;
ret:
 if (VAR_6->is_xdp && VAR_10 && VAR_10->dma_addr) {
  *VAR_9 = VAR_10->dma_addr;
 } else {

  *VAR_9 = (u64)FUNC_1(&VAR_5->pdev->dev, VAR_5->rb_page,
      VAR_5->rb_page_offset, VAR_8,
      VAR_1,
      VAR_0);
  if (FUNC_2(&VAR_5->pdev->dev, (dma_addr_t)*VAR_9)) {
   if (!VAR_5->rb_page_offset)
    FUNC_0(VAR_5->rb_page, 0);
   VAR_5->rb_page = ((void*)0);
   return -VAR_2;
  }
  if (VAR_10)
   VAR_10->dma_addr = *VAR_9 + VAR_4;
  VAR_5->rb_page_offset += VAR_8;
 }

 return 0;
}
