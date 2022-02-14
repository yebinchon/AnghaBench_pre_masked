
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vio_driver_state {TYPE_1__* vdev; } ;
struct TYPE_4__ {scalar_t__ expires; } ;
struct vcc_port {int lock; scalar_t__ removed; int tty; struct vio_driver_state vio; TYPE_2__ rx_timer; } ;
struct timer_list {int dummy; } ;
struct TYPE_3__ {int rx_irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct vcc_port* FUNC_1 (int ,struct timer_list*,int ) ;
 struct vcc_port* VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct vcc_port*) ;
 int FUNC_5 (struct vcc_port*,int) ;
 int FUNC_6 (struct vio_driver_state*) ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_3)
{
 struct vcc_port *VAR_4 = FUNC_1(VAR_4, VAR_3, VAR_2);
 struct vio_driver_state *VAR_5;
 unsigned long VAR_6;
 int VAR_7;

 FUNC_2(&VAR_4->lock, VAR_6);
 VAR_4->rx_timer.expires = 0;

 VAR_5 = &VAR_4->vio;

 FUNC_0(VAR_5->vdev->rx_irq);

 if (!VAR_4->tty || VAR_4->removed)
  goto done;

 VAR_7 = FUNC_4(VAR_4);
 if (VAR_7 == -VAR_0)
  FUNC_6(VAR_5);

done:
 FUNC_3(&VAR_4->lock, VAR_6);
 FUNC_5(VAR_4, 0);
}
