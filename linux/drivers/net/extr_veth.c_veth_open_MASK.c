
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct veth_priv {scalar_t__ _xdp_prog; int peer; } ;
struct net_device {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct veth_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2)
{
 struct veth_priv *VAR_3 = FUNC_0(VAR_2);
 struct net_device *VAR_4 = FUNC_2(VAR_3->peer);
 int VAR_5;

 if (!VAR_4)
  return -VAR_0;

 if (VAR_3->_xdp_prog) {
  VAR_5 = FUNC_3(VAR_2);
  if (VAR_5)
   return VAR_5;
 }

 if (VAR_4->flags & VAR_1) {
  FUNC_1(VAR_2);
  FUNC_1(VAR_4);
 }

 return 0;
}
