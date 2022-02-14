
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxgedev {int dummy; } ;
struct net_device {int dummy; } ;
struct ifreq {int ifr_data; } ;


 int VAR_0 ;


 struct vxgedev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct vxgedev*,int ) ;
 int FUNC_2 (struct vxgedev*,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, struct ifreq *VAR_2, int VAR_3)
{
 struct vxgedev *VAR_4 = FUNC_0(VAR_1);

 switch (VAR_3) {
 case 128:
  return FUNC_2(VAR_4, VAR_2->ifr_data);
 case 129:
  return FUNC_1(VAR_4, VAR_2->ifr_data);
 default:
  return -VAR_0;
 }
}
