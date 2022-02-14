
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kobj; } ;
struct tee_device {int flags; TYPE_1__ dev; int * pool; int c_no_users; int cdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;
 int VAR_1 ;
 int FUNC_4 (struct tee_device*) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct tee_device *VAR_2)
{
 if (!VAR_2)
  return;

 if (VAR_2->flags & VAR_0) {
  FUNC_3(&VAR_2->dev.kobj, &VAR_1);
  FUNC_0(&VAR_2->cdev);
  FUNC_1(&VAR_2->dev);
 }

 FUNC_4(VAR_2);
 FUNC_5(&VAR_2->c_no_users);






 VAR_2->pool = ((void*)0);

 FUNC_2(&VAR_2->dev);
}
