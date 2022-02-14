
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccwgroup_device {int reg_mutex; int dev; } ;


 int FUNC_0 (struct ccwgroup_device*) ;
 int FUNC_1 (struct ccwgroup_device*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ccwgroup_device *VAR_0)
{
 FUNC_4(&VAR_0->reg_mutex);
 if (FUNC_2(&VAR_0->dev)) {
  FUNC_1(VAR_0);
  FUNC_3(&VAR_0->dev);
  FUNC_0(VAR_0);
 }
 FUNC_5(&VAR_0->reg_mutex);
}
