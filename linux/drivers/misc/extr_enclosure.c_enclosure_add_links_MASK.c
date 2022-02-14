
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kobj; } ;
struct enclosure_component {TYPE_1__ cdev; TYPE_2__* dev; } ;
struct TYPE_4__ {int kobj; } ;


 int VAR_0 ;
 int FUNC_0 (struct enclosure_component*,char*) ;
 int FUNC_1 (int *,int *,char*) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static int FUNC_3(struct enclosure_component *VAR_1)
{
 int VAR_2;
 char VAR_3[VAR_0];

 VAR_2 = FUNC_1(&VAR_1->cdev.kobj, &VAR_1->dev->kobj, "device");
 if (VAR_2)
  return VAR_2;

 FUNC_0(VAR_1, VAR_3);
 VAR_2 = FUNC_1(&VAR_1->dev->kobj, &VAR_1->cdev.kobj, VAR_3);
 if (VAR_2)
  FUNC_2(&VAR_1->cdev.kobj, "device");

 return VAR_2;
}
