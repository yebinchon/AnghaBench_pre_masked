
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct bcm_qspi {int master; int dev_ids; int clk; } ;


 int FUNC_0 (struct bcm_qspi*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct bcm_qspi* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct platform_device *VAR_0)
{
 struct bcm_qspi *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(VAR_1);
 FUNC_1(VAR_1->clk);
 FUNC_2(VAR_1->dev_ids);
 FUNC_4(VAR_1->master);

 return 0;
}
