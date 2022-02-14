
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpmsg_eptdev {int dev; int readq; int ept_lock; int * ept; } ;
struct device {int dummy; } ;


 struct rpmsg_eptdev* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_0, void *VAR_1)
{
 struct rpmsg_eptdev *VAR_2 = FUNC_0(VAR_0);

 FUNC_2(&VAR_2->ept_lock);
 if (VAR_2->ept) {
  FUNC_5(VAR_2->ept);
  VAR_2->ept = ((void*)0);
 }
 FUNC_3(&VAR_2->ept_lock);


 FUNC_6(&VAR_2->readq);

 FUNC_1(&VAR_2->dev);
 FUNC_4(&VAR_2->dev);

 return 0;
}
