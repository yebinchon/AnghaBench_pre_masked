
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct ice_vsi {struct ice_pf* back; } ;
struct ice_pf {TYPE_1__* first_sw; } ;
struct ice_netdev_priv {struct ice_vsi* vsi; } ;
struct TYPE_2__ {int bridge_mode; } ;


 int FUNC_0 (struct sk_buff*,int ,int ,struct net_device*,int ,int ,int ,int,int ,int *) ;
 struct ice_netdev_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int
FUNC_2(struct sk_buff *VAR_0, u32 VAR_1, u32 VAR_2,
     struct net_device *VAR_3, u32 VAR_4, int VAR_5)
{
 struct ice_netdev_priv *VAR_6 = FUNC_1(VAR_3);
 struct ice_vsi *VAR_7 = VAR_6->vsi;
 struct ice_pf *VAR_8 = VAR_7->back;
 u16 VAR_9;

 VAR_9 = VAR_8->first_sw->bridge_mode;

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_9, 0, 0, VAR_5,
           VAR_4, ((void*)0));
}
