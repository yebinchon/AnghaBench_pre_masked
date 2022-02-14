
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct spmi_voltage_range {int step_uV; } ;
struct spmi_regulator {int slew_rate; int dev; TYPE_1__* set_points; } ;
struct TYPE_2__ {struct spmi_voltage_range* range; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct spmi_regulator*,int ,int*,int) ;

__attribute__((used)) static int FUNC_3(struct spmi_regulator *VAR_6,
         int VAR_7)
{
 int VAR_8;
 u8 VAR_9 = 0;
 int VAR_10, VAR_11;
 const struct spmi_voltage_range *VAR_12 = &VAR_6->set_points->range[0];

 VAR_8 = FUNC_2(VAR_6, VAR_0, &VAR_9, 1);
 if (VAR_8) {
  FUNC_0(VAR_6->dev, "spmi read failed, ret=%d\n", VAR_8);
  return VAR_8;
 }

 VAR_10 = VAR_9 & VAR_1;
 VAR_10 >>= VAR_2;


 VAR_11 = VAR_7 * VAR_12->step_uV;
 VAR_11 /= 1000 * (VAR_3 << VAR_10);
 VAR_11 *= VAR_5;
 VAR_11 /= VAR_4;


 VAR_6->slew_rate = FUNC_1(VAR_11, 1);

 return VAR_8;
}
