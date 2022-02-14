
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_hcd {scalar_t__ tpl_support; } ;
struct TYPE_3__ {int iSerialNumber; int iManufacturer; int iProduct; } ;
struct usb_device {int dev; TYPE_2__* bus; TYPE_1__ descriptor; void* serial; void* manufacturer; void* product; int * config; } ;
struct TYPE_4__ {scalar_t__ is_b_host; scalar_t__ b_hnp_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 struct usb_hcd* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (struct usb_device*) ;
 void* FUNC_5 (struct usb_device*,int ) ;
 int FUNC_6 (struct usb_device*) ;
 int FUNC_7 (struct usb_device*) ;
 int FUNC_8 (struct usb_device*) ;
 int FUNC_9 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_10(struct usb_device *VAR_5)
{
 int VAR_6;
 struct usb_hcd *VAR_7 = FUNC_1(VAR_5->bus);

 if (VAR_5->config == ((void*)0)) {
  VAR_6 = FUNC_8(VAR_5);
  if (VAR_6 < 0) {
   if (VAR_6 != -VAR_2)
    FUNC_3(&VAR_5->dev, "can't read configurations, error %d\n",
      VAR_6);
   return VAR_6;
  }
 }


 VAR_5->product = FUNC_5(VAR_5, VAR_5->descriptor.iProduct);
 VAR_5->manufacturer = FUNC_5(VAR_5,
           VAR_5->descriptor.iManufacturer);
 VAR_5->serial = FUNC_5(VAR_5, VAR_5->descriptor.iSerialNumber);

 VAR_6 = FUNC_7(VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 if (FUNC_0(VAR_1) && VAR_7->tpl_support &&
  !FUNC_4(VAR_5)) {



  if (FUNC_0(VAR_0) && (VAR_5->bus->b_hnp_enable
   || VAR_5->bus->is_b_host)) {
   VAR_6 = FUNC_9(VAR_5, VAR_4);
   if (VAR_6 < 0)
    FUNC_2(&VAR_5->dev, "HNP fail, %d\n", VAR_6);
  }
  return -VAR_3;
 }

 FUNC_6(VAR_5);

 return 0;
}
