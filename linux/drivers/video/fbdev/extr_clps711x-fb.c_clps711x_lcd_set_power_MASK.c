
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcd_device {int dev; } ;
struct clps711x_fb_info {int lcd_pwr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct clps711x_fb_info* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct lcd_device *VAR_1, int VAR_2)
{
 struct clps711x_fb_info *VAR_3 = FUNC_1(&VAR_1->dev);

 if (!FUNC_0(VAR_3->lcd_pwr)) {
  if (VAR_2 == VAR_0) {
   if (!FUNC_4(VAR_3->lcd_pwr))
    return FUNC_3(VAR_3->lcd_pwr);
  } else {
   if (FUNC_4(VAR_3->lcd_pwr))
    return FUNC_2(VAR_3->lcd_pwr);
  }
 }

 return 0;
}
