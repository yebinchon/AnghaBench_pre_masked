
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial {int dev; } ;
typedef int speed_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int,int,int ,int *,int ,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static speed_t FUNC_2(struct usb_serial *VAR_3, speed_t VAR_4)
{
 int VAR_5;
 int VAR_6;

 switch (VAR_4) {
 case 110:
  VAR_6 = 0;
  break;
 case 300:
  VAR_6 = 1;
  break;
 case 1200:
  VAR_6 = 2;
  break;
 case 2400:
  VAR_6 = 3;
  break;
 case 4800:
  VAR_6 = 4;
  break;
 case 9600:
  VAR_6 = 5;
  break;
 case 19200:
  VAR_6 = 6;
  break;
 case 38400:
  VAR_6 = 7;
  break;
 case 57600:
  VAR_6 = 8;
  break;
 case 115200:
  VAR_6 = 9;
  break;
 default:
  VAR_6 = 5;
  VAR_4 = 9600;
 }



 VAR_5 = FUNC_0(VAR_3->dev, FUNC_1(VAR_3->dev, 0),
        0,
        VAR_2
        | VAR_1
        | VAR_0,
        VAR_6,
        0,
        ((void*)0),
        0,
        2000);
 if (VAR_5 < 0)
  return 0;
 return VAR_4;
}
