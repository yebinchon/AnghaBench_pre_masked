
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lme2510_state {int i2c_talk_onoff; } ;
struct dvb_usb_device {struct lme2510_state* priv; } ;


 int FUNC_0 (struct dvb_usb_device*,int *,int,int *,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_usb_device *VAR_0,
  u8 *VAR_1, int VAR_2, u8 *VAR_3, int VAR_4)
{
 struct lme2510_state *VAR_5 = VAR_0->priv;

 VAR_5->i2c_talk_onoff = 1;

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
