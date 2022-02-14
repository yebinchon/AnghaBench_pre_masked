
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct ov7740 {TYPE_2__* red_balance; TYPE_1__* blue_balance; struct regmap* regmap; } ;
struct TYPE_4__ {unsigned int val; } ;
struct TYPE_3__ {unsigned int val; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct regmap*,int ,unsigned int*) ;
 int FUNC_1 (struct regmap*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct ov7740 *VAR_5, int VAR_6)
{
 struct regmap *VAR_7 = VAR_5->regmap;
 unsigned int VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_7, VAR_3, &VAR_8);
 if (!VAR_9) {
  if (VAR_6)
   VAR_8 |= (VAR_0 | VAR_1);
  else
   VAR_8 &= ~(VAR_0 | VAR_1);
  VAR_9 = FUNC_1(VAR_7, VAR_3, VAR_8);
  if (VAR_9)
   return VAR_9;
 }

 if (!VAR_6) {
  VAR_9 = FUNC_1(VAR_7, VAR_2,
       VAR_5->blue_balance->val);
  if (VAR_9)
   return VAR_9;

  VAR_9 = FUNC_1(VAR_7, VAR_4, VAR_5->red_balance->val);
  if (VAR_9)
   return VAR_9;
 }

 return 0;
}
