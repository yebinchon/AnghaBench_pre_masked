
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int*,int,int (*) (char*,int,int)) ;
 int FUNC_2 (struct dvb_usb_device*,int ,int*,int,int*,int,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_device *VAR_1,u8 *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 u8 VAR_6,VAR_7[2];
 for (VAR_5=0; VAR_5 < VAR_3; VAR_5++) {
  VAR_6 = VAR_4 + VAR_5;
  FUNC_2(VAR_1,VAR_0,&VAR_6,1,VAR_7,2,5);
  VAR_2[VAR_5] = VAR_7[1];
 }
 FUNC_0("VP7045 EEPROM read (offs: %d, len: %d) : ",VAR_4, VAR_5);
 FUNC_1(VAR_2,VAR_5,FUNC_0);
 return 0;
}
