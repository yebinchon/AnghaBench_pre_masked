
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct mei_device {int dev_state; TYPE_1__ cdev; } ;
struct device {int kobj; } ;
typedef enum mei_dev_state { ____Placeholder_mei_dev_state } mei_dev_state ;


 struct device* FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int *,int *,char*) ;

void FUNC_3(struct mei_device *VAR_1, enum mei_dev_state VAR_2)
{
 struct device *VAR_3;

 if (VAR_1->dev_state == VAR_2)
  return;

 VAR_1->dev_state = VAR_2;

 VAR_3 = FUNC_0(VAR_0, VAR_1->cdev.dev);
 if (VAR_3) {
  FUNC_2(&VAR_3->kobj, ((void*)0), "dev_state");
  FUNC_1(VAR_3);
 }
}
