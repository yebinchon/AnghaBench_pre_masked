
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct regulator_dev*,int,int,unsigned int*) ;
 int FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_3,
         int VAR_4, int VAR_5)
{
 unsigned VAR_6;
 int VAR_7 = FUNC_1(VAR_3);

 if (VAR_7 != VAR_1 && VAR_7 != VAR_2)
  return -VAR_0;


 return FUNC_0(VAR_3, VAR_4, VAR_5, &VAR_6);
}
