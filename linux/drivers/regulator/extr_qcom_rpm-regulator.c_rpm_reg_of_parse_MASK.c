
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct regulator_desc {int dummy; } ;
struct regulator_config {struct device* dev; struct qcom_rpm_reg* driver_data; } ;
struct qcom_rpm_reg {TYPE_2__* parts; int supports_force_mode_bypass; int supports_force_mode_auto; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_6__ {scalar_t__ mask; } ;
struct TYPE_4__ {scalar_t__ mask; } ;
struct TYPE_5__ {TYPE_3__ fm; TYPE_3__ pm; TYPE_1__ freq; TYPE_3__ pd; } ;


 int VAR_0 ;
 int FUNC_0 (struct qcom_rpm_reg*) ;





 int FUNC_1 (struct device*,char*,...) ;
 scalar_t__ FUNC_2 (struct device_node*,char const*) ;
 int FUNC_3 (struct device_node*,char const*,int*) ;
 int FUNC_4 (struct device*,struct device_node*,struct qcom_rpm_reg*) ;
 int FUNC_5 (struct qcom_rpm_reg*,TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_6(struct device_node *VAR_1,
       const struct regulator_desc *VAR_2,
       struct regulator_config *VAR_3)
{
 struct qcom_rpm_reg *VAR_4 = VAR_3->driver_data;
 struct device *VAR_5 = VAR_3->dev;
 const char *VAR_6;
 u32 VAR_7;
 bool VAR_8;
 u32 VAR_9;
 int VAR_10;

 VAR_6 = "bias-pull-down";
 if (FUNC_2(VAR_1, VAR_6)) {
  VAR_10 = FUNC_5(VAR_4, &VAR_4->parts->pd, 1);
  if (VAR_10) {
   FUNC_1(VAR_5, "%s is invalid", VAR_6);
   return VAR_10;
  }
 }

 if (VAR_4->parts->freq.mask) {
  VAR_10 = FUNC_4(VAR_5, VAR_1, VAR_4);
  if (VAR_10 < 0)
   return VAR_10;
 }

 if (VAR_4->parts->pm.mask) {
  VAR_6 = "qcom,power-mode-hysteretic";
  VAR_8 = !FUNC_2(VAR_1, VAR_6);

  VAR_10 = FUNC_5(VAR_4, &VAR_4->parts->pm, VAR_8);
  if (VAR_10) {
   FUNC_1(VAR_5, "failed to set power mode\n");
   return VAR_10;
  }
 }

 if (VAR_4->parts->fm.mask) {
  VAR_7 = -1;

  VAR_6 = "qcom,force-mode";
  VAR_10 = FUNC_3(VAR_1, VAR_6, &VAR_9);
  if (VAR_10 == -VAR_0) {
   VAR_9 = 128;
  } else if (VAR_10 < 0) {
   FUNC_1(VAR_5, "failed to read %s\n", VAR_6);
   return VAR_10;
  }
  switch (VAR_9) {
  case 128:
   VAR_7 = 0;
   break;
  case 129:
   VAR_7 = 1;
   break;
  case 130:
   if (FUNC_0(VAR_4))
    VAR_7 = 2;
   else
    VAR_7 = 3;
   break;
  case 132:
   if (VAR_4->supports_force_mode_auto)
    VAR_7 = 2;
   break;
  case 131:
   if (VAR_4->supports_force_mode_bypass)
    VAR_7 = 4;
   break;
  }

  if (VAR_7 == -1) {
   FUNC_1(VAR_5, "invalid force mode\n");
   return -VAR_0;
  }

  VAR_10 = FUNC_5(VAR_4, &VAR_4->parts->fm, VAR_7);
  if (VAR_10) {
   FUNC_1(VAR_5, "failed to set force mode\n");
   return VAR_10;
  }
 }

 return 0;
}
