
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct arche_apb_ctrl_drvdata {int boot_ret; } ;


 struct arche_apb_ctrl_drvdata* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0)
{
 struct arche_apb_ctrl_drvdata *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->boot_ret, 0);
}
