
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct regulator_dev {TYPE_1__* desc; } ;
struct max1586_data {unsigned int v6_curr_sel; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;
struct TYPE_2__ {int* volt_table; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i2c_client*,int) ;
 struct max1586_data* FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_1,
          unsigned int VAR_2)
{
 struct max1586_data *VAR_3 = FUNC_2(VAR_1);
 struct i2c_client *VAR_4 = VAR_3->client;
 u8 VAR_5;
 int VAR_6;

 FUNC_0(&VAR_4->dev, "changing voltage v6 to %dmv\n",
  VAR_1->desc->volt_table[VAR_2] / 1000);

 VAR_5 = VAR_0 | (u8) VAR_2;
 VAR_6 = FUNC_1(VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_3->v6_curr_sel = VAR_2;

 return 0;
}
