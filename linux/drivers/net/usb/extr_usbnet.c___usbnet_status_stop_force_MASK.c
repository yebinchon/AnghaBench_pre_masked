
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbnet {int interrupt_mutex; TYPE_1__* udev; scalar_t__ interrupt; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct usbnet *VAR_0)
{
 if (VAR_0->interrupt) {
  FUNC_1(&VAR_0->interrupt_mutex);
  FUNC_3(VAR_0->interrupt);
  FUNC_0(&VAR_0->udev->dev, "killed interrupt URB for suspend\n");
  FUNC_2(&VAR_0->interrupt_mutex);
 }
}
