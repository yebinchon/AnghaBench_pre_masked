
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnet_port {int vp; } ;
struct net_device {int dummy; } ;


 struct vnet_port* FUNC_0 (struct net_device*) ;
 void FUNC_1 (struct net_device*,int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 struct vnet_port *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(VAR_0, VAR_1->vp);
}
