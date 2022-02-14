
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_device {int udev; } ;


 int FUNC_0 (int const**) ;
 int VAR_0 ;
 int FUNC_1 (struct dvb_usb_device*,int,int*,int,int *,int ) ;
 int FUNC_2 (struct dvb_usb_device*,int,int*,int) ;
 int FUNC_3 (struct dvb_usb_device*,int,int*,int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct dvb_usb_device *VAR_1)
{
 int VAR_2, VAR_3;
 u8 VAR_4[2], VAR_5[2];

 static const u8 VAR_6[][2] = {
  {0x33, 0x08}, {0x37, 0x40}, {0x3a, 0x1f}, {0x3b, 0xff},
  {0x3c, 0x1f}, {0x3d, 0xff}, {0x38, 0x00}, {0x35, 0x00},
  {0x39, 0x00}, {0x36, 0x00},
 };

 VAR_3 = FUNC_4(VAR_1->udev, 0, 0);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_4[0] = 0x11;
 VAR_4[1] = 0x02;
 VAR_3 = FUNC_1(VAR_1, 0x00, VAR_4, 2, ((void*)0), 0);
 if (VAR_3 < 0)
  return VAR_3;
 FUNC_5(2000, 3000);

 VAR_4[0] = 0x11;
 VAR_4[1] = 0x00;
 VAR_3 = FUNC_1(VAR_1, 0x00, VAR_4, 2, ((void*)0), 0);
 if (VAR_3 < 0)
  return VAR_3;






 FUNC_5(1000, 2000);
 VAR_4[0] = 0x03;
 VAR_4[1] = 0x80;
 VAR_3 = FUNC_3(VAR_1, 0x09, VAR_4, 2);
 if (VAR_3 < 0)
  return VAR_3;

 FUNC_5(2000, 3000);
 VAR_3 = FUNC_2(VAR_1, 0x09, VAR_5, 2);
 if (VAR_3 < 0)
  return VAR_3;
 if (VAR_5[0] != 0xff || VAR_5[1] != 0xff)
  return -VAR_0;


 FUNC_5(1000, 2000);
 VAR_3 = FUNC_3(VAR_1, 0x48, VAR_4, 2);
 if (VAR_3 < 0)
  return VAR_3;

 FUNC_5(2000, 3000);
 VAR_3 = FUNC_2(VAR_1, 0x48, VAR_5, 2);
 if (VAR_3 < 0)
  return VAR_3;
 if (VAR_5[0] != 0xff || VAR_5[1] != 0xff)
  return -VAR_0;

 VAR_4[0] = 0x30;
 VAR_4[1] = 0x04;
 VAR_3 = FUNC_1(VAR_1, 0x00, VAR_4, 2, ((void*)0), 0);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_4[0] = 0x00;
 VAR_4[1] = 0x01;
 VAR_3 = FUNC_1(VAR_1, 0x00, VAR_4, 2, ((void*)0), 0);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_4[0] = 0x06;
 VAR_4[1] = 0x0f;
 VAR_3 = FUNC_1(VAR_1, 0x00, VAR_4, 2, ((void*)0), 0);
 if (VAR_3 < 0)
  return VAR_3;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_6); VAR_2++) {
  VAR_3 = FUNC_1(VAR_1, 0x00, (u8 *)VAR_6[VAR_2], 2,
          ((void*)0), 0);
  if (VAR_3 < 0)
   return VAR_3;
 }
 return 0;
}
