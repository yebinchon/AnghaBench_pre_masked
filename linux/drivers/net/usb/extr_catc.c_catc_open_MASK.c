
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct catc {int timer; int is_f5u011; TYPE_1__* usbdev; TYPE_2__* irq_urb; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,scalar_t__) ;
 struct catc* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3)
{
 struct catc *VAR_4 = FUNC_2(VAR_3);
 int VAR_5;

 VAR_4->irq_urb->dev = VAR_4->usbdev;
 if ((VAR_5 = FUNC_4(VAR_4->irq_urb, VAR_0)) < 0) {
  FUNC_0(&VAR_4->usbdev->dev, "submit(irq_urb) status %d\n",
   VAR_5);
  return -1;
 }

 FUNC_3(VAR_3);

 if (!VAR_4->is_f5u011)
  FUNC_1(&VAR_4->timer, VAR_2 + VAR_1);

 return 0;
}
