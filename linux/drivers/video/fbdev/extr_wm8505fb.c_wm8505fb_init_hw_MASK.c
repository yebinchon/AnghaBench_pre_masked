
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int smem_start; } ;
struct TYPE_5__ {TYPE_1__ fix; } ;
struct wm8505fb_info {scalar_t__ regbase; TYPE_2__ fb; } ;
struct TYPE_6__ {int xres; int xres_virtual; } ;
struct fb_info {TYPE_3__ var; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 struct wm8505fb_info* FUNC_0 (struct fb_info*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct fb_info *VAR_10)
{
 struct wm8505fb_info *VAR_11 = FUNC_0(VAR_10);

 int VAR_12;


 for (VAR_12 = 0; VAR_12 < 0x200; VAR_12 += 4)
  FUNC_1(0, VAR_11->regbase + VAR_12);


 FUNC_1(VAR_11->fb.fix.smem_start, VAR_11->regbase + VAR_3);
 FUNC_1(VAR_11->fb.fix.smem_start, VAR_11->regbase + VAR_4);






 FUNC_1(0x31c, VAR_11->regbase + VAR_0);
 FUNC_1(1, VAR_11->regbase + VAR_1);


 FUNC_1(VAR_10->var.xres, VAR_11->regbase + VAR_8);
 FUNC_1(VAR_10->var.xres_virtual, VAR_11->regbase + VAR_9);


 FUNC_1(0xf, VAR_11->regbase + VAR_5);
 FUNC_1(4, VAR_11->regbase + VAR_2);
 FUNC_1(1, VAR_11->regbase + VAR_6);
 FUNC_1(1, VAR_11->regbase + VAR_7);

 return 0;
}
