
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qmp_cooling_device {char* name; int cdev; int state; struct qmp* qmp; } ;
struct qmp {int dev; } ;
struct device_node {scalar_t__ name; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int ,struct device_node*,char*,struct qmp_cooling_device*,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct qmp *VAR_2,
      struct qmp_cooling_device *VAR_3,
      struct device_node *VAR_4)
{
 char *VAR_5 = (char *)VAR_4->name;

 VAR_3->qmp = VAR_2;
 VAR_3->state = VAR_0;
 VAR_3->name = VAR_5;
 VAR_3->cdev = FUNC_3
    (VAR_2->dev, VAR_4,
    VAR_5,
    VAR_3, &VAR_1);

 if (FUNC_0(VAR_3->cdev))
  FUNC_2(VAR_2->dev, "unable to register %s cooling device\n",
   VAR_5);

 return FUNC_1(VAR_3->cdev);
}
