
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxgedev {struct __vxge_hw_device* devh; } ;
struct net_device {int dummy; } ;
struct __vxge_hw_device {int dummy; } ;
typedef enum ethtool_phys_id_state { ____Placeholder_ethtool_phys_id_state } ethtool_phys_id_state ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 struct vxgedev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct __vxge_hw_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3,
         enum ethtool_phys_id_state VAR_4)
{
 struct vxgedev *VAR_5 = FUNC_0(VAR_3);
 struct __vxge_hw_device *VAR_6 = VAR_5->devh;

 switch (VAR_4) {
 case 129:
  FUNC_1(VAR_6, VAR_2);
  break;

 case 128:
  FUNC_1(VAR_6, VAR_1);
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
