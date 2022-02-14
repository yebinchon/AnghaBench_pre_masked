
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_rect {int height; int width; int top; int left; } ;
struct regmap {int dummy; } ;
struct mt9v032 {int vratio; int hratio; struct regmap* regmap; struct v4l2_rect crop; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int const VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mt9v032*) ;
 int FUNC_2 (struct regmap*,int ,unsigned int const,unsigned int const) ;
 int FUNC_3 (struct regmap*,int ,int ) ;
 struct mt9v032* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_11, int VAR_12)
{
 const u16 VAR_13 = VAR_1
         | VAR_2;
 struct mt9v032 *VAR_14 = FUNC_4(VAR_11);
 struct v4l2_rect *VAR_15 = &VAR_14->crop;
 struct regmap *VAR_16 = VAR_14->regmap;
 unsigned int VAR_17;
 unsigned int VAR_18;
 int VAR_19;

 if (!VAR_12)
  return FUNC_2(VAR_16, VAR_0, VAR_13, 0);


 VAR_17 = FUNC_0(VAR_14->hratio) - 1;
 VAR_18 = FUNC_0(VAR_14->vratio) - 1;
 VAR_19 = FUNC_2(VAR_16, VAR_4,
     ~VAR_6,
     VAR_17 << VAR_5 |
     VAR_18 << VAR_7);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_19 = FUNC_3(VAR_16, VAR_3, VAR_15->left);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_19 = FUNC_3(VAR_16, VAR_8, VAR_15->top);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_19 = FUNC_3(VAR_16, VAR_10, VAR_15->width);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_19 = FUNC_3(VAR_16, VAR_9, VAR_15->height);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_19 = FUNC_1(VAR_14);
 if (VAR_19 < 0)
  return VAR_19;


 return FUNC_2(VAR_16, VAR_0, VAR_13, VAR_13);
}
