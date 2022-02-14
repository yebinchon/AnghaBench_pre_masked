
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxgedev {int no_of_vpath; } ;
struct vxge_hw_vpath_reg {int dummy; } ;
struct net_device {int dummy; } ;


 struct vxgedev* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0)
{
 struct vxgedev *VAR_1 = FUNC_0(VAR_0);

 return sizeof(struct vxge_hw_vpath_reg) * VAR_1->no_of_vpath;
}
