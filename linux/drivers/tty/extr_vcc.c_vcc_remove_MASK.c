
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int kobj; } ;
struct vio_dev {TYPE_2__ dev; } ;
struct TYPE_4__ {struct vcc_port* name; int timer; } ;
struct vcc_port {int removed; struct vcc_port* domain; TYPE_1__ vio; int index; scalar_t__ tty; int tx_timer; int rx_timer; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 struct vcc_port* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (struct vcc_port*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (scalar_t__) ;
 int VAR_1 ;
 struct vcc_port* FUNC_8 (int ,int) ;
 int FUNC_9 (struct vcc_port*,int) ;
 int FUNC_10 (int ) ;
 int VAR_2 ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_12(struct vio_dev *VAR_3)
{
 struct vcc_port *VAR_4 = FUNC_2(&VAR_3->dev);

 if (!VAR_4)
  return -VAR_0;

 FUNC_1(&VAR_4->rx_timer);
 FUNC_1(&VAR_4->tx_timer);





 if (VAR_4->tty)
  FUNC_7(VAR_4->tty);




 VAR_4 = FUNC_8(VAR_4->index, 1);

 if (FUNC_0(!VAR_4))
  return -VAR_0;

 FUNC_6(VAR_2, VAR_4->index);

 FUNC_1(&VAR_4->vio.timer);
 FUNC_11(&VAR_4->vio);
 FUNC_5(&VAR_3->dev.kobj, &VAR_1);
 FUNC_3(&VAR_3->dev, ((void*)0));
 if (VAR_4->tty) {
  VAR_4->removed = 1;
  FUNC_9(VAR_4, 1);
 } else {
  FUNC_10(VAR_4->index);

  FUNC_4(VAR_4->vio.name);
  FUNC_4(VAR_4->domain);
  FUNC_4(VAR_4);
 }

 return 0;
}
