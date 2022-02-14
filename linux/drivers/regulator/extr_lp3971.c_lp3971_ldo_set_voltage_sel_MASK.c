
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct lp3971 {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct lp3971*,int ,unsigned int,unsigned int) ;
 struct lp3971* FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_2,
          unsigned int VAR_3)
{
 struct lp3971 *VAR_4 = FUNC_3(VAR_2);
 int VAR_5 = FUNC_4(VAR_2) - VAR_1;

 return FUNC_2(VAR_4, FUNC_1(VAR_5),
   VAR_0 << FUNC_0(VAR_5),
   VAR_3 << FUNC_0(VAR_5));
}
