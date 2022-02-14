
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_videomode {int yres; int xres; } ;
struct TYPE_2__ {scalar_t__ gtf; } ;
struct fb_info {int par; int var; TYPE_1__ monspecs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,struct fb_info*) ;
 int FUNC_1 (int *,struct fb_videomode*) ;
 int FUNC_2 (int ,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct fb_videomode *VAR_1,
     struct fb_info *VAR_2)
{
 if (VAR_2->monspecs.gtf) {
  FUNC_1(&VAR_2->var, VAR_1);
  if (FUNC_0(&VAR_2->var, VAR_2))
   return 0;
 }

 if (FUNC_2(VAR_2->par, VAR_1->xres, VAR_1->yres, 8,
    VAR_0) == -1)
  return 0;

 return 1;
}
