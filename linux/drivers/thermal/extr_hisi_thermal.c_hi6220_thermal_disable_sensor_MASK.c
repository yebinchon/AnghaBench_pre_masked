
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_thermal_sensor {struct hisi_thermal_data* data; } ;
struct hisi_thermal_data {int clk; int regs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct hisi_thermal_sensor *VAR_0)
{
 struct hisi_thermal_data *VAR_1 = VAR_0->data;


 FUNC_2(VAR_1->regs, 0);
 FUNC_1(VAR_1->regs, 0);
 FUNC_3(VAR_1->regs, 0);

 FUNC_0(VAR_1->clk);

 return 0;
}
