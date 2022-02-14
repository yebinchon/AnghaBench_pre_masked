
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_device {int dummy; } ;
struct dvobj_priv {int nr_endpoint; struct usb_device* pusbdev; } ;
 unsigned int FUNC_0 (struct usb_device*,int) ;
 unsigned int FUNC_1 (struct usb_device*,int) ;

__attribute__((used)) static unsigned int FUNC_2(struct dvobj_priv *VAR_0, u32 VAR_1)
{
 unsigned int VAR_2 = 0;
 struct usb_device *VAR_3 = VAR_0->pusbdev;

 if (VAR_0->nr_endpoint == 11) {
  switch (VAR_1) {
  case 135:
   VAR_2 = FUNC_1(VAR_3, 0x07);
   break;
  case 136:
   VAR_2 = FUNC_1(VAR_3, 0x06);
   break;
  case 129:
   VAR_2 = FUNC_1(VAR_3, 0x05);
   break;
  case 128:
   VAR_2 = FUNC_1(VAR_3, 0x04);
   break;
  case 137:
   VAR_2 = FUNC_1(VAR_3, 0x0a);
   break;
  case 134:
   VAR_2 = FUNC_1(VAR_3, 0x0b);
   break;
  case 131:
   VAR_2 = FUNC_1(VAR_3, 0x0c);
   break;
  case 130:
   VAR_2 = FUNC_0(VAR_3, 0x03);
   break;
  case 133:
   VAR_2 = FUNC_0(VAR_3, 0x09);
   break;
  case 132:
   VAR_2 = FUNC_1(VAR_3, 0x0d);
   break;
  }
 } else if (VAR_0->nr_endpoint == 6) {
  switch (VAR_1) {
  case 135:
   VAR_2 = FUNC_1(VAR_3, 0x07);
   break;
  case 136:
   VAR_2 = FUNC_1(VAR_3, 0x06);
   break;
  case 129:
   VAR_2 = FUNC_1(VAR_3, 0x05);
   break;
  case 128:
   VAR_2 = FUNC_1(VAR_3, 0x04);
   break;
  case 130:
  case 133:
   VAR_2 = FUNC_0(VAR_3, 0x03);
   break;
  case 132:
  case 137:
  case 134:
  case 131:
   VAR_2 = FUNC_1(VAR_3, 0x0d);
   break;
  }
 } else if (VAR_0->nr_endpoint == 4) {
  switch (VAR_1) {
  case 136:
   VAR_2 = FUNC_1(VAR_3, 0x06);
   break;
  case 128:
   VAR_2 = FUNC_1(VAR_3, 0x04);
   break;
  case 130:
  case 133:
   VAR_2 = FUNC_0(VAR_3, 0x03);
   break;
  case 132:
  case 137:
  case 134:
  case 131:
   VAR_2 = FUNC_1(VAR_3, 0x0d);
   break;
  }
 } else {
  VAR_2 = 0;
 }
 return VAR_2;
}
