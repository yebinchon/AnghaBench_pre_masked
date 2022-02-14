
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int entity; scalar_t__ ctrl_handler; } ;
struct vsp1_entity {TYPE_2__ subdev; int config; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* destroy ) (struct vsp1_entity*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct vsp1_entity*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct vsp1_entity *VAR_0)
{
 if (VAR_0->ops && VAR_0->ops->destroy)
  VAR_0->ops->destroy(VAR_0);
 if (VAR_0->subdev.ctrl_handler)
  FUNC_2(VAR_0->subdev.ctrl_handler);
 FUNC_3(VAR_0->config);
 FUNC_0(&VAR_0->subdev.entity);
}
