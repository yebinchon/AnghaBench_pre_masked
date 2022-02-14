
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdns3_device {int lock; int gadget; TYPE_1__* gadget_driver; } ;
struct TYPE_2__ {int (* disconnect ) (int *) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct cdns3_device *VAR_0)
{
 if (VAR_0->gadget_driver && VAR_0->gadget_driver->disconnect) {
  FUNC_1(&VAR_0->lock);
  VAR_0->gadget_driver->disconnect(&VAR_0->gadget);
  FUNC_0(&VAR_0->lock);
 }
}
