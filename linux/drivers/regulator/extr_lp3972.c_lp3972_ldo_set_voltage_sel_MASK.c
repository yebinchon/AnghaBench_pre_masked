
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct lp3972 {int dummy; } ;




 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct lp3972*,int ,int,int) ;
 struct lp3972* FUNC_5 (struct regulator_dev*) ;
 int FUNC_6 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_7(struct regulator_dev *VAR_3,
          unsigned int VAR_4)
{
 struct lp3972 *VAR_5 = FUNC_5(VAR_3);
 int VAR_6 = FUNC_6(VAR_3) - 129;
 int VAR_7, VAR_8;

 VAR_7 = FUNC_2(VAR_6);
 VAR_8 = FUNC_4(VAR_5, FUNC_1(VAR_6),
  FUNC_3(VAR_6) << VAR_7, VAR_4 << VAR_7);

 if (VAR_8)
  return VAR_8;
 switch (VAR_6) {
 case 129:
 case 128:
  VAR_7 = FUNC_0(VAR_6);
  VAR_8 = FUNC_4(VAR_5, VAR_2,
   VAR_1 << VAR_7,
   VAR_0 << VAR_7);
  if (VAR_8)
   return VAR_8;

  VAR_8 = FUNC_4(VAR_5, VAR_2,
   VAR_1 << VAR_7, 0);
  break;
 }

 return VAR_8;
}
