
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_interface_descriptor {int bInterfaceProtocol; int bInterfaceSubClass; int bInterfaceClass; int bNumEndpoints; int bAlternateSetting; int bInterfaceNumber; } ;
struct usb_interface_cache {TYPE_1__* altsetting; } ;
struct TYPE_7__ {TYPE_2__* driver; } ;
struct usb_interface {TYPE_4__* cur_altsetting; TYPE_3__ dev; } ;
struct TYPE_8__ {struct usb_interface_descriptor const desc; } ;
struct TYPE_6__ {char* name; } ;
struct TYPE_5__ {struct usb_interface_descriptor desc; } ;


 int FUNC_0 (int ) ;
 char* VAR_0 ;
 int FUNC_1 (char*,char*,char,int ,int ,int ,int ,int ,int ,int ,char const*) ;

__attribute__((used)) static char *FUNC_2(char *VAR_1, char *VAR_2,
     const struct usb_interface_cache *VAR_3,
     const struct usb_interface *VAR_4,
     int VAR_5)
{
 const struct usb_interface_descriptor *VAR_6;
 const char *VAR_7 = "";
 int VAR_8 = 0;

 if (VAR_1 > VAR_2)
  return VAR_1;
 VAR_6 = &VAR_3->altsetting[VAR_5].desc;
 if (VAR_4) {
  VAR_7 = (VAR_4->dev.driver
    ? VAR_4->dev.driver->name
    : "(none)");
  VAR_8 = (VAR_6 == &VAR_4->cur_altsetting->desc);
 }
 VAR_1 += FUNC_1(VAR_1, VAR_0,
    VAR_8 ? '*' : ' ',
    VAR_6->bInterfaceNumber,
    VAR_6->bAlternateSetting,
    VAR_6->bNumEndpoints,
    VAR_6->bInterfaceClass,
    FUNC_0(VAR_6->bInterfaceClass),
    VAR_6->bInterfaceSubClass,
    VAR_6->bInterfaceProtocol,
    VAR_7);
 return VAR_1;
}
