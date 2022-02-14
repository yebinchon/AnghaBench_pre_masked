
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct dvb_usb_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_usb_device*,int ,scalar_t__*,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (scalar_t__*,int,int (*) (char*)) ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_device *VAR_1, u8 VAR_2, u8 VAR_3,
       u8 * VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;
 u8 VAR_8[3];
 FUNC_1("i2c_write i2caddr %x, reg %x, len %d data ", VAR_2,
  VAR_3, VAR_5);
 FUNC_2(VAR_4, VAR_5, FUNC_1);

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_8[0] = VAR_2;
  VAR_8[1] = VAR_3 + (u8) VAR_7;
  VAR_8[2] = VAR_4[VAR_7];
  VAR_6 =
      FUNC_0(VAR_1,
       VAR_0,
       VAR_8, 3);
  if (VAR_6) {
   FUNC_1("i2c_write failed\n");
   return VAR_6;
  }
 }
 FUNC_1("i2c_write ok\n");
 return 0;
}
