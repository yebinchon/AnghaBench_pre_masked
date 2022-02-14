
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxcan_priv {int peer; } ;
struct net_device {int ifindex; } ;


 struct vxcan_priv* FUNC_0 (struct net_device const*) ;
 struct net_device* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(const struct net_device *VAR_0)
{
 struct vxcan_priv *VAR_1 = FUNC_0(VAR_0);
 struct net_device *VAR_2;
 int VAR_3;

 FUNC_2();
 VAR_2 = FUNC_1(VAR_1->peer);
 VAR_3 = VAR_2 ? VAR_2->ifindex : 0;
 FUNC_3();

 return VAR_3;
}
