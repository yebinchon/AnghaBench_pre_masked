
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct arche_apb_ctrl_drvdata {scalar_t__ state; int init_disabled; } ;
typedef size_t ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct platform_device*) ;
 struct arche_apb_ctrl_drvdata* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 struct platform_device* FUNC_7 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_5,
      struct device_attribute *VAR_6,
      const char *VAR_7, size_t VAR_8)
{
 struct platform_device *VAR_9 = FUNC_7(VAR_5);
 struct arche_apb_ctrl_drvdata *VAR_10 = FUNC_3(VAR_9);
 int VAR_11 = 0;
 bool VAR_12;

 if (FUNC_6(VAR_7, "off")) {
  if (VAR_10->state == VAR_2)
   return VAR_8;

  FUNC_4(VAR_9);
 } else if (FUNC_6(VAR_7, "active")) {
  if (VAR_10->state == VAR_0)
   return VAR_8;

  FUNC_4(VAR_9);
  VAR_12 = VAR_10->init_disabled;
  VAR_10->init_disabled = 0;
  VAR_11 = FUNC_0(VAR_9);
  if (VAR_11)
   VAR_10->init_disabled = VAR_12;
 } else if (FUNC_6(VAR_7, "standby")) {
  if (VAR_10->state == VAR_3)
   return VAR_8;

  VAR_11 = FUNC_5(VAR_9);
 } else if (FUNC_6(VAR_7, "fw_flashing")) {
  if (VAR_10->state == VAR_1)
   return VAR_8;





  FUNC_4(VAR_9);
  VAR_11 = FUNC_2(VAR_9);
 } else {
  FUNC_1(VAR_5, "unknown state\n");
  VAR_11 = -VAR_4;
 }

 return VAR_11 ? VAR_11 : VAR_8;
}
