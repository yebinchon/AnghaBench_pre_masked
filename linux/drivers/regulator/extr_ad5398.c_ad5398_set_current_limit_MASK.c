
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct i2c_client {int dev; } ;
struct ad5398_chip_info {unsigned int max_uA; unsigned int min_uA; int current_level; unsigned int current_offset; unsigned int current_mask; struct i2c_client* client; } ;


 unsigned short VAR_0 ;
 unsigned int FUNC_0 (int,unsigned int) ;
 int VAR_1 ;
 int FUNC_1 (struct ad5398_chip_info*,unsigned int) ;
 int FUNC_2 (struct i2c_client*,unsigned short*) ;
 int FUNC_3 (struct i2c_client*,unsigned short) ;
 int FUNC_4 (int *,char*,int) ;
 struct ad5398_chip_info* FUNC_5 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_6(struct regulator_dev *VAR_2, int VAR_3, int VAR_4)
{
 struct ad5398_chip_info *VAR_5 = FUNC_5(VAR_2);
 struct i2c_client *VAR_6 = VAR_5->client;
 unsigned VAR_7 = VAR_5->max_uA - VAR_5->min_uA;
 unsigned VAR_8;
 unsigned short VAR_9;
 int VAR_10;

 if (VAR_3 < VAR_5->min_uA)
  VAR_3 = VAR_5->min_uA;
 if (VAR_4 > VAR_5->max_uA)
  VAR_4 = VAR_5->max_uA;

 if (VAR_3 > VAR_5->max_uA || VAR_4 < VAR_5->min_uA)
  return -VAR_1;

 VAR_8 = FUNC_0((VAR_3 - VAR_5->min_uA) * VAR_5->current_level,
    VAR_7);
 if (FUNC_1(VAR_5, VAR_8) > VAR_4)
  return -VAR_1;

 FUNC_4(&VAR_6->dev, "changing current %duA\n",
  FUNC_1(VAR_5, VAR_8));


 VAR_10 = FUNC_2(VAR_6, &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;


 VAR_8 = (VAR_8 << VAR_5->current_offset) & VAR_5->current_mask;
 VAR_9 = (unsigned short)VAR_8 | (VAR_9 & VAR_0);


 VAR_10 = FUNC_3(VAR_6, VAR_9);

 return VAR_10;
}
