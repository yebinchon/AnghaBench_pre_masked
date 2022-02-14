
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9055_regulator {int rdev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct da9055_regulator *VAR_4 = VAR_3;

 FUNC_0(VAR_4->rdev);
 FUNC_1(VAR_4->rdev,
          VAR_1, ((void*)0));
 FUNC_2(VAR_4->rdev);

 return VAR_0;
}
