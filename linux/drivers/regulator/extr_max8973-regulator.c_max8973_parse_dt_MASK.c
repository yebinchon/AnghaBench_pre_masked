
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct max8973_regulator_platform_data {int enable_ext_control; scalar_t__ junction_temp_warning; int control_flags; scalar_t__ dvs_def_state; int dvs_gpio; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct max8973_regulator_platform_data* FUNC_0 (struct device*,int,int ) ;
 int FUNC_1 (struct device_node*,char*,int ) ;
 int FUNC_2 (struct device_node*,char*) ;
 int FUNC_3 (struct device_node*,char*,scalar_t__*) ;

__attribute__((used)) static struct max8973_regulator_platform_data *FUNC_4(
  struct device *VAR_11)
{
 struct max8973_regulator_platform_data *VAR_12;
 struct device_node *VAR_13 = VAR_11->of_node;
 int VAR_14;
 u32 VAR_15;
 bool VAR_16;
 bool VAR_17;

 VAR_12 = FUNC_0(VAR_11, sizeof(*VAR_12), VAR_0);
 if (!VAR_12)
  return ((void*)0);

 VAR_12->enable_ext_control = FUNC_2(VAR_13,
      "maxim,externally-enable");
 VAR_12->dvs_gpio = FUNC_1(VAR_13, "maxim,dvs-gpio", 0);

 VAR_14 = FUNC_3(VAR_13, "maxim,dvs-default-state", &VAR_15);
 if (!VAR_14)
  VAR_12->dvs_def_state = VAR_15;

 if (FUNC_2(VAR_13, "maxim,enable-remote-sense"))
  VAR_12->control_flags |= VAR_10;

 if (FUNC_2(VAR_13, "maxim,enable-falling-slew-rate"))
  VAR_12->control_flags |=
    VAR_7;

 if (FUNC_2(VAR_13, "maxim,enable-active-discharge"))
  VAR_12->control_flags |=
    VAR_9;

 if (FUNC_2(VAR_13, "maxim,enable-frequency-shift"))
  VAR_12->control_flags |= VAR_8;

 if (FUNC_2(VAR_13, "maxim,enable-bias-control"))
  VAR_12->control_flags |= VAR_3;

 VAR_16 = FUNC_2(VAR_13, "maxim,enable-etr");
 VAR_17 = FUNC_2(VAR_13,
    "maxim,enable-high-etr-sensitivity");
 if (VAR_17)
  VAR_16 = 1;

 if (VAR_16) {
  if (VAR_17)
   VAR_12->control_flags |=
    VAR_5;
  else
   VAR_12->control_flags |=
    VAR_4;
 } else {
  VAR_12->control_flags |= VAR_6;
 }

 VAR_12->junction_temp_warning = VAR_2;
 VAR_14 = FUNC_3(VAR_13, "junction-warn-millicelsius", &VAR_15);
 if (!VAR_14 && (VAR_15 <= VAR_1))
  VAR_12->junction_temp_warning = VAR_1;

 return VAR_12;
}
