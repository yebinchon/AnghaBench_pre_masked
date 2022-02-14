
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_device {int udev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,int,int (*) (char*,int)) ;
 scalar_t__ FUNC_2 (int ,int,int,int,int *,int,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int *,int) ;

__attribute__((used)) static int FUNC_5(struct dvb_usb_device *VAR_1, u8 VAR_2[6])
{
 int VAR_3;
 u8 VAR_4[] = {0, 0};
 u8 VAR_5[256], VAR_6[16];

 for (VAR_3 = 0; VAR_3 < 256; VAR_3++) {
  if (FUNC_2(VAR_1->udev, 0xb6, 0xa0 , VAR_3, VAR_4, 2, VAR_0) < 0) {
   FUNC_3("read eeprom failed.");
   return -1;
  } else {
   VAR_6[VAR_3%16] = VAR_4[0];
   VAR_5[VAR_3] = VAR_4[0];
  }
  if ((VAR_3 % 16) == 15) {
   FUNC_0("%02x: ", VAR_3 - 15);
   FUNC_1(VAR_6, 16, FUNC_0);
  }
 }

 FUNC_4(VAR_2, VAR_5 + 8, 6);
 return 0;
}
