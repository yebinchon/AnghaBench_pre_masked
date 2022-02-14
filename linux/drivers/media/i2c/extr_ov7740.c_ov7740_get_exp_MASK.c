
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl {scalar_t__ val; } ;
struct regmap {int dummy; } ;
struct ov7740 {TYPE_1__* exposure; struct regmap* regmap; } ;
struct TYPE_2__ {unsigned int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct regmap*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct ov7740 *VAR_3, struct v4l2_ctrl *VAR_4)
{
 struct regmap *VAR_5 = VAR_3->regmap;
 unsigned int VAR_6, VAR_7;
 int VAR_8;

 if (VAR_4->val == VAR_2)
  return 0;

 VAR_8 = FUNC_0(VAR_5, VAR_0, &VAR_6);
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_0(VAR_5, VAR_1, &VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_3->exposure->val = (VAR_7 << 8) | (VAR_6 & 0xff);

 return 0;
}
