
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mic_device_ctrl {int vdev; } ;
struct _vop_vdev {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static struct _vop_vdev *FUNC_1(struct mic_device_ctrl *VAR_0)
{
 return (struct _vop_vdev *)(unsigned long)FUNC_0(&VAR_0->vdev);
}
