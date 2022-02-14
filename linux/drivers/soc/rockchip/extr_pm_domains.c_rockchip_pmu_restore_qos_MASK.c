
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_pm_domain {int num_qos; int ** qos_save_regs; int * qos_regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct rockchip_pm_domain *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5->num_qos; VAR_6++) {
  FUNC_0(VAR_5->qos_regmap[VAR_6],
        VAR_3,
        VAR_5->qos_save_regs[0][VAR_6]);
  FUNC_0(VAR_5->qos_regmap[VAR_6],
        VAR_2,
        VAR_5->qos_save_regs[1][VAR_6]);
  FUNC_0(VAR_5->qos_regmap[VAR_6],
        VAR_0,
        VAR_5->qos_save_regs[2][VAR_6]);
  FUNC_0(VAR_5->qos_regmap[VAR_6],
        VAR_4,
        VAR_5->qos_save_regs[3][VAR_6]);
  FUNC_0(VAR_5->qos_regmap[VAR_6],
        VAR_1,
        VAR_5->qos_save_regs[4][VAR_6]);
 }

 return 0;
}
