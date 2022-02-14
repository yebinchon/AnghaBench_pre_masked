
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int member_0; int member_1; } ;
typedef TYPE_1__ u8 ;
struct friio_priv {int i2c_client_demod; } ;
struct dvb_usb_device {int dummy; } ;


 int FUNC_0 (TYPE_1__ const**) ;
 int VAR_0 ;
 struct friio_priv* FUNC_1 (struct dvb_usb_device*) ;
 int FUNC_2 (struct dvb_usb_device*,int ,int) ;
 int FUNC_3 (int ,TYPE_1__ const*,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct dvb_usb_device *VAR_1)
{
 int VAR_2;
 int VAR_3;
 struct friio_priv *VAR_4;

 static const u8 VAR_5[][2] = {
  {0x01, 0x40}, {0x04, 0x38}, {0x05, 0x40}, {0x07, 0x40},
  {0x0f, 0x4f}, {0x11, 0x21}, {0x12, 0x0b}, {0x13, 0x2f},
  {0x14, 0x31}, {0x16, 0x02}, {0x21, 0xc4}, {0x22, 0x20},
  {0x2c, 0x79}, {0x2d, 0x34}, {0x2f, 0x00}, {0x30, 0x28},
  {0x31, 0x31}, {0x32, 0xdf}, {0x38, 0x01}, {0x39, 0x78},
  {0x3b, 0x33}, {0x3c, 0x33}, {0x48, 0x90}, {0x51, 0x68},
  {0x5e, 0x38}, {0x71, 0x00}, {0x72, 0x08}, {0x77, 0x00},
  {0xc0, 0x21}, {0xc1, 0x10}, {0xe4, 0x1a}, {0xea, 0x1f},
  {0x77, 0x00}, {0x71, 0x00}, {0x71, 0x00}, {0x76, 0x0c},
 };


 VAR_3 = FUNC_2(VAR_1, VAR_0, 1);
 if (VAR_3 < 0)
  return VAR_3;
 FUNC_4(20);


 VAR_4 = FUNC_1(VAR_1);
 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_5); VAR_2++) {
  int VAR_6;

  VAR_6 = FUNC_3(VAR_4->i2c_client_demod, VAR_5[VAR_2], 2);
  if (VAR_6 < 0)
   return VAR_6;
 }
 FUNC_4(100);
 return 0;
}
