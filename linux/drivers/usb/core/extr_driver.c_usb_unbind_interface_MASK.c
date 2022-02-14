
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


struct TYPE_9__ {int is_prepared; } ;
struct TYPE_10__ {TYPE_3__ power; } ;
struct usb_interface {int needs_altsetting0; scalar_t__ needs_remote_wakeup; int condition; TYPE_6__* altsetting; TYPE_4__ dev; TYPE_2__* cur_altsetting; } ;
struct usb_host_endpoint {scalar_t__ streams; } ;
struct usb_driver {scalar_t__ supports_autosuspend; int (* disconnect ) (struct usb_interface*) ;int soft_unbind; scalar_t__ disable_hub_initiated_lpm; } ;
struct usb_device {scalar_t__ state; } ;
struct device {int driver; } ;
struct TYPE_11__ {int bInterfaceNumber; } ;
struct TYPE_12__ {TYPE_5__ desc; } ;
struct TYPE_7__ {int bNumEndpoints; scalar_t__ bAlternateSetting; } ;
struct TYPE_8__ {TYPE_1__ desc; struct usb_host_endpoint* endpoint; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct usb_device* FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (struct usb_host_endpoint**) ;
 struct usb_host_endpoint** FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct usb_interface*) ;
 struct usb_driver* FUNC_6 (int ) ;
 struct usb_interface* FUNC_7 (struct device*) ;
 int FUNC_8 (struct usb_device*) ;
 int FUNC_9 (struct usb_device*) ;
 int FUNC_10 (struct usb_device*,struct usb_interface*,int) ;
 int FUNC_11 (struct usb_device*,struct usb_interface*,int) ;
 int FUNC_12 (struct usb_interface*,struct usb_host_endpoint**,int,int ) ;
 int FUNC_13 (struct usb_device*,int ,int ) ;
 int FUNC_14 (struct usb_interface*,int *) ;
 int FUNC_15 (struct usb_device*) ;
 int FUNC_16 (struct usb_device*) ;

__attribute__((used)) static int FUNC_17(struct device *VAR_6)
{
 struct usb_driver *VAR_7 = FUNC_6(VAR_6->driver);
 struct usb_interface *VAR_8 = FUNC_7(VAR_6);
 struct usb_host_endpoint *VAR_9, **VAR_10 = ((void*)0);
 struct usb_device *VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;
 int VAR_16 = -VAR_0;

 VAR_8->condition = VAR_2;


 VAR_11 = FUNC_0(VAR_8);
 VAR_14 = FUNC_8(VAR_11);






 if (VAR_7->disable_hub_initiated_lpm)
  VAR_16 = FUNC_15(VAR_11);





 if (!VAR_7->soft_unbind || VAR_11->state == VAR_5)
  FUNC_10(VAR_11, VAR_8, 0);

 VAR_7->disconnect(VAR_8);


 for (VAR_12 = 0, VAR_13 = 0; VAR_12 < VAR_8->cur_altsetting->desc.bNumEndpoints; VAR_12++) {
  VAR_9 = &VAR_8->cur_altsetting->endpoint[VAR_12];
  if (VAR_9->streams == 0)
   continue;
  if (VAR_13 == 0) {
   VAR_10 = FUNC_2(VAR_4, sizeof(void *),
          VAR_1);
   if (!VAR_10)
    break;
  }
  VAR_10[VAR_13++] = VAR_9;
 }
 if (VAR_13) {
  FUNC_12(VAR_8, VAR_10, VAR_13, VAR_1);
  FUNC_1(VAR_10);
 }







 if (VAR_8->cur_altsetting->desc.bAlternateSetting == 0) {



  FUNC_11(VAR_11, VAR_8, 0);
 } else if (!VAR_14 && !VAR_8->dev.power.is_prepared) {
  VAR_15 = FUNC_13(VAR_11, VAR_8->altsetting[0].
    desc.bInterfaceNumber, 0);
  if (VAR_15 < 0)
   VAR_8->needs_altsetting0 = 1;
 } else {
  VAR_8->needs_altsetting0 = 1;
 }
 FUNC_14(VAR_8, ((void*)0));

 VAR_8->condition = VAR_3;
 VAR_8->needs_remote_wakeup = 0;


 if (!VAR_16)
  FUNC_16(VAR_11);


 if (VAR_7->supports_autosuspend)
  FUNC_3(VAR_6);
 FUNC_4(VAR_6);

 if (!VAR_14)
  FUNC_9(VAR_11);

 return 0;
}
