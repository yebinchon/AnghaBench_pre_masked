
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int kobj; TYPE_1__* driver; int parent; } ;
struct typec_altmode {int active; int mode; TYPE_2__ dev; } ;
typedef int dir ;
struct TYPE_3__ {int owner; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int,char*,int) ;
 int FUNC_5 (int *,char*,char*) ;
 int FUNC_6 (int ) ;

void FUNC_7(struct typec_altmode *VAR_1, bool VAR_2)
{
 char VAR_3[6];

 if (VAR_1->active == VAR_2)
  return;

 if (!FUNC_1(VAR_1->dev.parent) && VAR_1->dev.driver) {
  if (!VAR_2)
   FUNC_3(VAR_1->dev.driver->owner);
  else
   FUNC_0(!FUNC_6(VAR_1->dev.driver->owner));
 }

 VAR_1->active = VAR_2;
 FUNC_4(VAR_3, sizeof(VAR_3), "mode%d", VAR_1->mode);
 FUNC_5(&VAR_1->dev.kobj, VAR_3, "active");
 FUNC_5(&VAR_1->dev.kobj, ((void*)0), "active");
 FUNC_2(&VAR_1->dev.kobj, VAR_0);
}
