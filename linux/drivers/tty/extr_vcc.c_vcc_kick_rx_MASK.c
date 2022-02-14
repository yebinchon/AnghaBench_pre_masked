
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vio_driver_state {TYPE_1__* vdev; } ;
struct TYPE_5__ {scalar_t__ expires; } ;
struct vcc_port {TYPE_2__ rx_timer; int removed; int lock; struct vio_driver_state vio; } ;
struct TYPE_4__ {int rx_irq; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(struct vcc_port *VAR_1)
{
 struct vio_driver_state *VAR_2 = &VAR_1->vio;

 FUNC_1(&VAR_1->lock);

 if (!FUNC_3(&VAR_1->rx_timer) && !VAR_1->removed) {
  FUNC_2(VAR_2->vdev->rx_irq);
  VAR_1->rx_timer.expires = (VAR_0 + 1);
  FUNC_0(&VAR_1->rx_timer);
 }
}
