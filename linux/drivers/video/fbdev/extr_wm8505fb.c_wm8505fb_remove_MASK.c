
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ len; } ;
struct TYPE_3__ {TYPE_2__ cmap; } ;
struct wm8505fb_info {TYPE_1__ fb; int regbase; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (TYPE_2__*) ;
 struct wm8505fb_info* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct wm8505fb_info *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(&VAR_1->fb);

 FUNC_3(0, VAR_1->regbase);

 if (VAR_1->fb.cmap.len)
  FUNC_0(&VAR_1->fb.cmap);

 return 0;
}
