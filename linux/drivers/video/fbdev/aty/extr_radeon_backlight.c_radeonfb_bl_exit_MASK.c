
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeonfb_info {TYPE_1__* info; } ;
struct radeon_bl_privdata {int dummy; } ;
struct backlight_device {int dummy; } ;
struct TYPE_2__ {struct backlight_device* bl_dev; } ;


 int FUNC_0 (struct backlight_device*) ;
 struct radeon_bl_privdata* FUNC_1 (struct backlight_device*) ;
 int FUNC_2 (struct radeon_bl_privdata*) ;
 int FUNC_3 (char*) ;

void FUNC_4(struct radeonfb_info *VAR_0)
{
 struct backlight_device *VAR_1 = VAR_0->info->bl_dev;

 if (VAR_1) {
  struct radeon_bl_privdata *VAR_2;

  VAR_2 = FUNC_1(VAR_1);
  FUNC_0(VAR_1);
  FUNC_2(VAR_2);
  VAR_0->info->bl_dev = ((void*)0);

  FUNC_3("radeonfb: Backlight unloaded\n");
 }
}
