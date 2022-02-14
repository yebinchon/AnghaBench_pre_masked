
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct dvb_usb_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dvb_usb_device*,int,int*) ;
 int FUNC_1 (struct dvb_usb_device*,scalar_t__,int*,int) ;
 int FUNC_2 (struct dvb_usb_device*,int ,int) ;
 int FUNC_3 (struct dvb_usb_device*,int,int*,int) ;
 int FUNC_4 (int) ;
 int VAR_2 ;

int FUNC_5(struct dvb_usb_device *VAR_3, u16 VAR_4, u8 VAR_5,
    u8 * VAR_6, int VAR_7)
{



 int VAR_8, VAR_9;
 u8 VAR_10, VAR_11[2];

 VAR_11[0] = VAR_5;
 VAR_11[1] = VAR_6[0];

 VAR_6[0] = VAR_5 + 0x01;

 if (VAR_4 == VAR_0) {

  VAR_8 = FUNC_3(VAR_3, 0x00c0, VAR_11, 2);
  if (VAR_8)
   return VAR_8;
 }


 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_6, 1);
 if (VAR_8)
  return VAR_8;


 for (VAR_9 = 0; VAR_9 < 200; VAR_9++) {
  VAR_8 = FUNC_0(VAR_3, 0xa408, &VAR_10);
  if (VAR_8)
   return VAR_8;
  if (VAR_10 & 0x01)
   break;
  FUNC_4(50);
 }
 if (VAR_9 == 200)
  return -VAR_1;


 VAR_8 = FUNC_2(VAR_3, VAR_2, 1);
 if (VAR_8)
  return VAR_8;


 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
  VAR_8 = FUNC_0(VAR_3, 0xa400 + VAR_9, &VAR_10);
  if (VAR_8)
   return VAR_8;
  VAR_6[VAR_9] = VAR_10;
 }
 return 0;
}
