
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xenfb_info {int nr_pages; TYPE_3__* page; void** gfns; void** fb; } ;
struct TYPE_5__ {int smem_len; int line_length; } ;
struct TYPE_4__ {int bits_per_pixel; int yres; int xres; } ;
struct fb_info {TYPE_2__ fix; TYPE_1__ var; } ;
struct TYPE_6__ {scalar_t__ out_prod; scalar_t__ out_cons; scalar_t__ in_prod; scalar_t__ in_cons; int mem_length; int line_length; int depth; int height; int width; void** pd; } ;


 int VAR_0 ;
 void* FUNC_0 (void**) ;

__attribute__((used)) static void FUNC_1(struct xenfb_info *VAR_1,
       struct fb_info *VAR_2)
{
 int VAR_3;
 int VAR_4 = VAR_0 / sizeof(VAR_1->gfns[0]);

 for (VAR_3 = 0; VAR_3 < VAR_1->nr_pages; VAR_3++)
  VAR_1->gfns[VAR_3] = FUNC_0(VAR_1->fb + VAR_3 * VAR_0);

 for (VAR_3 = 0; VAR_3 * VAR_4 < VAR_1->nr_pages; VAR_3++)
  VAR_1->page->pd[VAR_3] = FUNC_0(&VAR_1->gfns[VAR_3 * VAR_4]);

 VAR_1->page->width = VAR_2->var.xres;
 VAR_1->page->height = VAR_2->var.yres;
 VAR_1->page->depth = VAR_2->var.bits_per_pixel;
 VAR_1->page->line_length = VAR_2->fix.line_length;
 VAR_1->page->mem_length = VAR_2->fix.smem_len;
 VAR_1->page->in_cons = VAR_1->page->in_prod = 0;
 VAR_1->page->out_cons = VAR_1->page->out_prod = 0;
}
