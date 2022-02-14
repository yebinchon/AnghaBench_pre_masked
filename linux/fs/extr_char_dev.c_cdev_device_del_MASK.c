
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {scalar_t__ devt; } ;
struct cdev {int dummy; } ;


 int FUNC_0 (struct cdev*) ;
 int FUNC_1 (struct device*) ;

void FUNC_2(struct cdev *VAR_0, struct device *VAR_1)
{
 FUNC_1(VAR_1);
 if (VAR_1->devt)
  FUNC_0(VAR_0);
}
