
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_usb_device {struct af9005_device_state* priv; } ;
struct af9005_device_state {int led_state; } ;


 int FUNC_0 (struct dvb_usb_device*,int ,int ,int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_1(struct dvb_usb_device *VAR_7, int VAR_8)
{
 struct af9005_device_state *VAR_9 = VAR_7->priv;
 int VAR_10, VAR_11;

 if (VAR_8 && VAR_0)
  VAR_10 = 1;
 else
  VAR_10 = 0;
 if (VAR_9->led_state != VAR_10) {
  VAR_11 =
      FUNC_0(VAR_7, VAR_6,
            VAR_4,
            VAR_3, VAR_10);
  if (VAR_11)
   return VAR_11;
  VAR_11 =
      FUNC_0(VAR_7, VAR_5,
            VAR_2,
            VAR_1, VAR_10);
  if (VAR_11)
   return VAR_11;
  VAR_9->led_state = VAR_10;
 }
 return 0;
}
