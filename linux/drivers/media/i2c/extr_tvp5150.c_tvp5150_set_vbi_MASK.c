
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
typedef int u8 ;
struct v4l2_subdev {int dev; } ;
struct tvp5150 {int norm; int regmap; } ;
struct TYPE_2__ {unsigned int vbi_type; int ini_line; int end_line; } ;
struct i2c_vbi_ram_value {TYPE_1__ type; } ;


 int FUNC_0 (struct i2c_vbi_ram_value*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int,unsigned int) ;
 struct tvp5150* FUNC_3 (struct v4l2_subdev*) ;
 struct i2c_vbi_ram_value* VAR_3 ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_4,
   unsigned int VAR_5, u8 VAR_6, int VAR_7,
   const int VAR_8)
{
 struct tvp5150 *VAR_9 = FUNC_3(VAR_4);
 v4l2_std_id VAR_10 = VAR_9->norm;
 u8 VAR_11;
 int VAR_12, VAR_13 = 0;

 if (VAR_10 == VAR_2) {
  FUNC_1(VAR_4->dev, "VBI can't be configured without knowing number of lines\n");
  return 0;
 } else if (VAR_10 & VAR_1) {

  VAR_7 += 3;
 }

 if (VAR_7 < 6 || VAR_7 > 27)
  return 0;

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_3); VAR_12++) {
  const struct i2c_vbi_ram_value *VAR_14 = &VAR_3[VAR_12];

  if (!VAR_14->type.vbi_type)
   continue;

  if ((VAR_5 & VAR_14->type.vbi_type) &&
      (VAR_7 >= VAR_14->type.ini_line) &&
      (VAR_7 <= VAR_14->type.end_line))
   break;
  VAR_13++;
 }

 VAR_5 = VAR_13 | (VAR_6 & 0xf0);
 VAR_11 = ((VAR_7 - 6) << 1) + VAR_0;

 if (VAR_8 & 1)
  FUNC_2(VAR_9->regmap, VAR_11, VAR_5);

 if (VAR_8 & 2)
  FUNC_2(VAR_9->regmap, VAR_11 + 1, VAR_5);

 return VAR_5;
}
