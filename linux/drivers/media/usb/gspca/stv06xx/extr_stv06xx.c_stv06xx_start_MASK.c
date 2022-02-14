
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct usb_host_interface {TYPE_3__* endpoint; } ;
struct TYPE_5__ {int alt; int iface; int dev; } ;
struct sd {TYPE_4__* sensor; TYPE_1__ gspca_dev; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_8__ {int (* start ) (struct sd*) ;} ;
struct TYPE_6__ {int wMaxPacketSize; } ;
struct TYPE_7__ {TYPE_2__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gspca_dev*,int ,char*) ;
 int FUNC_1 (struct gspca_dev*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sd*) ;
 int FUNC_4 (struct sd*,int ,int) ;
 struct usb_host_interface* FUNC_5 (struct usb_interface*,int ) ;
 struct usb_interface* FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct gspca_dev *VAR_4)
{
 struct sd *VAR_5 = (struct sd *) VAR_4;
 struct usb_host_interface *VAR_6;
 struct usb_interface *VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = FUNC_6(VAR_5->gspca_dev.dev, VAR_5->gspca_dev.iface);
 VAR_6 = FUNC_5(VAR_7, VAR_5->gspca_dev.alt);
 if (!VAR_6) {
  FUNC_1(VAR_4, "Couldn't get altsetting\n");
  return -VAR_1;
 }

 VAR_9 = FUNC_2(VAR_6->endpoint[0].desc.wMaxPacketSize);
 VAR_8 = FUNC_4(VAR_5, VAR_3, VAR_9);
 if (VAR_8 < 0)
  return VAR_8;


 VAR_8 = VAR_5->sensor->start(VAR_5);
 if (VAR_8 < 0)
  goto out;


 VAR_8 = FUNC_4(VAR_5, VAR_2, 1);

out:
 if (VAR_8 < 0)
  FUNC_0(VAR_4, VAR_0, "Starting stream failed\n");
 else
  FUNC_0(VAR_4, VAR_0, "Started streaming\n");

 return (VAR_8 < 0) ? VAR_8 : 0;
}
