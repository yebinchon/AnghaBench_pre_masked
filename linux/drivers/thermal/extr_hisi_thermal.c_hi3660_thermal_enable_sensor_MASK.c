
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_thermal_sensor {int id; int thres_temp; struct hisi_thermal_data* data; } ;
struct hisi_thermal_data {int regs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,unsigned int) ;
 int FUNC_3 (int ,int ,int ) ;
 unsigned int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct hisi_thermal_sensor *VAR_1)
{
 unsigned int VAR_2;
 struct hisi_thermal_data *VAR_3 = VAR_1->data;


 FUNC_1(VAR_3->regs, VAR_1->id, 0);


 FUNC_3(VAR_3->regs, VAR_1->id, VAR_0);


 VAR_2 = FUNC_4(VAR_1->thres_temp);
 FUNC_2(VAR_3->regs, VAR_1->id, VAR_2);


 FUNC_0(VAR_3->regs, VAR_1->id, 1);
 FUNC_1(VAR_3->regs, VAR_1->id, 1);

 return 0;
}
