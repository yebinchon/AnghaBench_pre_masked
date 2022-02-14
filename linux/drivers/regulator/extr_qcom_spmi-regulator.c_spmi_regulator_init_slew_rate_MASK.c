
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spmi_voltage_range {int step_uV; } ;
struct spmi_regulator {int logical_type; int slew_rate; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int,int) ;
 struct spmi_voltage_range* FUNC_2 (struct spmi_regulator*) ;
 int FUNC_3 (struct spmi_regulator*,int ,int*,int) ;

__attribute__((used)) static int FUNC_4(struct spmi_regulator *VAR_11)
{
 int VAR_12;
 u8 VAR_13 = 0;
 int VAR_14, VAR_15, VAR_16, VAR_17;
 const struct spmi_voltage_range *VAR_18;

 VAR_12 = FUNC_3(VAR_11, VAR_1, &VAR_13, 1);
 if (VAR_12) {
  FUNC_0(VAR_11->dev, "spmi read failed, ret=%d\n", VAR_12);
  return VAR_12;
 }

 VAR_18 = FUNC_2(VAR_11);
 if (!VAR_18)
  return -VAR_0;

 switch (VAR_11->logical_type) {
 case 128:
  VAR_17 = VAR_8;
  break;
 default:
  VAR_17 = VAR_2;
  break;
 }

 VAR_14 = VAR_13 & VAR_6;
 VAR_14 >>= VAR_7;

 VAR_15 = VAR_13 & VAR_4;
 VAR_15 >>= VAR_5;


 VAR_16 = VAR_3 * VAR_18->step_uV * (1 << VAR_14);
 VAR_16 /= 1000 * (VAR_17 << VAR_15);
 VAR_16 *= VAR_10;
 VAR_16 /= VAR_9;


 VAR_11->slew_rate = FUNC_1(VAR_16, 1);

 return VAR_12;
}
