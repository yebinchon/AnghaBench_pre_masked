
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mmcif_host {int dying; int mmc; int clk; int timeout_work; int addr; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct sh_mmcif_host* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_2)
{
 struct sh_mmcif_host *VAR_3 = FUNC_6(VAR_2);

 VAR_3->dying = 1;
 FUNC_2(VAR_3->clk);
 FUNC_8(&VAR_2->dev);

 FUNC_3(&VAR_2->dev);

 FUNC_5(VAR_3->mmc);
 FUNC_10(VAR_3->addr, VAR_1, VAR_0);






 FUNC_0(&VAR_3->timeout_work);

 FUNC_1(VAR_3->clk);
 FUNC_4(VAR_3->mmc);
 FUNC_9(&VAR_2->dev);
 FUNC_7(&VAR_2->dev);

 return 0;
}
