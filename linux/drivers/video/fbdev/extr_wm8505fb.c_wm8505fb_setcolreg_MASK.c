
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_7__ {int blue; int green; int red; } ;
struct TYPE_6__ {int visual; } ;
struct TYPE_8__ {TYPE_3__ var; TYPE_2__ fix; } ;
struct wm8505fb_info {TYPE_4__ fb; } ;
struct TYPE_5__ {scalar_t__ grayscale; } ;
struct fb_info {unsigned int* pseudo_palette; TYPE_1__ var; } ;


 int VAR_0 ;

 unsigned int FUNC_0 (unsigned int,int *) ;
 struct wm8505fb_info* FUNC_1 (struct fb_info*) ;

__attribute__((used)) static int FUNC_2(unsigned VAR_1, unsigned VAR_2, unsigned VAR_3,
      unsigned VAR_4, unsigned VAR_5,
      struct fb_info *VAR_6) {
 struct wm8505fb_info *VAR_7 = FUNC_1(VAR_6);
 int VAR_8 = 1;
 unsigned int VAR_9;
 if (VAR_1 >= 256)
  return -VAR_0;

 if (VAR_6->var.grayscale)
  VAR_2 = VAR_3 = VAR_4 =
   (19595 * VAR_2 + 38470 * VAR_3 + 7471 * VAR_4) >> 16;

 switch (VAR_7->fb.fix.visual) {
 case 128:
  if (VAR_1 < 16) {
   u32 *VAR_10 = VAR_6->pseudo_palette;

   VAR_9 = FUNC_0(VAR_2, &VAR_7->fb.var.red);
   VAR_9 |= FUNC_0(VAR_3, &VAR_7->fb.var.green);
   VAR_9 |= FUNC_0(VAR_4, &VAR_7->fb.var.blue);

   VAR_10[VAR_1] = VAR_9;
   VAR_8 = 0;
  }
  break;
 }

 return VAR_8;
}
