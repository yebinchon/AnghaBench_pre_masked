
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3270 {struct raw3270* ascebc; struct ccw_device* cdev; int list; } ;
struct ccw_device {int dev; int * handler; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct raw3270*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_6(struct raw3270 *VAR_1)
{
 struct ccw_device *VAR_2;


 FUNC_3(&VAR_0);
 FUNC_2(&VAR_1->list);
 FUNC_4(&VAR_0);


 VAR_2 = VAR_1->cdev;
 VAR_1->cdev = ((void*)0);
 FUNC_0(&VAR_2->dev, ((void*)0));
 VAR_2->handler = ((void*)0);


 FUNC_5(&VAR_2->dev);


 FUNC_1(VAR_1->ascebc);
 FUNC_1(VAR_1);
}
