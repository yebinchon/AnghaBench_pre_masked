
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int * mapping; } ;
struct TYPE_4__ {int smem_len; } ;
struct fb_info {TYPE_1__* fbops; TYPE_2__ fix; int deferred_work; struct fb_deferred_io* fbdefio; } ;
struct fb_deferred_io {int lock; } ;
struct TYPE_3__ {int * fb_mmap; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 struct page* FUNC_2 (struct fb_info*,int) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct fb_info *VAR_1)
{
 struct fb_deferred_io *VAR_2 = VAR_1->fbdefio;
 struct page *VAR_3;
 int VAR_4;

 FUNC_0(!VAR_2);
 FUNC_1(&VAR_1->deferred_work);


 for (VAR_4 = 0 ; VAR_4 < VAR_1->fix.smem_len; VAR_4 += VAR_0) {
  VAR_3 = FUNC_2(VAR_1, VAR_4);
  VAR_3->mapping = ((void*)0);
 }

 VAR_1->fbops->fb_mmap = ((void*)0);
 FUNC_3(&VAR_2->lock);
}
