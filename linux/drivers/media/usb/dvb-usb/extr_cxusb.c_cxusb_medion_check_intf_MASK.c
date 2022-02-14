
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {int num_altsetting; int usb_dev; TYPE_2__* altsetting; } ;
struct TYPE_3__ {int bAlternateSetting; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static bool FUNC_2(struct usb_interface *VAR_0)
{
 unsigned int VAR_1;

 if (VAR_0->num_altsetting < 2) {
  FUNC_1(VAR_0->usb_dev, "no alternate interface");

  return 0;
 }

 for (VAR_1 = 0; VAR_1 < VAR_0->num_altsetting; VAR_1++) {
  if (VAR_0->altsetting[VAR_1].desc.bAlternateSetting != 1)
   continue;

  if (FUNC_0(&VAR_0->altsetting[VAR_1]))
   return 1;

  break;
 }

 FUNC_1(VAR_0->usb_dev, "no iso interface");

 return 0;
}
