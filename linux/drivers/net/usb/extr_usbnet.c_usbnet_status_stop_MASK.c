
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbnet {scalar_t__ interrupt_count; int interrupt_mutex; TYPE_1__* udev; scalar_t__ interrupt; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;

void FUNC_5(struct usbnet *VAR_0)
{
 if (VAR_0->interrupt) {
  FUNC_2(&VAR_0->interrupt_mutex);
  FUNC_0(VAR_0->interrupt_count == 0);

  if (VAR_0->interrupt_count && --VAR_0->interrupt_count == 0)
   FUNC_4(VAR_0->interrupt);

  FUNC_1(&VAR_0->udev->dev,
   "decremented interrupt URB count to %d\n",
   VAR_0->interrupt_count);
  FUNC_3(&VAR_0->interrupt_mutex);
 }
}
