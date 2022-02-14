
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct typec_plug {size_t index; } ;
struct TYPE_2__ {int parent; } ;
struct typec_altmode {TYPE_1__ dev; } ;
struct altmode {struct altmode* partner; int ** plug; struct typec_altmode adev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 struct typec_plug* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct altmode *VAR_0)
{
 struct altmode *VAR_1 = VAR_0->partner;
 struct typec_altmode *VAR_2;

 if (!VAR_1)
  return;

 VAR_2 = &VAR_1->adev;

 if (FUNC_0(VAR_2->dev.parent)) {
  struct typec_plug *VAR_3 = FUNC_2(VAR_2->dev.parent);

  VAR_1->plug[VAR_3->index] = ((void*)0);
 } else {
  VAR_1->partner = ((void*)0);
 }
 FUNC_1(&VAR_2->dev);
}
