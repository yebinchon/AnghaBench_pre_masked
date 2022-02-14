
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int timer; } ;
struct vnet_port {int dev; TYPE_2__ vio; int napi; TYPE_1__* vp; int list; int clean_timer; } ;
struct vio_dev {int dev; } ;
struct TYPE_3__ {int lock; } ;


 int FUNC_0 (int *) ;
 struct vnet_port* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct vnet_port*) ;
 int FUNC_10 (struct vnet_port*) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_14(struct vio_dev *VAR_0)
{
 struct vnet_port *VAR_1 = FUNC_1(&VAR_0->dev);
 unsigned long VAR_2;

 if (VAR_1) {
  FUNC_0(&VAR_1->vio.timer);
  FUNC_0(&VAR_1->clean_timer);

  FUNC_5(&VAR_1->napi);
  FUNC_12(VAR_1->dev);

  FUNC_4(&VAR_1->list);

  FUNC_11();
  FUNC_7(&VAR_1->vp->lock, VAR_2);
  FUNC_10(VAR_1);
  FUNC_8(&VAR_1->vp->lock, VAR_2);
  FUNC_6(&VAR_1->napi);
  FUNC_9(VAR_1);
  FUNC_13(&VAR_1->vio);

  FUNC_2(&VAR_0->dev, ((void*)0));

  FUNC_3(VAR_1->dev);
 }

 return 0;
}
