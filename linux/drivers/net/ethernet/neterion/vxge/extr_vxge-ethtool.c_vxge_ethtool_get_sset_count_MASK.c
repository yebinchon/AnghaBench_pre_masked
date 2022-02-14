
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxgedev {int no_of_vpath; int max_config_port; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct vxgedev* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_9, int VAR_10)
{
 struct vxgedev *VAR_11 = FUNC_0(VAR_9);

 switch (VAR_10) {
 case 128:
  return VAR_8 +
   (VAR_11->no_of_vpath * VAR_5) +
   (VAR_11->max_config_port * VAR_2) +
   (VAR_11->max_config_port * VAR_3) +
   (VAR_11->no_of_vpath * VAR_6) +
   (VAR_11->no_of_vpath * VAR_4) +
   (VAR_11->no_of_vpath * VAR_7) +
   VAR_0;
 default:
  return -VAR_1;
 }
}
