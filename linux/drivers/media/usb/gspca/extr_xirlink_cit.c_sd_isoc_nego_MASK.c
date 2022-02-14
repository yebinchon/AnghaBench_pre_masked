
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


struct usb_host_interface {TYPE_5__* endpoint; } ;
struct TYPE_7__ {int width; } ;
struct gspca_dev {int iface; TYPE_6__* dev; TYPE_1__ pixfmt; } ;
struct TYPE_12__ {TYPE_3__* actconfig; } ;
struct TYPE_10__ {int wMaxPacketSize; } ;
struct TYPE_11__ {TYPE_4__ desc; } ;
struct TYPE_9__ {TYPE_2__** intf_cache; } ;
struct TYPE_8__ {struct usb_host_interface* altsetting; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (TYPE_6__*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 struct usb_host_interface *VAR_5;

 switch (VAR_1->pixfmt.width) {
 case 160:
  VAR_4 = 200;
  break;
 case 176:
  VAR_4 = 266;
  break;
 default:
  VAR_4 = 400;
  break;
 }

 VAR_5 = &VAR_1->dev->actconfig->intf_cache[0]->altsetting[1];
 VAR_3 = FUNC_1(VAR_5->endpoint[0].desc.wMaxPacketSize);
 if (VAR_3 <= VAR_4)
  return -VAR_0;

 VAR_3 -= 100;
 if (VAR_3 < VAR_4)
  VAR_3 = VAR_4;
 VAR_5->endpoint[0].desc.wMaxPacketSize = FUNC_0(VAR_3);

 VAR_2 = FUNC_3(VAR_1->dev, VAR_1->iface, 1);
 if (VAR_2 < 0)
  FUNC_2("set alt 1 err %d\n", VAR_2);

 return VAR_2;
}
