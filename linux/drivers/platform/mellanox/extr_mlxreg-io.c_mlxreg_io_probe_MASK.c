
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct mlxreg_io_priv_data {int hwmon; int groups; struct platform_device* pdev; int pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct mlxreg_io_priv_data*) ;
 int FUNC_5 (int *,char*,struct mlxreg_io_priv_data*,int ) ;
 struct mlxreg_io_priv_data* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (struct mlxreg_io_priv_data*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_3)
{
 struct mlxreg_io_priv_data *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_6(&VAR_3->dev, sizeof(*VAR_4), VAR_2);
 if (!VAR_4)
  return -VAR_1;

 VAR_4->pdata = FUNC_3(&VAR_3->dev);
 if (!VAR_4->pdata) {
  FUNC_2(&VAR_3->dev, "Failed to get platform data.\n");
  return -VAR_0;
 }

 VAR_4->pdev = VAR_3;

 VAR_5 = FUNC_7(VAR_4);
 if (VAR_5) {
  FUNC_2(&VAR_4->pdev->dev, "Failed to allocate attributes: %d\n",
   VAR_5);
  return VAR_5;
 }

 VAR_4->hwmon = FUNC_5(&VAR_3->dev,
            "mlxreg_io",
             VAR_4,
             VAR_4->groups);
 if (FUNC_0(VAR_4->hwmon)) {
  FUNC_2(&VAR_3->dev, "Failed to register hwmon device %ld\n",
   FUNC_1(VAR_4->hwmon));
  return FUNC_1(VAR_4->hwmon);
 }

 FUNC_4(&VAR_3->dev, VAR_4);

 return 0;
}
