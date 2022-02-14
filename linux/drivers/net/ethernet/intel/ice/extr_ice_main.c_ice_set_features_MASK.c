
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int features; } ;
struct ice_vsi {TYPE_2__* back; } ;
struct ice_netdev_priv {struct ice_vsi* vsi; } ;
typedef int netdev_features_t ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct ice_vsi*,int,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct ice_vsi*,int) ;
 int FUNC_4 (struct ice_vsi*) ;
 int FUNC_5 (struct ice_vsi*,int) ;
 struct ice_netdev_priv* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int
FUNC_7(struct net_device *VAR_4, netdev_features_t VAR_5)
{
 struct ice_netdev_priv *VAR_6 = FUNC_6(VAR_4);
 struct ice_vsi *VAR_7 = VAR_6->vsi;
 int VAR_8 = 0;


 if (FUNC_2(VAR_7->back)) {
  FUNC_0(&VAR_7->back->pdev->dev,
   "Device is in Safe Mode - not enabling advanced netdev features\n");
  return VAR_8;
 }




 if (VAR_5 & VAR_3 && !(VAR_4->features & VAR_3))
  VAR_8 = FUNC_3(VAR_7, 1);
 else if (!(VAR_5 & VAR_3) &&
   VAR_4->features & VAR_3)
  VAR_8 = FUNC_3(VAR_7, 0);

 if ((VAR_5 & VAR_1) &&
     !(VAR_4->features & VAR_1))
  VAR_8 = FUNC_5(VAR_7, 1);
 else if (!(VAR_5 & VAR_1) &&
   (VAR_4->features & VAR_1))
  VAR_8 = FUNC_5(VAR_7, 0);

 if ((VAR_5 & VAR_2) &&
     !(VAR_4->features & VAR_2))
  VAR_8 = FUNC_4(VAR_7);
 else if (!(VAR_5 & VAR_2) &&
   (VAR_4->features & VAR_2))
  VAR_8 = FUNC_4(VAR_7);

 if ((VAR_5 & VAR_0) &&
     !(VAR_4->features & VAR_0))
  VAR_8 = FUNC_1(VAR_7, 1, 0);
 else if (!(VAR_5 & VAR_0) &&
   (VAR_4->features & VAR_0))
  VAR_8 = FUNC_1(VAR_7, 0, 0);

 return VAR_8;
}
