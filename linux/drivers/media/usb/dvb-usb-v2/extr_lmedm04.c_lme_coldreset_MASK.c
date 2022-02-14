
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_device {int dummy; } ;
typedef int data ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct dvb_usb_device*,int*,int,int*,int) ;

__attribute__((used)) static void FUNC_2(struct dvb_usb_device *VAR_0)
{
 u8 VAR_1[1] = {0};
 VAR_1[0] = 0x0a;
 FUNC_0("FRM Firmware Cold Reset");

 FUNC_1(VAR_0, VAR_1, sizeof(VAR_1), VAR_1, sizeof(VAR_1));

 return;
}
