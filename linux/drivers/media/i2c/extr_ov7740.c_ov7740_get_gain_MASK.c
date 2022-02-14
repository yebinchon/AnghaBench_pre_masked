
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl {int val; } ;
struct regmap {int dummy; } ;
struct ov7740 {TYPE_1__* gain; struct regmap* regmap; } ;
struct TYPE_2__ {unsigned int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct regmap*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct ov7740 *VAR_2, struct v4l2_ctrl *VAR_3)
{
 struct regmap *VAR_4 = VAR_2->regmap;
 unsigned int VAR_5, VAR_6;
 int VAR_7;

 if (!VAR_3->val)
  return 0;

 VAR_7 = FUNC_0(VAR_4, VAR_1, &VAR_5);
 if (VAR_7)
  return VAR_7;
 VAR_7 = FUNC_0(VAR_4, VAR_0, &VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_2->gain->val = (VAR_6 << 8) | (VAR_5 & 0xff);

 return 0;
}
