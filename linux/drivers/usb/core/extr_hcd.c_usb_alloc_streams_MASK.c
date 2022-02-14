
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct usb_host_endpoint {int streams; int desc; } ;
struct usb_hcd {TYPE_1__* driver; } ;
struct usb_device {scalar_t__ speed; scalar_t__ state; int bus; } ;
typedef int gfp_t ;
struct TYPE_2__ {int (* alloc_streams ) (struct usb_hcd*,struct usb_device*,struct usb_host_endpoint**,unsigned int,unsigned int,int ) ;int free_streams; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct usb_hcd* FUNC_0 (int ) ;
 struct usb_device* FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (struct usb_hcd*,struct usb_device*,struct usb_host_endpoint**,unsigned int,unsigned int,int ) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct usb_interface *VAR_4,
  struct usb_host_endpoint **VAR_5, unsigned int VAR_6,
  unsigned int VAR_7, gfp_t VAR_8)
{
 struct usb_hcd *VAR_9;
 struct usb_device *VAR_10;
 int VAR_11, VAR_12;

 VAR_10 = FUNC_1(VAR_4);
 VAR_9 = FUNC_0(VAR_10->bus);
 if (!VAR_9->driver->alloc_streams || !VAR_9->driver->free_streams)
  return -VAR_0;
 if (VAR_10->speed < VAR_2)
  return -VAR_0;
 if (VAR_10->state < VAR_3)
  return -VAR_1;

 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {

  if (!FUNC_3(&VAR_5[VAR_11]->desc))
   return -VAR_0;

  if (VAR_5[VAR_11]->streams)
   return -VAR_0;
 }

 VAR_12 = VAR_9->driver->alloc_streams(VAR_9, VAR_10, VAR_5, VAR_6,
   VAR_7, VAR_8);
 if (VAR_12 < 0)
  return VAR_12;

 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++)
  VAR_5[VAR_11]->streams = VAR_12;

 return VAR_12;
}
