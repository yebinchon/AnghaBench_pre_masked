
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ctrl {int id; int val; } ;
struct lm3646_flash {int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;







 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (struct lm3646_flash*,int) ;
 int FUNC_4 (int ,int ,unsigned int*) ;
 int FUNC_5 (int ,int ,int ,int) ;
 struct lm3646_flash* FUNC_6 (struct v4l2_ctrl*) ;

__attribute__((used)) static int FUNC_7(struct v4l2_ctrl *VAR_15)
{
 struct lm3646_flash *VAR_16 = FUNC_6(VAR_15);
 unsigned int VAR_17;
 int VAR_18 = -VAR_0;

 switch (VAR_15->id) {
 case 133:

  if (VAR_15->val != VAR_13)
   return FUNC_3(VAR_16, VAR_15->val);

  return FUNC_3(VAR_16, VAR_14);

 case 131:
  return FUNC_5(VAR_16->regmap,
       VAR_11, VAR_4,
       (VAR_15->val) << 7);

 case 132:


  VAR_18 = FUNC_4(VAR_16->regmap, VAR_8, &VAR_17);
  if (VAR_18 < 0 || ((VAR_17 & VAR_1) != VAR_7))
   return VAR_18;

  return FUNC_3(VAR_16, VAR_13);

 case 130:






  VAR_18 = FUNC_4(VAR_16->regmap, VAR_8, &VAR_17);
  if (VAR_18 < 0)
   return VAR_18;
  if ((VAR_17 & VAR_1) == VAR_6)
   return FUNC_3(VAR_16,
      VAR_14);
  return VAR_18;

 case 129:
  return FUNC_5(VAR_16->regmap,
       VAR_10, VAR_3,
       FUNC_0
       (VAR_15->val));

 case 134:
  return FUNC_5(VAR_16->regmap,
       VAR_9, VAR_2,
       FUNC_1
       (VAR_15->val));

 case 128:
  return FUNC_5(VAR_16->regmap,
       VAR_12, VAR_5,
       FUNC_2
       (VAR_15->val) << 4);
 }

 return -VAR_0;
}
