
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_device {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int*) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int,int,int,int,int*,int,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct dvb_usb_device *VAR_3)
{
 int VAR_4;
 u8 *VAR_5;

 VAR_5 = FUNC_2(6, VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_4 = FUNC_3(VAR_3->udev, FUNC_4(VAR_3->udev, 0),
         0x06, 0x80, 0x0302, 0x00,
         VAR_5, 0x6, 200);
 if (VAR_4 != 6)
  VAR_4 = -VAR_0;
 else
  VAR_4 = VAR_5[2];

 FUNC_0("Firmware Status: %6ph", VAR_5);

 FUNC_1(VAR_5);
 return VAR_4;
}
