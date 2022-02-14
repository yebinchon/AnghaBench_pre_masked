
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device {int portnum; int devnum; scalar_t__ wusb; struct usb_bus* bus; } ;
struct TYPE_2__ {int devicemap; } ;
struct usb_bus {int devnum_next; int devnum_next_mutex; TYPE_1__ devmap; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static void FUNC_6(struct usb_device *VAR_0)
{
 int VAR_1;
 struct usb_bus *VAR_2 = VAR_0->bus;


 FUNC_2(&VAR_2->devnum_next_mutex);
 if (VAR_0->wusb) {
  VAR_1 = VAR_0->portnum + 1;
  FUNC_0(FUNC_5(VAR_1, VAR_2->devmap.devicemap));
 } else {


  VAR_1 = FUNC_1(VAR_2->devmap.devicemap, 128,
         VAR_2->devnum_next);
  if (VAR_1 >= 128)
   VAR_1 = FUNC_1(VAR_2->devmap.devicemap,
          128, 1);
  VAR_2->devnum_next = (VAR_1 >= 127 ? 1 : VAR_1 + 1);
 }
 if (VAR_1 < 128) {
  FUNC_4(VAR_1, VAR_2->devmap.devicemap);
  VAR_0->devnum = VAR_1;
 }
 FUNC_3(&VAR_2->devnum_next_mutex);
}
