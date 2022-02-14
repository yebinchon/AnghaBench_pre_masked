
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtl28xxu_req {int value; int size; int * data; int index; } ;
struct dvb_usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dvb_usb_device*,struct rtl28xxu_req*) ;

__attribute__((used)) static int FUNC_1(struct dvb_usb_device *VAR_3, u16 VAR_4, u8 *VAR_5, int VAR_6)
{
 struct rtl28xxu_req VAR_7;

 if (VAR_4 < 0x3000)
  VAR_7.index = VAR_2;
 else if (VAR_4 < 0x4000)
  VAR_7.index = VAR_1;
 else
  VAR_7.index = VAR_0;

 VAR_7.value = VAR_4;
 VAR_7.size = VAR_6;
 VAR_7.data = VAR_5;

 return FUNC_0(VAR_3, &VAR_7);
}
