
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {size_t index; } ;
struct vsp1_rwpf {TYPE_3__ entity; } ;
struct vsp1_device {TYPE_2__* drm; } ;
struct TYPE_5__ {TYPE_1__* inputs; } ;
struct TYPE_4__ {unsigned int zpos; } ;



__attribute__((used)) static unsigned int FUNC_0(struct vsp1_device *VAR_0, struct vsp1_rwpf *VAR_1)
{
 return VAR_0->drm->inputs[VAR_1->entity.index].zpos;
}
