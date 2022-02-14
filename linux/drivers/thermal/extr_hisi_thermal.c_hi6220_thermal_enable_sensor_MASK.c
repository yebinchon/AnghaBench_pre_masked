
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_thermal_sensor {int thres_temp; int id; struct hisi_thermal_data* data; } ;
struct hisi_thermal_data {int regs; int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(struct hisi_thermal_sensor *VAR_2)
{
 struct hisi_thermal_data *VAR_3 = VAR_2->data;
 int VAR_4;


 VAR_4 = FUNC_0(VAR_3->clk);
 if (VAR_4)
  return VAR_4;


 FUNC_6(VAR_3->regs, 0);
 FUNC_4(VAR_3->regs, 0);


 FUNC_8(VAR_3->regs, VAR_2->id);


 FUNC_5(VAR_3->regs, 0);


 FUNC_9(VAR_3->regs, VAR_0);


 FUNC_3(VAR_3->regs, VAR_2->thres_temp);

 FUNC_7(VAR_3->regs, VAR_1);


 FUNC_6(VAR_3->regs, 1);
 FUNC_4(VAR_3->regs, 1);

 FUNC_1(VAR_3->regs, 0);
 FUNC_2(VAR_3->regs, 1);

 return 0;
}
