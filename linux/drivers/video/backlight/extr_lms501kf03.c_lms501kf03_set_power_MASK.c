
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lms501kf03 {int dev; } ;
struct lcd_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 struct lms501kf03* FUNC_1 (struct lcd_device*) ;
 int FUNC_2 (struct lms501kf03*,int) ;

__attribute__((used)) static int FUNC_3(struct lcd_device *VAR_4, int VAR_5)
{
 struct lms501kf03 *VAR_6 = FUNC_1(VAR_4);

 if (VAR_5 != VAR_3 && VAR_5 != VAR_2 &&
  VAR_5 != VAR_1) {
  FUNC_0(VAR_6->dev, "power value should be 0, 1 or 4.\n");
  return -VAR_0;
 }

 return FUNC_2(VAR_6, VAR_5);
}
