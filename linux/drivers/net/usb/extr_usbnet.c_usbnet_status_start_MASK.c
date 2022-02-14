
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbnet {int interrupt_count; int interrupt_mutex; TYPE_1__* udev; int * interrupt; } ;
typedef int gfp_t ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

int FUNC_5(struct usbnet *VAR_0, gfp_t VAR_1)
{
 int VAR_2 = 0;

 FUNC_0(VAR_0->interrupt == ((void*)0));
 if (VAR_0->interrupt) {
  FUNC_2(&VAR_0->interrupt_mutex);

  if (++VAR_0->interrupt_count == 1)
   VAR_2 = FUNC_4(VAR_0->interrupt, VAR_1);

  FUNC_1(&VAR_0->udev->dev, "incremented interrupt URB count to %d\n",
   VAR_0->interrupt_count);
  FUNC_3(&VAR_0->interrupt_mutex);
 }
 return VAR_2;
}
