
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcd_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct lcd_device *VAR_3, int VAR_4)
{
 int VAR_5 = 0;

 FUNC_3();


 if (FUNC_1(VAR_1) == VAR_2) {

  if (FUNC_1(VAR_4) == VAR_2)
   goto success;
 }

 FUNC_0(&VAR_3->dev, "failed to set contrast\n");
 VAR_5 = -VAR_0;

success:
 FUNC_2();
 return VAR_5;
}
