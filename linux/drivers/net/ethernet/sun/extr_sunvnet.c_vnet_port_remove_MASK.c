
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timer; } ;
struct vnet_port {TYPE_1__ vio; int napi; int clean_timer; int hash; int list; } ;
struct vio_dev {int dev; } ;


 int FUNC_0 (int *) ;
 struct vnet_port* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct vnet_port*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct vnet_port*) ;
 int FUNC_9 (struct vnet_port*) ;
 int FUNC_10 () ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_12(struct vio_dev *VAR_0)
{
 struct vnet_port *VAR_1 = FUNC_1(&VAR_0->dev);

 if (VAR_1) {
  FUNC_0(&VAR_1->vio.timer);

  FUNC_6(&VAR_1->napi);

  FUNC_5(&VAR_1->list);
  FUNC_3(&VAR_1->hash);

  FUNC_10();
  FUNC_0(&VAR_1->clean_timer);
  FUNC_9(VAR_1);
  FUNC_7(&VAR_1->napi);
  FUNC_8(VAR_1);
  FUNC_11(&VAR_1->vio);

  FUNC_2(&VAR_0->dev, ((void*)0));

  FUNC_4(VAR_1);
 }
 return 0;
}
