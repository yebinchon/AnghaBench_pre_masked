
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ice_vsi {struct ice_pf* back; } ;
struct ice_vf {int trusted; int vf_states; } ;
struct ice_pf {int num_alloc_vfs; TYPE_1__* pdev; struct ice_vf* vf; } ;
struct ice_netdev_priv {struct ice_vsi* vsi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int,char*) ;
 int FUNC_2 (struct ice_vf*) ;
 struct ice_netdev_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int ) ;

int FUNC_5(struct net_device *VAR_3, int VAR_4, bool VAR_5)
{
 struct ice_netdev_priv *VAR_6 = FUNC_3(VAR_3);
 struct ice_vsi *VAR_7 = VAR_6->vsi;
 struct ice_pf *VAR_8 = VAR_7->back;
 struct ice_vf *VAR_9;


 if (VAR_4 >= VAR_8->num_alloc_vfs) {
  FUNC_0(&VAR_8->pdev->dev, "invalid VF id: %d\n", VAR_4);
  return -VAR_1;
 }

 VAR_9 = &VAR_8->vf[VAR_4];
 if (!FUNC_4(VAR_2, VAR_9->vf_states)) {
  FUNC_0(&VAR_8->pdev->dev, "VF %d in reset. Try again.\n", VAR_4);
  return -VAR_0;
 }


 if (VAR_5 == VAR_9->trusted)
  return 0;

 VAR_9->trusted = VAR_5;
 FUNC_2(VAR_9);
 FUNC_1(&VAR_8->pdev->dev, "VF %u is now %strusted\n",
   VAR_4, VAR_5 ? "" : "un");

 return 0;
}
