
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct usb_host_endpoint {int urb_list; } ;
struct usb_device {int dev; struct usb_host_endpoint** ep_out; struct usb_host_endpoint** ep_in; } ;
struct TYPE_3__ {int comm; } ;


 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *,char*,int ,int ,char*,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct usb_device *VAR_2,
  unsigned int VAR_3, char *VAR_4)
{
 struct usb_host_endpoint **VAR_5;
 struct usb_host_endpoint *VAR_6;

 VAR_5 = (VAR_3 & VAR_0) ? VAR_2->ep_in : VAR_2->ep_out;
 VAR_6 = VAR_5[VAR_3 & 0x0f];
 if (VAR_6 && !FUNC_1(&VAR_6->urb_list))
  FUNC_0(&VAR_2->dev, "Process %d (%s) called USBDEVFS_%s for active endpoint 0x%02x\n",
    FUNC_2(VAR_1), VAR_1->comm,
    VAR_4, VAR_3);
}
