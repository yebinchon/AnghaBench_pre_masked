
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_driver_state {int dummy; } ;
struct vnet_port {struct vio_driver_state vio; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct vnet_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct vio_driver_state*,int ) ;
 int FUNC_2 (struct vio_driver_state*) ;
 int FUNC_3 (struct vnet_port*) ;

int FUNC_4(struct net_device *VAR_1)
{
 struct vnet_port *VAR_2 = FUNC_0(VAR_1);
 struct vio_driver_state *VAR_3 = &VAR_2->vio;


 FUNC_1(VAR_3, VAR_0);
 FUNC_3(VAR_2);
 FUNC_2(VAR_3);

 return 0;
}
