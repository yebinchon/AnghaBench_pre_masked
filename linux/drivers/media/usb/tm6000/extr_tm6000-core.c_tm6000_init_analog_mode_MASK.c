
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct v4l2_frequency {int frequency; } ;
struct TYPE_2__ {int dvb_led; } ;
struct tm6000_core {scalar_t__ dev_type; TYPE_1__ gpio; int v4l2_dev; int freq; scalar_t__ scaler; int radio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int) ;
 int VAR_14 ;
 int FUNC_1 (struct tm6000_core*,int) ;
 int FUNC_2 (struct tm6000_core*) ;
 int FUNC_3 (struct tm6000_core*,int ,int,...) ;
 int FUNC_4 (struct tm6000_core*,int ,int,int) ;
 int FUNC_5 (struct tm6000_core*) ;
 int FUNC_6 (struct tm6000_core*) ;
 int VAR_15 ;
 int FUNC_7 (int *,int ,int ,int ,struct v4l2_frequency*) ;

int FUNC_8(struct tm6000_core *VAR_16)
{
 struct v4l2_frequency VAR_17;

 if (VAR_16->dev_type == VAR_3) {
  u8 VAR_18 = VAR_8;

  if (!VAR_16->radio)
   VAR_18 |= VAR_9;


  FUNC_4(VAR_16, VAR_7,
       VAR_18, 0x60);

  FUNC_4(VAR_16, VAR_5,
       0x00, 0x40);
 } else {

  FUNC_3(VAR_16, VAR_4, 0x01);

  if (VAR_16->scaler)

   FUNC_3(VAR_16, VAR_5, 0x20);
  else
   FUNC_3(VAR_16, VAR_5, 0x80);

  FUNC_3(VAR_16, VAR_6, 0x88);
  FUNC_3(VAR_16, VAR_1, 0x23);
  FUNC_3(VAR_16, VAR_10, 0xc0);
  FUNC_3(VAR_16, VAR_11, 0xd8);
  FUNC_3(VAR_16, VAR_12, 0x06);
  FUNC_3(VAR_16, VAR_2, 0x1f);


  FUNC_3(VAR_16, VAR_13, 0x08);
  FUNC_3(VAR_16, VAR_13, 0x00);

  FUNC_2(VAR_16);


  FUNC_3(VAR_16, VAR_4, 0x00);
 }
 FUNC_0(20);
 VAR_17.frequency = VAR_16->freq;
 FUNC_7(&VAR_16->v4l2_dev, 0, VAR_15, VAR_14, &VAR_17);

 FUNC_0(100);
 FUNC_5(VAR_16);
 FUNC_6(VAR_16);
 FUNC_1(VAR_16, 48000);


 if (VAR_16->gpio.dvb_led) {
  FUNC_3(VAR_16, VAR_0,
   VAR_16->gpio.dvb_led, 0x01);
 }

 return 0;
}
