
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_thermal_sensor {int id; struct hisi_thermal_data* data; } ;
struct hisi_thermal_data {int regs; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct hisi_thermal_sensor *VAR_0)
{
 struct hisi_thermal_data *VAR_1 = VAR_0->data;


 FUNC_0(VAR_1->regs, VAR_0->id, 0);
 return 0;
}
