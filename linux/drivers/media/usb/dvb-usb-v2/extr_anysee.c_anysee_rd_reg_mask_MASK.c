
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dvb_usb_device {int dummy; } ;


 int FUNC_0 (struct dvb_usb_device*,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct dvb_usb_device *VAR_0, u16 VAR_1, u8 *VAR_2,
 u8 VAR_3)
{
 int VAR_4, VAR_5;
 u8 VAR_6;

 VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_6);
 if (VAR_4)
  return VAR_4;

 VAR_6 &= VAR_3;


 for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
  if ((VAR_3 >> VAR_5) & 0x01)
   break;
 }
 *VAR_2 = VAR_6 >> VAR_5;

 return 0;
}
