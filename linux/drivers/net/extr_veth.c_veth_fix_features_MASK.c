
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct veth_priv {scalar_t__ _xdp_prog; int peer; } ;
struct net_device {int dummy; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 struct veth_priv* FUNC_0 (struct net_device*) ;
 struct net_device* FUNC_1 (int ) ;

__attribute__((used)) static netdev_features_t FUNC_2(struct net_device *VAR_1,
        netdev_features_t VAR_2)
{
 struct veth_priv *VAR_3 = FUNC_0(VAR_1);
 struct net_device *VAR_4;

 VAR_4 = FUNC_1(VAR_3->peer);
 if (VAR_4) {
  struct veth_priv *VAR_5 = FUNC_0(VAR_4);

  if (VAR_5->_xdp_prog)
   VAR_2 &= ~VAR_0;
 }

 return VAR_2;
}
