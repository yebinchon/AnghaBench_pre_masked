
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct lp3972 {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct lp3972*,int ,int ,unsigned int) ;
 struct lp3972* FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_5,
           unsigned int VAR_6)
{
 struct lp3972 *VAR_7 = FUNC_2(VAR_5);
 int VAR_8 = FUNC_3(VAR_5) - VAR_1;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_7, FUNC_0(VAR_8),
    VAR_0, VAR_6);
 if (VAR_9)
  return VAR_9;

 if (VAR_8 != 0)
  return VAR_9;

 VAR_9 = FUNC_1(VAR_7, VAR_4,
  VAR_3, VAR_2);
 if (VAR_9)
  return VAR_9;

 return FUNC_1(VAR_7, VAR_4,
    VAR_3, 0);
}
