
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; int mtu; } ;
struct bnx2x {int disable_tpa; int pdev; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct bnx2x* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (int ) ;

netdev_features_t FUNC_3(struct net_device *VAR_5,
         netdev_features_t VAR_6)
{
 struct bnx2x *VAR_7 = FUNC_1(VAR_5);

 if (FUNC_2(VAR_7->pdev)) {
  netdev_features_t VAR_8 = VAR_5->features ^ VAR_6;




  if (!(VAR_6 & VAR_4) && !VAR_7->disable_tpa) {
   VAR_6 &= ~VAR_4;
   VAR_6 |= VAR_5->features & VAR_4;
  }

  if (VAR_8 & VAR_2) {
   VAR_6 &= ~VAR_2;
   VAR_6 |= VAR_5->features & VAR_2;
  }
 }


 if (!(VAR_6 & VAR_4))
  VAR_6 &= ~VAR_3;

 if (!(VAR_6 & VAR_0) || !FUNC_0(VAR_5->mtu))
  VAR_6 &= ~VAR_1;
 if (VAR_6 & VAR_1)
  VAR_6 &= ~VAR_3;

 return VAR_6;
}
