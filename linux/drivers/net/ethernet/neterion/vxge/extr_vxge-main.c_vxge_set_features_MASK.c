
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vxgedev {TYPE_2__* devh; } ;
struct net_device {int features; } ;
typedef int netdev_features_t ;
struct TYPE_3__ {int rth_en; } ;
struct TYPE_4__ {TYPE_1__ config; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct vxgedev* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct vxgedev*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3, netdev_features_t VAR_4)
{
 struct vxgedev *VAR_5 = FUNC_0(VAR_3);
 netdev_features_t VAR_6 = VAR_3->features ^ VAR_4;

 if (!(VAR_6 & VAR_1))
  return 0;



 VAR_5->devh->config.rth_en = !!(VAR_4 & VAR_1);
 if (FUNC_1(VAR_5) != VAR_2) {
  VAR_3->features = VAR_4 ^ VAR_1;
  VAR_5->devh->config.rth_en = !!(VAR_3->features & VAR_1);
  return -VAR_0;
 }

 return 0;
}
