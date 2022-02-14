
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct mei_device {TYPE_1__ cdev; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int FUNC_2 (struct mei_device*) ;
 int FUNC_3 (struct mei_device*) ;

void FUNC_4(struct mei_device *VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_1->cdev.dev;
 FUNC_0(&VAR_1->cdev);

 FUNC_2(VAR_1);

 FUNC_1(VAR_0, VAR_2);

 FUNC_3(VAR_1);
}
