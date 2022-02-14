
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct usb_device_descriptor {void* iProduct; void* iManufacturer; void* iSerialNumber; void* bcdDevice; void* idProduct; void* idVendor; } ;
typedef void* __le16 ;


 void* FUNC_0 (int ) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct usb_device_descriptor *VAR_0,
  const struct usb_device_descriptor *VAR_1)
{
 __le16 VAR_2;
 __le16 VAR_3;
 __le16 VAR_4;
 u8 VAR_5;
 u8 VAR_6;
 u8 VAR_7;





 VAR_2 = VAR_0->idVendor;
 VAR_3 = VAR_0->idProduct;
 VAR_4 = VAR_0->bcdDevice;
 VAR_5 = VAR_0->iSerialNumber;
 VAR_6 = VAR_0->iManufacturer;
 VAR_7 = VAR_0->iProduct;

 *VAR_0 = *VAR_1;
 if (VAR_2)
  VAR_0->idVendor = VAR_2;
 if (VAR_3)
  VAR_0->idProduct = VAR_3;
 if (VAR_4)
  VAR_0->bcdDevice = VAR_4;
 else
  VAR_0->bcdDevice = FUNC_0(FUNC_1());
 if (VAR_5)
  VAR_0->iSerialNumber = VAR_5;
 if (VAR_6)
  VAR_0->iManufacturer = VAR_6;
 if (VAR_7)
  VAR_0->iProduct = VAR_7;
}
