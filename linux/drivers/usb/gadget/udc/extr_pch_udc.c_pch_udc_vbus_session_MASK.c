
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pch_udc_dev {int vbus_session; int lock; int gadget; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* disconnect ) (int *) ;} ;


 int FUNC_0 (struct pch_udc_dev*) ;
 int FUNC_1 (struct pch_udc_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static inline void FUNC_5(struct pch_udc_dev *VAR_0,
       int VAR_1)
{
 if (VAR_1) {
  FUNC_0(VAR_0);
  VAR_0->vbus_session = 1;
 } else {
  if (VAR_0->driver && VAR_0->driver->disconnect) {
   FUNC_2(&VAR_0->lock);
   VAR_0->driver->disconnect(&VAR_0->gadget);
   FUNC_3(&VAR_0->lock);
  }
  FUNC_1(VAR_0);
  VAR_0->vbus_session = 0;
 }
}
