
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_string {scalar_t__ s; int id; } ;
struct usb_gadget_strings {struct usb_string* strings; } ;
struct usb_device_descriptor {int iProduct; int iManufacturer; int iSerialNumber; void* bcdDevice; void* idProduct; void* idVendor; } ;
struct usb_composite_overwrite {scalar_t__ product; scalar_t__ manufacturer; scalar_t__ serial_number; scalar_t__ bcdDevice; scalar_t__ idProduct; scalar_t__ idVendor; } ;
struct usb_composite_dev {scalar_t__ def_manufacturer; int gadget; TYPE_1__* driver; struct usb_device_descriptor desc; } ;
struct TYPE_2__ {struct usb_gadget_strings** strings; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(struct usb_composite_dev *VAR_3,
  struct usb_composite_overwrite *VAR_4)
{
 struct usb_device_descriptor *VAR_5 = &VAR_3->desc;
 struct usb_gadget_strings *VAR_6 = VAR_3->driver->strings[0];
 struct usb_string *VAR_7 = VAR_6->strings;

 if (VAR_4->idVendor)
  VAR_5->idVendor = FUNC_1(VAR_4->idVendor);

 if (VAR_4->idProduct)
  VAR_5->idProduct = FUNC_1(VAR_4->idProduct);

 if (VAR_4->bcdDevice)
  VAR_5->bcdDevice = FUNC_1(VAR_4->bcdDevice);

 if (VAR_4->serial_number) {
  VAR_5->iSerialNumber = VAR_7[VAR_2].id;
  VAR_7[VAR_2].s = VAR_4->serial_number;
 }
 if (VAR_4->manufacturer) {
  VAR_5->iManufacturer = VAR_7[VAR_0].id;
  VAR_7[VAR_0].s = VAR_4->manufacturer;

 } else if (!FUNC_2(VAR_7[VAR_0].s)) {
  VAR_5->iManufacturer = VAR_7[VAR_0].id;
  VAR_3->def_manufacturer = FUNC_0(VAR_3->gadget);
  VAR_7[VAR_0].s = VAR_3->def_manufacturer;
 }

 if (VAR_4->product) {
  VAR_5->iProduct = VAR_7[VAR_1].id;
  VAR_7[VAR_1].s = VAR_4->product;
 }
}
