
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp3943 {int mux_cfg; struct device* dev; int pdata; int regmap; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*) ;
 struct lp3943* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,int,int ,int ,int *,int ,int *) ;
 int FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (struct i2c_client*,struct lp3943*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_5, const struct i2c_device_id *VAR_6)
{
 struct lp3943 *VAR_7;
 struct device *VAR_8 = &VAR_5->dev;

 VAR_7 = FUNC_4(VAR_8, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->regmap = FUNC_6(VAR_5, &VAR_4);
 if (FUNC_1(VAR_7->regmap))
  return FUNC_2(VAR_7->regmap);

 VAR_7->pdata = FUNC_3(VAR_8);
 VAR_7->dev = VAR_8;
 VAR_7->mux_cfg = VAR_3;
 FUNC_7(VAR_5, VAR_7);

 return FUNC_5(VAR_8, -1, VAR_2,
        FUNC_0(VAR_2),
        ((void*)0), 0, ((void*)0));
}
