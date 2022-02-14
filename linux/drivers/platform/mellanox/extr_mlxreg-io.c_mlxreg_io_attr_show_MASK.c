
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mlxreg_io_priv_data {TYPE_1__* pdata; } ;
struct mlxreg_core_data {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int index; } ;
struct TYPE_3__ {int regmap; struct mlxreg_core_data* data; } ;


 struct mlxreg_io_priv_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,struct mlxreg_core_data*,int ,int,int*) ;
 int FUNC_2 (char*,char*,int) ;
 TYPE_2__* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1,
      char *VAR_2)
{
 struct mlxreg_io_priv_data *VAR_3 = FUNC_0(VAR_0);
 int VAR_4 = FUNC_3(VAR_1)->index;
 struct mlxreg_core_data *VAR_5 = VAR_3->pdata->data + VAR_4;
 u32 VAR_6 = 0;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3->pdata->regmap, VAR_5, 0, 1, &VAR_6);
 if (VAR_7)
  goto access_error;

 return FUNC_2(VAR_2, "%u\n", VAR_6);

access_error:
 return VAR_7;
}
