
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dvb_frontend {int dummy; } ;
typedef enum fe_sec_voltage { ____Placeholder_fe_sec_voltage } fe_sec_voltage ;
struct TYPE_2__ {scalar_t__ (* set_gpio ) (struct dvb_frontend*,int,int ,int,int ) ;} ;


 int VAR_0 ;



 scalar_t__ FUNC_0 (struct dvb_frontend*,int,int ,int,int ) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_2,
          enum fe_sec_voltage VAR_3)
{
 int VAR_4;
 u8 VAR_5[3] = { 0 };

 VAR_5[2] = 1;

 switch (VAR_3) {
 case 130:
  VAR_5[0] = 1;
  break;
 case 129:
  VAR_5[0] = 1;
  VAR_5[1] = 1;
  break;
 default:
 case 128:
  break;
 }

 for (VAR_4 = 0; VAR_4 < 3; VAR_4++)
  if (VAR_1.set_gpio(VAR_2, VAR_4+2, 0,
          VAR_5[VAR_4], 0) != 0)
   return -VAR_0;
 return 0;
}
