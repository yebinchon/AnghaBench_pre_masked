
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device {scalar_t__ speed; TYPE_1__* bus; } ;
struct mt76_dev {int dev; } ;
struct TYPE_2__ {scalar_t__ sg_tablesize; scalar_t__ no_sg_constraint; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct usb_device* FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct mt76_dev *VAR_2)
{
 struct usb_device *VAR_3 = FUNC_0(VAR_2->dev);

 return (!VAR_1 && VAR_3->bus->sg_tablesize > 0 &&
  (VAR_3->bus->no_sg_constraint ||
   VAR_3->speed == VAR_0));
}
