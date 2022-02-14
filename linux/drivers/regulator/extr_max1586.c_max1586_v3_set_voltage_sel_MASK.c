
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regulator_dev {int dummy; } ;
struct max1586_data {unsigned int v3_curr_sel; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i2c_client*,int) ;
 struct max1586_data* FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regulator_dev*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_1,
          unsigned VAR_2)
{
 struct max1586_data *VAR_3 = FUNC_2(VAR_1);
 struct i2c_client *VAR_4 = VAR_3->client;
 int VAR_5;
 u8 VAR_6;

 FUNC_0(&VAR_4->dev, "changing voltage v3 to %dmv\n",
  FUNC_3(VAR_1, VAR_2) / 1000);

 VAR_6 = VAR_0 | (u8) VAR_2;
 VAR_5 = FUNC_1(VAR_4, VAR_6);
 if (VAR_5)
  return VAR_5;

 VAR_3->v3_curr_sel = VAR_2;

 return 0;
}
