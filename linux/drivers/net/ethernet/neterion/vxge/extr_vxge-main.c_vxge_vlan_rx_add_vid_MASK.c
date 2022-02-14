
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vxgedev {int no_of_vpath; int active_vlans; struct vxge_vpath* vpaths; } ;
struct vxge_vpath {int handle; int is_open; } ;
struct net_device {int dummy; } ;
typedef int __be16 ;


 struct vxgedev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_0, __be16 VAR_1, u16 VAR_2)
{
 struct vxgedev *VAR_3 = FUNC_0(VAR_0);
 struct vxge_vpath *VAR_4;
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_3->no_of_vpath; VAR_5++) {
  VAR_4 = &VAR_3->vpaths[VAR_5];
  if (!VAR_4->is_open)
   continue;
  FUNC_2(VAR_4->handle, VAR_2);
 }
 FUNC_1(VAR_2, VAR_3->active_vlans);
 return 0;
}
