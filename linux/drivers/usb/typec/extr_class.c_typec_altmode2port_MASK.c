
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct typec_port {int dummy; } ;
struct TYPE_6__ {TYPE_2__* parent; } ;
struct typec_altmode {TYPE_1__ dev; } ;
struct TYPE_7__ {struct TYPE_7__* parent; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 struct typec_port* FUNC_3 (TYPE_2__*) ;

struct typec_port *FUNC_4(struct typec_altmode *VAR_0)
{
 if (FUNC_1(VAR_0->dev.parent))
  return FUNC_3(VAR_0->dev.parent->parent->parent);
 if (FUNC_0(VAR_0->dev.parent))
  return FUNC_3(VAR_0->dev.parent->parent);
 if (FUNC_2(VAR_0->dev.parent))
  return FUNC_3(VAR_0->dev.parent);

 return ((void*)0);
}
