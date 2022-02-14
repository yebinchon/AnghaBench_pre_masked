
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_device {int dummy; } ;


 int FUNC_0 (struct dvb_usb_device*,int,int*) ;

__attribute__((used)) static int FUNC_1 (struct dvb_usb_device *VAR_0, u8 VAR_1[6])
{
 int VAR_2;
 u8 VAR_3;

 VAR_1[0] = 0x00;
 VAR_1[1] = 0x0d;
 VAR_1[2] = 0xfe;


 for (VAR_2 = 136; VAR_2 < 139; VAR_2++) {
  FUNC_0(VAR_0,VAR_2, &VAR_3);

  VAR_1[5 - (VAR_2 - 136)] = VAR_3;
 }

 return 0;
}
