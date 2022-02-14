
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ sd; } ;
struct TYPE_5__ {TYPE_3__ kobj; } ;
struct enclosure_component {TYPE_2__ cdev; TYPE_1__* dev; } ;
struct TYPE_4__ {TYPE_3__ kobj; } ;


 int VAR_0 ;
 int FUNC_0 (struct enclosure_component*,char*) ;
 int FUNC_1 (TYPE_3__*,char*) ;

__attribute__((used)) static void FUNC_2(struct enclosure_component *VAR_1)
{
 char VAR_2[VAR_0];

 FUNC_0(VAR_1, VAR_2);





 if (VAR_1->dev->kobj.sd)
  FUNC_1(&VAR_1->dev->kobj, VAR_2);

 if (VAR_1->cdev.kobj.sd)
  FUNC_1(&VAR_1->cdev.kobj, "device");
}
