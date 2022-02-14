
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int index; struct vsp1_device* vsp1; } ;
struct vsp1_rwpf {TYPE_1__ entity; } ;
struct vsp1_device {int dummy; } ;
struct v4l2_subdev {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct vsp1_rwpf* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct vsp1_device*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2, int VAR_3)
{
 struct vsp1_rwpf *VAR_4 = FUNC_1(VAR_2);
 struct vsp1_device *VAR_5 = VAR_4->entity.vsp1;

 if (VAR_3)
  return 0;





 FUNC_2(VAR_5, FUNC_0(VAR_4->entity.index), 0);
 FUNC_2(VAR_5, VAR_4->entity.index * VAR_0 +
     VAR_1, 0);

 return 0;
}
