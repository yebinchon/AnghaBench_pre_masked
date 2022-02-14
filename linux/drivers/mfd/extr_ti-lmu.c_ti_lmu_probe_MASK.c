
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_lmu_data {int num_cells; int cells; int max_register; } ;
struct ti_lmu {struct device* dev; int notifier; int en_gpio; int regmap; } ;
struct regmap_config {int reg_bits; int val_bits; int max_register; int name; } ;
struct i2c_device_id {int driver_data; int name; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*,int ,struct ti_lmu*) ;
 int FUNC_5 (struct device*,char*,int ) ;
 struct ti_lmu* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct device*,int ,int ,int ,int *,int ,int *) ;
 int FUNC_8 (struct i2c_client*,struct regmap_config*) ;
 int FUNC_9 (struct i2c_client*,struct ti_lmu*) ;
 int FUNC_10 (struct regmap_config*,int ,int) ;
 struct ti_lmu_data* FUNC_11 (struct device*) ;
 int VAR_4 ;
 int FUNC_12 (struct ti_lmu*,int ) ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_5, const struct i2c_device_id *VAR_6)
{
 struct device *VAR_7 = &VAR_5->dev;
 const struct ti_lmu_data *VAR_8;
 struct regmap_config VAR_9;
 struct ti_lmu *VAR_10;
 int VAR_11;





 VAR_8 = FUNC_11(VAR_7);
 if (!VAR_8)
  return -VAR_0;

 VAR_10 = FUNC_6(VAR_7, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->dev = &VAR_5->dev;


 FUNC_10(&VAR_9, 0, sizeof(struct regmap_config));
 VAR_9.reg_bits = 8;
 VAR_9.val_bits = 8;
 VAR_9.name = VAR_6->name;
 VAR_9.max_register = VAR_8->max_register;

 VAR_10->regmap = FUNC_8(VAR_5, &VAR_9);
 if (FUNC_1(VAR_10->regmap))
  return FUNC_2(VAR_10->regmap);


 VAR_10->en_gpio = FUNC_5(VAR_7, "enable", VAR_3);
 if (FUNC_1(VAR_10->en_gpio)) {
  VAR_11 = FUNC_2(VAR_10->en_gpio);
  FUNC_3(VAR_7, "Can not request enable GPIO: %d\n", VAR_11);
  return VAR_11;
 }

 VAR_11 = FUNC_12(VAR_10, VAR_6->driver_data);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_4(VAR_7, VAR_4, VAR_10);
 if (VAR_11)
  return VAR_11;






 FUNC_0(&VAR_10->notifier);

 FUNC_9(VAR_5, VAR_10);

 return FUNC_7(VAR_10->dev, 0, VAR_8->cells,
        VAR_8->num_cells, ((void*)0), 0, ((void*)0));
}
