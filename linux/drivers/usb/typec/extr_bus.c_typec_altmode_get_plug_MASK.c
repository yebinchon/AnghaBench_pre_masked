
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct typec_altmode {int dev; } ;
struct altmode {TYPE_1__** plug; } ;
typedef enum typec_plug_index { ____Placeholder_typec_plug_index } typec_plug_index ;
struct TYPE_4__ {struct altmode* partner; } ;
struct TYPE_3__ {struct typec_altmode adev; } ;


 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (struct typec_altmode*) ;

struct typec_altmode *FUNC_2(struct typec_altmode *VAR_0,
          enum typec_plug_index VAR_1)
{
 struct altmode *VAR_2 = FUNC_1(VAR_0)->partner;

 if (VAR_2->plug[VAR_1]) {
  FUNC_0(&VAR_2->plug[VAR_1]->adev.dev);
  return &VAR_2->plug[VAR_1]->adev;
 }

 return ((void*)0);
}
