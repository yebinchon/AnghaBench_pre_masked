
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct tvp5150 {struct regmap* regmap; } ;
struct regmap {int dummy; } ;
struct TYPE_2__ {int vbi_type; } ;
struct i2c_vbi_ram_value {int reg; int* values; TYPE_1__ type; } ;


 int FUNC_0 (struct i2c_vbi_ram_value*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (struct regmap*,unsigned int,int) ;
 struct tvp5150* FUNC_2 (struct v4l2_subdev*) ;
 struct i2c_vbi_ram_value* VAR_6 ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_7)
{
 struct tvp5150 *VAR_8 = FUNC_2(VAR_7);
 struct regmap *VAR_9 = VAR_8->regmap;
 unsigned int VAR_10;
 int VAR_11;


 FUNC_1(VAR_9, VAR_2, 0);


 for (VAR_10 = VAR_4; VAR_10 <= VAR_3; VAR_10++)
  FUNC_1(VAR_9, VAR_10, 0xff);


 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_6); VAR_11++) {
  const struct i2c_vbi_ram_value *VAR_12 = &VAR_6[VAR_11];

  if (!VAR_12->type.vbi_type)
   continue;

  FUNC_1(VAR_9, VAR_0, VAR_12->reg >> 8);
  FUNC_1(VAR_9, VAR_1, VAR_12->reg);

  for (VAR_10 = 0; VAR_10 < 16; VAR_10++)
   FUNC_1(VAR_9, VAR_5,
         VAR_12->values[VAR_10]);
 }
 return 0;
}
