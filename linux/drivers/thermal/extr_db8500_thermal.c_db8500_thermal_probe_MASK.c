
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct db8500_thermal_zone {int tz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_2 (struct db8500_thermal_zone*,int ,int ,int ,int ) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*) ;
 struct db8500_thermal_zone* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,int,int *,int ,int,char*,struct db8500_thermal_zone*) ;
 int FUNC_7 (struct device*,int ,struct db8500_thermal_zone*,int *) ;
 int FUNC_8 (struct platform_device*,char*) ;
 int FUNC_9 (struct platform_device*,struct db8500_thermal_zone*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_10)
{
 struct db8500_thermal_zone *VAR_11 = ((void*)0);
 struct device *VAR_12 = &VAR_10->dev;
 int VAR_13, VAR_14, VAR_15 = 0;

 VAR_11 = FUNC_5(VAR_12, sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_13 = FUNC_8(VAR_10, "IRQ_HOTMON_LOW");
 if (VAR_13 < 0) {
  FUNC_3(VAR_12, "Get IRQ_HOTMON_LOW failed\n");
  return VAR_13;
 }

 VAR_15 = FUNC_6(VAR_12, VAR_13, ((void*)0),
  VAR_8, VAR_2 | VAR_3,
  "dbx500_temp_low", VAR_11);
 if (VAR_15 < 0) {
  FUNC_3(VAR_12, "failed to allocate temp low irq\n");
  return VAR_15;
 }

 VAR_14 = FUNC_8(VAR_10, "IRQ_HOTMON_HIGH");
 if (VAR_14 < 0) {
  FUNC_3(VAR_12, "Get IRQ_HOTMON_HIGH failed\n");
  return VAR_14;
 }

 VAR_15 = FUNC_6(VAR_12, VAR_14, ((void*)0),
  VAR_7, VAR_2 | VAR_3,
  "dbx500_temp_high", VAR_11);
 if (VAR_15 < 0) {
  FUNC_3(VAR_12, "failed to allocate temp high irq\n");
  return VAR_15;
 }


 VAR_11->tz = FUNC_7(VAR_12, 0, VAR_11, &VAR_9);
 if (FUNC_0(VAR_11->tz)) {
  FUNC_3(VAR_12, "register thermal zone sensor failed\n");
  return FUNC_1(VAR_11->tz);
 }
 FUNC_4(VAR_12, "thermal zone sensor registered\n");


 FUNC_2(VAR_11, 0, VAR_5,
         VAR_4,
         VAR_6[0]);

 FUNC_9(VAR_10, VAR_11);

 return 0;
}
