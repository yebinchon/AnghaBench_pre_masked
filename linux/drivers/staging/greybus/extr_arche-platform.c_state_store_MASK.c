
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct arche_platform_drvdata {scalar_t__ state; int platform_state_mutex; int dev; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct arche_platform_drvdata*) ;
 int FUNC_1 (struct arche_platform_drvdata*) ;
 int FUNC_2 (struct arche_platform_drvdata*) ;
 int FUNC_3 (struct arche_platform_drvdata*) ;
 int FUNC_4 (int ,char*) ;
 struct arche_platform_drvdata* FUNC_5 (struct device*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (char const*,char*) ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_6,
      struct device_attribute *VAR_7,
      const char *VAR_8, size_t VAR_9)
{
 struct arche_platform_drvdata *VAR_10 = FUNC_5(VAR_6);
 int VAR_11 = 0;

 FUNC_8(&VAR_10->platform_state_mutex);

 if (FUNC_10(VAR_8, "off")) {
  if (VAR_10->state == VAR_2)
   goto exit;


  FUNC_7(VAR_10->dev, ((void*)0), VAR_5);

  FUNC_2(VAR_10);

 } else if (FUNC_10(VAR_8, "active")) {
  if (VAR_10->state == VAR_0)
   goto exit;




  FUNC_7(VAR_10->dev, ((void*)0), VAR_5);
  FUNC_2(VAR_10);

  FUNC_3(VAR_10);
  VAR_11 = FUNC_0(VAR_10);
  if (VAR_11)
   goto exit;

 } else if (FUNC_10(VAR_8, "standby")) {
  if (VAR_10->state == VAR_3)
   goto exit;

  FUNC_6(VAR_10->dev, "standby state not supported\n");
 } else if (FUNC_10(VAR_8, "fw_flashing")) {
  if (VAR_10->state == VAR_1)
   goto exit;
  FUNC_2(VAR_10);

  VAR_11 = FUNC_1(VAR_10);
  if (VAR_11)
   goto exit;
 } else {
  FUNC_4(VAR_10->dev, "unknown state\n");
  VAR_11 = -VAR_4;
 }

exit:
 FUNC_9(&VAR_10->platform_state_mutex);
 return VAR_11 ? VAR_11 : VAR_9;
}
