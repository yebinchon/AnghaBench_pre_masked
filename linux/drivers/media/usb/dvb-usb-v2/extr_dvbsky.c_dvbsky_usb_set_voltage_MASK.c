
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvbsky_state {int (* fe_set_voltage ) (struct dvb_frontend*,int) ;} ;
struct dvb_usb_device {int dummy; } ;
struct dvb_frontend {int dummy; } ;
typedef enum fe_sec_voltage { ____Placeholder_fe_sec_voltage } fe_sec_voltage ;


 int VAR_0 ;
 struct dvbsky_state* FUNC_0 (struct dvb_usb_device*) ;
 int FUNC_1 (struct dvb_usb_device*,int,int) ;
 struct dvb_usb_device* FUNC_2 (struct dvb_frontend*) ;
 int FUNC_3 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_1,
 enum fe_sec_voltage VAR_2)
{
 struct dvb_usb_device *VAR_3 = FUNC_2(VAR_1);
 struct dvbsky_state *VAR_4 = FUNC_0(VAR_3);
 u8 VAR_5;

 if (VAR_2 == VAR_0)
  VAR_5 = 0;
 else
  VAR_5 = 1;
 FUNC_1(VAR_3, 0x80, VAR_5);

 return VAR_4->fe_set_voltage(VAR_1, VAR_2);
}
