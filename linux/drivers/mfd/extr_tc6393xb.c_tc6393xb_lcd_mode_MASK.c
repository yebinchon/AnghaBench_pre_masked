
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc6393xb {int lock; scalar_t__ scr; } ;
struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct fb_videomode {int pixclock; } ;


 scalar_t__ VAR_0 ;
 struct tc6393xb* FUNC_0 (int ) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct platform_device *VAR_1,
     const struct fb_videomode *VAR_2) {
 struct tc6393xb *VAR_3 = FUNC_0(VAR_1->dev.parent);
 unsigned long VAR_4;

 FUNC_2(&VAR_3->lock, VAR_4);

 FUNC_1(VAR_2->pixclock, VAR_3->scr + VAR_0 + 0);
 FUNC_1(VAR_2->pixclock >> 16, VAR_3->scr + VAR_0 + 2);

 FUNC_3(&VAR_3->lock, VAR_4);

 return 0;
}
