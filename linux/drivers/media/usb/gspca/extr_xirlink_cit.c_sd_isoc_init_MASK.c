
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct usb_host_interface {TYPE_2__* endpoint; } ;
struct TYPE_9__ {int width; } ;
struct gspca_dev {TYPE_5__* dev; TYPE_3__ pixfmt; } ;
struct TYPE_12__ {TYPE_4__** intf_cache; } ;
struct TYPE_11__ {TYPE_6__* actconfig; } ;
struct TYPE_10__ {struct usb_host_interface* altsetting; } ;
struct TYPE_7__ {int wMaxPacketSize; } ;
struct TYPE_8__ {TYPE_1__ desc; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_0)
{
 struct usb_host_interface *VAR_1;
 int VAR_2;

 switch (VAR_0->pixfmt.width) {
 case 160:
  VAR_2 = 450;
  break;
 case 176:
  VAR_2 = 600;
  break;
 default:
  VAR_2 = 1022;
  break;
 }


 VAR_1 = &VAR_0->dev->actconfig->intf_cache[0]->altsetting[1];
 VAR_1->endpoint[0].desc.wMaxPacketSize = FUNC_0(VAR_2);

 return 0;
}
