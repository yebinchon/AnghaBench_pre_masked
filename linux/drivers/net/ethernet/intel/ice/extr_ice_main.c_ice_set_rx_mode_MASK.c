
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ice_vsi {TYPE_1__* back; int flags; } ;
struct ice_netdev_priv {struct ice_vsi* vsi; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 struct ice_netdev_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3)
{
 struct ice_netdev_priv *VAR_4 = FUNC_1(VAR_3);
 struct ice_vsi *VAR_5 = VAR_4->vsi;

 if (!VAR_5)
  return;





 FUNC_2(VAR_2, VAR_5->flags);
 FUNC_2(VAR_1, VAR_5->flags);
 FUNC_2(VAR_0, VAR_5->back->flags);




 FUNC_0(VAR_5->back);
}
