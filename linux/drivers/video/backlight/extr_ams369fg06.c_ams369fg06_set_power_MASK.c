
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcd_device {int dummy; } ;
struct ams369fg06 {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ams369fg06*,int) ;
 int FUNC_1 (int ,char*) ;
 struct ams369fg06* FUNC_2 (struct lcd_device*) ;

__attribute__((used)) static int FUNC_3(struct lcd_device *VAR_4, int VAR_5)
{
 struct ams369fg06 *VAR_6 = FUNC_2(VAR_4);

 if (VAR_5 != VAR_3 && VAR_5 != VAR_2 &&
  VAR_5 != VAR_1) {
  FUNC_1(VAR_6->dev, "power value should be 0, 1 or 4.\n");
  return -VAR_0;
 }

 return FUNC_0(VAR_6, VAR_5);
}
