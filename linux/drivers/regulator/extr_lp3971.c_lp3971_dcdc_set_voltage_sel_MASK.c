
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct lp3971 {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct lp3971*,int ,unsigned int,unsigned int) ;
 struct lp3971* FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_5,
           unsigned int VAR_6)
{
 struct lp3971 *VAR_7 = FUNC_3(VAR_5);
 int VAR_8 = FUNC_4(VAR_5) - VAR_4;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_7, FUNC_1(VAR_8),
        VAR_0, VAR_6);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_2(VAR_7, VAR_3,
        VAR_2 << FUNC_0(VAR_8),
        VAR_1 << FUNC_0(VAR_8));
 if (VAR_9)
  return VAR_9;

 return FUNC_2(VAR_7, VAR_3,
        VAR_2 << FUNC_0(VAR_8),
        0 << FUNC_0(VAR_8));
}
