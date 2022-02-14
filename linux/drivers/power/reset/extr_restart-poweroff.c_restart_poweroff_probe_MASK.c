
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int * VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct platform_device *VAR_3)
{

 if (VAR_1 != ((void*)0)) {
  FUNC_0(&VAR_3->dev,
   "pm_power_off function already registered");
  return -VAR_0;
 }

 VAR_1 = &VAR_2;
 return 0;
}
