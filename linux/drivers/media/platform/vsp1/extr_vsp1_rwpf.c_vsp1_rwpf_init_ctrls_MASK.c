
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int error; } ;
struct TYPE_5__ {TYPE_3__* ctrl_handler; } ;
struct TYPE_6__ {TYPE_1__ subdev; } ;
struct vsp1_rwpf {TYPE_3__ ctrls; TYPE_2__ entity; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,unsigned int) ;
 int FUNC_1 (TYPE_3__*,int *,int ,int ,int,int,int) ;
 int VAR_1 ;

int FUNC_2(struct vsp1_rwpf *VAR_2, unsigned int VAR_3)
{
 FUNC_0(&VAR_2->ctrls, VAR_3 + 1);
 FUNC_1(&VAR_2->ctrls, &VAR_1,
     VAR_0, 0, 255, 1, 255);

 VAR_2->entity.subdev.ctrl_handler = &VAR_2->ctrls;

 return VAR_2->ctrls.error;
}
