
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct mlxreg_io_priv_data {TYPE_2__* pdev; TYPE_1__* pdata; } ;
struct mlxreg_core_data {int reg; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_6__ {int index; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int regmap; struct mlxreg_core_data* data; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,char*) ;
 struct mlxreg_io_priv_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,size_t,int *) ;
 int FUNC_3 (int ,struct mlxreg_core_data*,int ,int,int *) ;
 int FUNC_4 (int ,int ,int ) ;
 TYPE_3__* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t
FUNC_6(struct device *VAR_2, struct device_attribute *VAR_3,
       const char *VAR_4, size_t VAR_5)
{
 struct mlxreg_io_priv_data *VAR_6 = FUNC_1(VAR_2);
 int VAR_7 = FUNC_5(VAR_3)->index;
 struct mlxreg_core_data *VAR_8 = VAR_6->pdata->data + VAR_7;
 u32 VAR_9, VAR_10;
 int VAR_11;

 if (VAR_5 > VAR_1)
  return -VAR_0;


 VAR_11 = FUNC_2(VAR_4, VAR_5, &VAR_9);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_3(VAR_6->pdata->regmap, VAR_8, VAR_9, 0,
    &VAR_10);
 if (VAR_11)
  goto access_error;

 VAR_11 = FUNC_4(VAR_6->pdata->regmap, VAR_8->reg, VAR_10);
 if (VAR_11)
  goto access_error;

 return VAR_5;

access_error:
 FUNC_0(&VAR_6->pdev->dev, "Bus access error\n");
 return VAR_11;
}
