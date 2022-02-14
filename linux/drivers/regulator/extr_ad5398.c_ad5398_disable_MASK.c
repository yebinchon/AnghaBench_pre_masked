
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct ad5398_chip_info {struct i2c_client* client; } ;


 unsigned short VAR_0 ;
 int FUNC_0 (struct i2c_client*,unsigned short*) ;
 int FUNC_1 (struct i2c_client*,unsigned short) ;
 struct ad5398_chip_info* FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_1)
{
 struct ad5398_chip_info *VAR_2 = FUNC_2(VAR_1);
 struct i2c_client *VAR_3 = VAR_2->client;
 unsigned short VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 if (!(VAR_4 & VAR_0))
  return 0;

 VAR_4 &= ~VAR_0;

 VAR_5 = FUNC_1(VAR_3, VAR_4);

 return VAR_5;
}
