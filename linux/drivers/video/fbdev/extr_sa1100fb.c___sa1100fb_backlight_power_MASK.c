
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sa1100fb_info {TYPE_1__* inf; int dev; } ;
struct TYPE_2__ {int (* backlight_power ) (int) ;} ;


 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(struct sa1100fb_info *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0->dev, "backlight o%s\n", VAR_1 ? "n" : "ff");

 if (VAR_0->inf->backlight_power)
  VAR_0->inf->backlight_power(VAR_1);
}
