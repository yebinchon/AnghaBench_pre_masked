
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_driver_state {int hs_state; } ;
struct vnet_port {struct vio_driver_state vio; } ;


 int VAR_0 ;

bool FUNC_0(struct vnet_port *VAR_1)
{
 struct vio_driver_state *VAR_2 = &VAR_1->vio;

 return !!(VAR_2->hs_state & VAR_0);
}
