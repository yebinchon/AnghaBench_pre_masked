
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vio_driver_state {TYPE_1__* vdev; } ;
struct vnet_port {int rx_event; int napi; struct vio_driver_state vio; } ;
struct TYPE_2__ {int rx_ino; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(void *VAR_1, int VAR_2)
{
 struct vnet_port *VAR_3 = VAR_1;
 struct vio_driver_state *VAR_4 = &VAR_3->vio;

 VAR_3->rx_event |= VAR_2;
 FUNC_1(VAR_4->vdev->rx_ino, VAR_0);
 FUNC_0(&VAR_3->napi);
}
