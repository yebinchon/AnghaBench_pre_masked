
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {TYPE_1__* dvb; } ;
struct cx88_core {int (* prev_set_voltage ) (struct dvb_frontend*,int) ;} ;
struct cx8802_dev {struct cx88_core* core; } ;
typedef enum fe_sec_voltage { ____Placeholder_fe_sec_voltage } fe_sec_voltage ;
struct TYPE_2__ {struct cx8802_dev* priv; } ;


 int VAR_0 ;



 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_1,
         enum fe_sec_voltage VAR_2)
{
 struct cx8802_dev *VAR_3 = VAR_1->dvb->priv;
 struct cx88_core *VAR_4 = VAR_3->core;

 switch (VAR_2) {
 case 130:
  FUNC_1(1, "LNB SEC Voltage=13\n");
  FUNC_0(VAR_0, 0x00001220);
  break;
 case 129:
  FUNC_1(1, "LNB SEC Voltage=18\n");
  FUNC_0(VAR_0, 0x00001222);
  break;
 case 128:
  FUNC_1(1, "LNB Voltage OFF\n");
  FUNC_0(VAR_0, 0x00001230);
  break;
 }

 if (VAR_4->prev_set_voltage)
  return VAR_4->prev_set_voltage(VAR_1, VAR_2);
 return 0;
}
