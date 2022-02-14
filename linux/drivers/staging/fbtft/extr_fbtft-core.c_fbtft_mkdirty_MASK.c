
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fbtft_par {int dirty_lines_start; int dirty_lines_end; int dirty_lock; } ;
struct TYPE_2__ {int yres; } ;
struct fb_info {int deferred_work; TYPE_1__ var; struct fb_deferred_io* fbdefio; struct fbtft_par* par; } ;
struct fb_deferred_io {int delay; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct fb_info *VAR_0, int VAR_1, int VAR_2)
{
 struct fbtft_par *VAR_3 = VAR_0->par;
 struct fb_deferred_io *VAR_4 = VAR_0->fbdefio;


 if (VAR_1 == -1) {
  VAR_1 = 0;
  VAR_2 = VAR_0->var.yres - 1;
 }


 FUNC_1(&VAR_3->dirty_lock);
 if (VAR_1 < VAR_3->dirty_lines_start)
  VAR_3->dirty_lines_start = VAR_1;
 if (VAR_1 + VAR_2 - 1 > VAR_3->dirty_lines_end)
  VAR_3->dirty_lines_end = VAR_1 + VAR_2 - 1;
 FUNC_2(&VAR_3->dirty_lock);


 FUNC_0(&VAR_0->deferred_work, VAR_4->delay);
}
