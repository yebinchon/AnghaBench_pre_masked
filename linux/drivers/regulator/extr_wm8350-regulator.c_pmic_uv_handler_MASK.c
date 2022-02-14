
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*,int ,int *) ;
 int FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_5, void *VAR_6)
{
 struct regulator_dev *VAR_7 = (struct regulator_dev *)VAR_6;

 FUNC_0(VAR_7);
 if (VAR_5 == VAR_3 || VAR_5 == VAR_4)
  FUNC_1(VAR_7,
           VAR_1,
           ((void*)0));
 else
  FUNC_1(VAR_7,
           VAR_2,
           ((void*)0));
 FUNC_2(VAR_7);

 return VAR_0;
}
