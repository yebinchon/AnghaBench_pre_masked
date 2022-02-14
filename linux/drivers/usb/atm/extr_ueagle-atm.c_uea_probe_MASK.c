
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbatm_data {struct uea_softc* driver_data; } ;
struct usb_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_2__ {int bcdDevice; int idProduct; int idVendor; } ;
struct usb_device {TYPE_1__ descriptor; } ;
struct uea_softc {int kthread; } ;


 int VAR_0 ;
 size_t FUNC_0 (struct usb_device_id const*) ;
 scalar_t__ FUNC_1 (struct usb_device_id const*) ;
 int FUNC_2 (int ) ;
 int * VAR_1 ;
 struct usb_device* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct usb_device*) ;
 int FUNC_6 (struct usb_device*,char*,int ,int ,int ,int ) ;
 int FUNC_7 (struct usb_device*,size_t) ;
 int VAR_2 ;
 struct usbatm_data* FUNC_8 (struct usb_interface*) ;
 int FUNC_9 (struct usb_device*) ;
 int FUNC_10 (struct usb_interface*,struct usb_device_id const*,int *) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct usb_interface *VAR_3, const struct usb_device_id *VAR_4)
{
 struct usb_device *VAR_5 = FUNC_3(VAR_3);
 int VAR_6;

 FUNC_5(VAR_5);
 FUNC_6(VAR_5, "ADSL device founded vid (%#X) pid (%#X) Rev (%#X): %s\n",
  FUNC_4(VAR_5->descriptor.idVendor),
  FUNC_4(VAR_5->descriptor.idProduct),
  FUNC_4(VAR_5->descriptor.bcdDevice),
  VAR_1[FUNC_0(VAR_4)]);

 FUNC_9(VAR_5);

 if (FUNC_1(VAR_4))
  return FUNC_7(VAR_5, FUNC_0(VAR_4));

 VAR_6 = FUNC_10(VAR_3, VAR_4, &VAR_2);
 if (VAR_6 == 0) {
  struct usbatm_data *VAR_7 = FUNC_8(VAR_3);
  struct uea_softc *VAR_8 = VAR_7->driver_data;


  FUNC_2(VAR_0);


  FUNC_11(VAR_8->kthread);
 }

 return VAR_6;
}
