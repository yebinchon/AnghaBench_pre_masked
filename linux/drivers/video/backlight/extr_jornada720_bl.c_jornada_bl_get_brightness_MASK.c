
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct backlight_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct backlight_device *VAR_6)
{
 int VAR_7;


 if (!(VAR_4 & VAR_3))
  return 0;

 FUNC_3();


 VAR_7 = FUNC_1(VAR_2);

 if (FUNC_1(VAR_2) != VAR_5) {
  FUNC_0(&VAR_6->dev, "get brightness timeout\n");
  FUNC_2();
  return -VAR_1;
 }


 VAR_7 = FUNC_1(VAR_5);

 FUNC_2();

 return VAR_0 - VAR_7;
}
