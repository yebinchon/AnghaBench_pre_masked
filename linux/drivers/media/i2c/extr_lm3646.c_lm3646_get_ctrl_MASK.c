
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ctrl {scalar_t__ id; int val; } ;
struct lm3646_flash {int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 struct lm3646_flash* FUNC_1 (struct v4l2_ctrl*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_ctrl *VAR_19)
{
 struct lm3646_flash *VAR_20 = FUNC_1(VAR_19);
 unsigned int VAR_21;
 int VAR_22;

 if (VAR_19->id != VAR_10)
  return -VAR_0;

 VAR_22 = FUNC_0(VAR_20->regmap, VAR_9, &VAR_21);
 if (VAR_22 < 0)
  return VAR_22;

 VAR_19->val = 0;
 if (VAR_21 & VAR_7)
  VAR_19->val |= VAR_17;
 if (VAR_21 & VAR_6)
  VAR_19->val |= VAR_16;
 if (VAR_21 & VAR_8)
  VAR_19->val |= VAR_18;
 if (VAR_21 & VAR_1)
  VAR_19->val |= VAR_11;
 if (VAR_21 & VAR_3)
  VAR_19->val |= VAR_13;
 if (VAR_21 & VAR_4)
  VAR_19->val |= VAR_14;
 if (VAR_21 & VAR_2)
  VAR_19->val |= VAR_12;
 if (VAR_21 & VAR_5)
  VAR_19->val |= VAR_15;

 return 0;
}
