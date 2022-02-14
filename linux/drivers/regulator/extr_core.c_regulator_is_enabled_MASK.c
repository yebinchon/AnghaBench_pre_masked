
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator {int rdev; scalar_t__ always_on; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct regulator *VAR_0)
{
 int VAR_1;

 if (VAR_0->always_on)
  return 1;

 FUNC_1(VAR_0->rdev);
 VAR_1 = FUNC_0(VAR_0->rdev);
 FUNC_2(VAR_0->rdev);

 return VAR_1;
}
