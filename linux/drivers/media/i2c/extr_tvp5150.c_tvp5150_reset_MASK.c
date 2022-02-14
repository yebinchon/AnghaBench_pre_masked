
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct tvp5150 {int hdl; scalar_t__ irq; struct regmap* regmap; } ;
struct regmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct regmap*,int ,int) ;
 struct tvp5150* FUNC_1 (struct v4l2_subdev*) ;
 int VAR_4 ;
 int FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (struct v4l2_subdev*,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_5, u32 VAR_6)
{
 struct tvp5150 *VAR_7 = FUNC_1(VAR_5);
 struct regmap *VAR_8 = VAR_7->regmap;


 FUNC_4(VAR_5, VAR_4);

 if (VAR_7->irq) {

  FUNC_0(VAR_8, VAR_0, 0x0);

  FUNC_0(VAR_8, VAR_2, VAR_3 | 0x1);
  FUNC_0(VAR_8, VAR_1, 0x1);
 } else {

  FUNC_0(VAR_8, VAR_0, 0x2);

  FUNC_0(VAR_8, VAR_2, VAR_3);
  FUNC_0(VAR_8, VAR_1, 0x0);
 }


 FUNC_3(VAR_5);


 FUNC_2(VAR_5);


 FUNC_5(&VAR_7->hdl);

 return 0;
}
