
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct platform_device *VAR_1)
{

 int VAR_2;

 FUNC_1(&VAR_1->dev, "vpe_runtime_put\n");

 VAR_2 = FUNC_2(&VAR_1->dev);
 FUNC_0(VAR_2 < 0 && VAR_2 != -VAR_0);
}
