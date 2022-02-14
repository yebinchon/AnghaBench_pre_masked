
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lme2510_state {int tuner_config; } ;
struct dvb_usb_device {int i2c_adap; } ;
struct dvb_usb_adapter {int * fe; } ;


 int VAR_0 ;
 int VAR_1 ;




 struct dvb_usb_device* FUNC_0 (struct dvb_usb_adapter*) ;
 struct lme2510_state* FUNC_1 (struct dvb_usb_adapter*) ;
 int FUNC_2 (int ,int ,int,int *,...) ;
 int VAR_2 ;
 int FUNC_3 (char*,...) ;
 int VAR_3 ;
 int FUNC_4 (struct dvb_usb_adapter*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_5(struct dvb_usb_adapter *VAR_8)
{
 struct dvb_usb_device *VAR_9 = FUNC_0(VAR_8);
 struct lme2510_state *VAR_10 = FUNC_1(VAR_8);
 static const char * const VAR_11[] = {"", "TDA8263", "IX2505V", "DVB_PLL_OPERA", "RS2000"};
 int VAR_12 = 0;

 switch (VAR_10->tuner_config) {
 case 131:
  if (FUNC_2(VAR_5, VAR_8->fe[0], 0x60,
   &VAR_9->i2c_adap, 1))
   VAR_12 = VAR_10->tuner_config;
  break;
 case 128:
  if (FUNC_2(VAR_3 , VAR_8->fe[0], VAR_4,
   &VAR_9->i2c_adap))
   VAR_12 = VAR_10->tuner_config;
  break;
 case 129:
  if (FUNC_2(VAR_2 , VAR_8->fe[0], 0x60,
   &VAR_9->i2c_adap, VAR_0))
   VAR_12 = VAR_10->tuner_config;
  break;
 case 130:
  if (FUNC_2(VAR_6, VAR_8->fe[0],
          VAR_7, &VAR_9->i2c_adap))
   VAR_12 = VAR_10->tuner_config;
  break;
 default:
  break;
 }

 if (VAR_12) {
  FUNC_3("TUN Found %s tuner", VAR_11[VAR_12]);
 } else {
  FUNC_3("TUN No tuner found");
  return -VAR_1;
 }


 VAR_12 = FUNC_4(VAR_8);
 if (VAR_12 < 0) {
  FUNC_3("INT Unable to start Interrupt Service");
  return -VAR_1;
 }

 return VAR_12;
}
