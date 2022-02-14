
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dvb_led; } ;
struct tm6000_core {scalar_t__ dev_type; TYPE_1__ gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct tm6000_core*,int ,int,...) ;
 int FUNC_2 (struct tm6000_core*,int ,int,int) ;

int FUNC_3(struct tm6000_core *VAR_20)
{
 if (VAR_20->dev_type == VAR_7) {

  FUNC_2(VAR_20, VAR_12,
    0x00, 0x60);

  FUNC_2(VAR_20, VAR_9,
    0x40, 0x40);

  FUNC_1(VAR_20, VAR_16, 0x28);
  FUNC_1(VAR_20, VAR_18, 0xfc);
  FUNC_1(VAR_20, VAR_19, 0xff);
 } else {
  FUNC_1(VAR_20, VAR_17, 0x08);
  FUNC_1(VAR_20, VAR_17, 0x00);
  FUNC_1(VAR_20, VAR_8, 0x01);
  FUNC_1(VAR_20, VAR_3, 0x08);
  FUNC_1(VAR_20, VAR_4, 0x0c);
  FUNC_1(VAR_20, VAR_5, 0xff);
  FUNC_1(VAR_20, VAR_6, 0xd8);
  FUNC_1(VAR_20, VAR_9, 0x40);
  FUNC_1(VAR_20, VAR_10, 0xd0);
  FUNC_1(VAR_20, VAR_11, 0x09);
  FUNC_1(VAR_20, VAR_2, 0x37);
  FUNC_1(VAR_20, VAR_13, 0xd8);
  FUNC_1(VAR_20, VAR_14, 0xc0);
  FUNC_1(VAR_20, VAR_15, 0x60);

  FUNC_1(VAR_20, VAR_4, 0x0c);
  FUNC_1(VAR_20, VAR_5, 0xff);
  FUNC_1(VAR_20, VAR_6, 0x08);
  FUNC_0(50);

  FUNC_1(VAR_20, VAR_1, 0x0020, 0x00);
  FUNC_0(50);
  FUNC_1(VAR_20, VAR_1, 0x0020, 0x01);
  FUNC_0(50);
  FUNC_1(VAR_20, VAR_1, 0x0020, 0x00);
  FUNC_0(100);
 }


 if (VAR_20->gpio.dvb_led) {
  FUNC_1(VAR_20, VAR_0,
   VAR_20->gpio.dvb_led, 0x00);
 }

 return 0;
}
