
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct usb_host_endpoint {scalar_t__ streams; } ;
struct usb_hcd {TYPE_1__* driver; } ;
struct usb_device {scalar_t__ speed; int bus; } ;
typedef int gfp_t ;
struct TYPE_2__ {int (* free_streams ) (struct usb_hcd*,struct usb_device*,struct usb_host_endpoint**,unsigned int,int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct usb_hcd* FUNC_0 (int ) ;
 struct usb_device* FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (struct usb_hcd*,struct usb_device*,struct usb_host_endpoint**,unsigned int,int ) ;

int FUNC_3(struct usb_interface *VAR_2,
  struct usb_host_endpoint **VAR_3, unsigned int VAR_4,
  gfp_t VAR_5)
{
 struct usb_hcd *VAR_6;
 struct usb_device *VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = FUNC_1(VAR_2);
 VAR_6 = FUNC_0(VAR_7->bus);
 if (VAR_7->speed < VAR_1)
  return -VAR_0;


 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
  if (!VAR_3[VAR_8] || !VAR_3[VAR_8]->streams)
   return -VAR_0;

 VAR_9 = VAR_6->driver->free_streams(VAR_6, VAR_7, VAR_3, VAR_4, VAR_5);
 if (VAR_9 < 0)
  return VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
  VAR_3[VAR_8]->streams = 0;

 return VAR_9;
}
