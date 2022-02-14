
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_sliced_vbi_format {scalar_t__ service_set; scalar_t__** service_lines; } ;
struct tvp5150 {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int) ;
 struct tvp5150* FUNC_1 (struct v4l2_subdev*) ;
 scalar_t__ FUNC_2 (struct v4l2_subdev*,scalar_t__,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_4, struct v4l2_sliced_vbi_format *VAR_5)
{
 struct tvp5150 *VAR_6 = FUNC_1(VAR_4);
 int VAR_7;

 if (VAR_5->service_set != 0) {
  for (VAR_7 = 0; VAR_7 <= 23; VAR_7++) {
   VAR_5->service_lines[1][VAR_7] = 0;
   VAR_5->service_lines[0][VAR_7] =
    FUNC_2(VAR_4, VAR_5->service_lines[0][VAR_7],
      0xf0, VAR_7, 3);
  }

  FUNC_0(VAR_6->regmap, VAR_0, 1);
 } else {

  FUNC_0(VAR_6->regmap, VAR_0, 0);


  FUNC_0(VAR_6->regmap, VAR_1, 0);


  for (VAR_7 = VAR_3; VAR_7 <= VAR_2; VAR_7++)
   FUNC_0(VAR_6->regmap, VAR_7, 0xff);
 }
 return 0;
}
