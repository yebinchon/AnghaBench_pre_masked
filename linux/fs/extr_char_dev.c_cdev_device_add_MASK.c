
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {scalar_t__ devt; int kobj; } ;
struct cdev {int dummy; } ;


 int FUNC_0 (struct cdev*,scalar_t__,int) ;
 int FUNC_1 (struct cdev*) ;
 int FUNC_2 (struct cdev*,int *) ;
 int FUNC_3 (struct device*) ;

int FUNC_4(struct cdev *VAR_0, struct device *VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1->devt) {
  FUNC_2(VAR_0, &VAR_1->kobj);

  VAR_2 = FUNC_0(VAR_0, VAR_1->devt, 1);
  if (VAR_2)
   return VAR_2;
 }

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2)
  FUNC_1(VAR_0);

 return VAR_2;
}
