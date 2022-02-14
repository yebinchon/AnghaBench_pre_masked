
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ast_vhub_dev {TYPE_2__* vhub; int gadget; TYPE_1__* driver; } ;
struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {int (* suspend ) (int *) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ast_vhub_dev *VAR_0)
{
 if (VAR_0->driver && VAR_0->driver->suspend) {
  FUNC_1(&VAR_0->vhub->lock);
  VAR_0->driver->suspend(&VAR_0->gadget);
  FUNC_0(&VAR_0->vhub->lock);
 }
}
