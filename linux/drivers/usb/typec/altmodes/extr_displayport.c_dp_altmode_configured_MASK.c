
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int conf; } ;
struct dp_altmode {TYPE_2__* alt; TYPE_3__ data; } ;
struct TYPE_4__ {int kobj; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct dp_altmode*) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (TYPE_2__*,int ,TYPE_3__*) ;

__attribute__((used)) static int FUNC_3(struct dp_altmode *VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_1->alt->dev.kobj, "displayport", "configuration");

 if (!VAR_1->data.conf)
  return FUNC_2(VAR_1->alt, VAR_0,
         &VAR_1->data);

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  return VAR_2;

 FUNC_1(&VAR_1->alt->dev.kobj, "displayport", "pin_assignment");

 return 0;
}
