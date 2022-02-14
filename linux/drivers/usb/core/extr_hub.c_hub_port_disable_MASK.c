
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_port {int dev; scalar_t__ child; int portnum; } ;
struct usb_hub {struct usb_device* hdev; int error; struct usb_port** ports; } ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (struct usb_device*) ;
 int FUNC_2 (struct usb_hub*,int ,int ) ;
 int FUNC_3 (struct usb_hub*,struct usb_port*) ;
 int FUNC_4 (struct usb_device*,int,int ) ;
 int FUNC_5 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_6(struct usb_hub *VAR_4, int VAR_5, int VAR_6)
{
 struct usb_port *VAR_7 = VAR_4->ports[VAR_5 - 1];
 struct usb_device *VAR_8 = VAR_4->hdev;
 int VAR_9 = 0;

 if (!VAR_4->error) {
  if (FUNC_1(VAR_4->hdev)) {
   FUNC_3(VAR_4, VAR_7);
   VAR_9 = FUNC_2(VAR_4, VAR_7->portnum,
            VAR_2);
  } else {
   VAR_9 = FUNC_4(VAR_8, VAR_5,
     VAR_1);
  }
 }
 if (VAR_7->child && VAR_6)
  FUNC_5(VAR_7->child, VAR_3);
 if (VAR_9 && VAR_9 != -VAR_0)
  FUNC_0(&VAR_7->dev, "cannot disable (err = %d)\n", VAR_9);
 return VAR_9;
}
