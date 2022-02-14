
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ast_vhub_dev {int registered; int port_dev; int gadget; TYPE_1__* vhub; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct ast_vhub_dev *VAR_0)
{
 unsigned long VAR_1;

 FUNC_1(&VAR_0->vhub->lock, VAR_1);
 if (!VAR_0->registered) {
  FUNC_2(&VAR_0->vhub->lock, VAR_1);
  return;
 }
 VAR_0->registered = 0;
 FUNC_2(&VAR_0->vhub->lock, VAR_1);

 FUNC_3(&VAR_0->gadget);
 FUNC_0(VAR_0->port_dev);
}
