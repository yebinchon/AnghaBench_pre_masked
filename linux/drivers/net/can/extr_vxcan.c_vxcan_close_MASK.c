
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxcan_priv {int peer; } ;
struct net_device {int dummy; } ;


 struct vxcan_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0)
{
 struct vxcan_priv *VAR_1 = FUNC_0(VAR_0);
 struct net_device *VAR_2 = FUNC_2(VAR_1->peer);

 FUNC_1(VAR_0);
 if (VAR_2)
  FUNC_1(VAR_2);

 return 0;
}
