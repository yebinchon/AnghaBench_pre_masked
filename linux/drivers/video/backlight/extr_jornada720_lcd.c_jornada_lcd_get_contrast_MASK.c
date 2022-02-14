
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcd_device {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (struct lcd_device*) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct lcd_device *VAR_4)
{
 int VAR_5;

 if (FUNC_1(VAR_4) != VAR_1)
  return 0;

 FUNC_4();

 if (FUNC_2(VAR_2) == VAR_3) {
  VAR_5 = FUNC_2(VAR_3);
  goto success;
 }

 FUNC_0(&VAR_4->dev, "failed to set contrast\n");
 VAR_5 = -VAR_0;

success:
 FUNC_3();
 return VAR_5;
}
