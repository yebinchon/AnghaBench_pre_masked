
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_frontend {int dummy; } ;
typedef enum fe_sec_voltage { ____Placeholder_fe_sec_voltage } fe_sec_voltage ;





 int FUNC_0 (struct dvb_frontend*,int*) ;

int FUNC_1(struct dvb_frontend *VAR_0, enum fe_sec_voltage VAR_1)
{
 u8 VAR_2[16];

 VAR_2[0] = 0x05;
 VAR_2[1] = 0x38;
 VAR_2[2] = 0x01;

 switch (VAR_1) {
 case 130:
  VAR_2[3] = 0x01;
  VAR_2[4] = 0x02;
  VAR_2[5] = 0x00;
  break;
 case 129:
  VAR_2[3] = 0x01;
  VAR_2[4] = 0x02;
  VAR_2[5] = 0x01;
  break;
 case 128:
  VAR_2[3] = 0x00;
  VAR_2[4] = 0x00;
  VAR_2[5] = 0x00;
  break;
 }

 return FUNC_0(VAR_0, VAR_2);
}
