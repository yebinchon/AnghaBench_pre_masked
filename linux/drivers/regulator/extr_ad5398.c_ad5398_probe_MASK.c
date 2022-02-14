
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_init_data {int dummy; } ;
struct regulator_config {struct ad5398_chip_info* driver_data; struct regulator_init_data* init_data; int * dev; } ;
struct i2c_device_id {int name; scalar_t__ driver_data; } ;
struct i2c_client {int dev; } ;
struct ad5398_current_data_format {int current_bits; int current_offset; int max_uA; int min_uA; } ;
struct ad5398_chip_info {int current_level; int current_offset; int current_mask; int rdev; int max_uA; int min_uA; struct i2c_client* client; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,int ,int ) ;
 struct regulator_init_data* FUNC_4 (int *) ;
 struct ad5398_chip_info* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,TYPE_1__*,struct regulator_config*) ;
 int FUNC_7 (struct i2c_client*,struct ad5398_chip_info*) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_4,
    const struct i2c_device_id *VAR_5)
{
 struct regulator_init_data *VAR_6 = FUNC_4(&VAR_4->dev);
 struct regulator_config VAR_7 = { };
 struct ad5398_chip_info *VAR_8;
 const struct ad5398_current_data_format *VAR_9 =
   (struct ad5398_current_data_format *)VAR_5->driver_data;

 if (!VAR_6)
  return -VAR_0;

 VAR_8 = FUNC_5(&VAR_4->dev, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_7.dev = &VAR_4->dev;
 VAR_7.init_data = VAR_6;
 VAR_7.driver_data = VAR_8;

 VAR_8->client = VAR_4;

 VAR_8->min_uA = VAR_9->min_uA;
 VAR_8->max_uA = VAR_9->max_uA;
 VAR_8->current_level = 1 << VAR_9->current_bits;
 VAR_8->current_offset = VAR_9->current_offset;
 VAR_8->current_mask = (VAR_8->current_level - 1) << VAR_8->current_offset;

 VAR_8->rdev = FUNC_6(&VAR_4->dev, &VAR_3,
          &VAR_7);
 if (FUNC_0(VAR_8->rdev)) {
  FUNC_3(&VAR_4->dev, "failed to register %s %s\n",
   VAR_5->name, VAR_3.name);
  return FUNC_1(VAR_8->rdev);
 }

 FUNC_7(VAR_4, VAR_8);
 FUNC_2(&VAR_4->dev, "%s regulator driver is registered.\n", VAR_5->name);
 return 0;
}
