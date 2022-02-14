
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct dvb_frontend {TYPE_1__* dvb; } ;
struct cx88_core {int i2c_adap; } ;
struct cx8802_dev {struct cx88_core* core; } ;
typedef enum fe_sec_voltage { ____Placeholder_fe_sec_voltage } fe_sec_voltage ;
typedef int data ;
struct TYPE_2__ {struct cx8802_dev* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_6,
     enum fe_sec_voltage VAR_7)
{
 struct cx8802_dev *VAR_8 = VAR_6->dvb->priv;
 struct cx88_core *VAR_9 = VAR_8->core;

 u8 VAR_10;
 struct i2c_msg VAR_11 = {
  .addr = 8,
  .flags = 0,
  .buf = &VAR_10,
  .len = sizeof(VAR_10) };

 FUNC_1(VAR_5, 0x8000);

 switch (VAR_7) {
 case 128:
  break;
 case 130:
  VAR_10 = VAR_2 | VAR_3;
  FUNC_0(VAR_5, 0x80);
  break;
 case 129:
  VAR_10 = VAR_2 | VAR_3 | VAR_4;
  FUNC_0(VAR_5, 0x80);
  break;
 default:
  return -VAR_0;
 }

 return (FUNC_2(&VAR_8->core->i2c_adap, &VAR_11, 1) == 1) ? 0 : -VAR_1;
}
