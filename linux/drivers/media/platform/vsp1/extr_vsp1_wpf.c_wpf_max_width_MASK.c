
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rotate; } ;
struct vsp1_rwpf {unsigned int max_width; TYPE_1__ flip; } ;
struct vsp1_pipeline {int dummy; } ;
struct vsp1_entity {int subdev; } ;


 struct vsp1_rwpf* FUNC_0 (int *) ;

__attribute__((used)) static unsigned int FUNC_1(struct vsp1_entity *VAR_0,
      struct vsp1_pipeline *VAR_1)
{
 struct vsp1_rwpf *VAR_2 = FUNC_0(&VAR_0->subdev);

 return VAR_2->flip.rotate ? 256 : VAR_2->max_width;
}
