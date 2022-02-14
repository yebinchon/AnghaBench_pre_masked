
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct media_link {TYPE_2__* source; TYPE_1__* sink; } ;
struct media_entity {int dummy; } ;
struct TYPE_4__ {struct media_entity* entity; } ;
struct TYPE_3__ {struct media_entity* entity; } ;



__attribute__((used)) static struct media_entity *
FUNC_0(struct media_entity *VAR_0, struct media_link *VAR_1)
{
 if (VAR_1->source->entity == VAR_0)
  return VAR_1->sink->entity;
 else
  return VAR_1->source->entity;
}
