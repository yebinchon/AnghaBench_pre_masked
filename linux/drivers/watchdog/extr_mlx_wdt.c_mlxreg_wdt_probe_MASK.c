
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_7__ {int status; struct device* parent; } ;
struct mlxreg_wdt {TYPE_1__ wdd; int regmap; } ;
struct mlxreg_core_platform_data {int features; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*,...) ;
 struct mlxreg_core_platform_data* FUNC_1 (struct device*) ;
 struct mlxreg_wdt* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct device*,TYPE_1__*) ;
 int FUNC_4 (struct mlxreg_wdt*) ;
 int FUNC_5 (struct mlxreg_wdt*,struct mlxreg_core_platform_data*) ;
 int FUNC_6 (struct mlxreg_wdt*,struct mlxreg_core_platform_data*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (TYPE_1__*,struct mlxreg_wdt*) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct mlxreg_core_platform_data *VAR_9;
 struct mlxreg_wdt *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_1(VAR_8);
 if (!VAR_9) {
  FUNC_0(VAR_8, "Failed to get platform data.\n");
  return -VAR_0;
 }
 VAR_10 = FUNC_2(VAR_8, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->wdd.parent = VAR_8;
 VAR_10->regmap = VAR_9->regmap;
 FUNC_5(VAR_10, VAR_9);

 if ((VAR_9->features & VAR_3))
  FUNC_10(&VAR_10->wdd, VAR_5);
 FUNC_11(&VAR_10->wdd);
 FUNC_12(&VAR_10->wdd);
 FUNC_9(&VAR_10->wdd, VAR_10);
 VAR_11 = FUNC_6(VAR_10, VAR_9);
 if (VAR_11)
  goto register_error;

 if ((VAR_9->features & VAR_4)) {
  VAR_11 = FUNC_7(&VAR_10->wdd);
  if (VAR_11)
   goto register_error;
  FUNC_8(VAR_6, &VAR_10->wdd.status);
 }
 FUNC_4(VAR_10);
 VAR_11 = FUNC_3(VAR_8, &VAR_10->wdd);

register_error:
 if (VAR_11)
  FUNC_0(VAR_8, "Cannot register watchdog device (err=%d)\n", VAR_11);
 return VAR_11;
}
