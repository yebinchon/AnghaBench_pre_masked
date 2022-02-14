
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 struct platform_device *VAR_3 = VAR_2;

 FUNC_0(&VAR_3->dev,
   "Watchdog timed out. Internal reset not enabled\n");

 return VAR_0;
}
