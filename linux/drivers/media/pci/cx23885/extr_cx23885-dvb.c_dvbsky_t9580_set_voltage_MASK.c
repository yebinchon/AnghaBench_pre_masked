
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {TYPE_1__* dvb; } ;
struct cx23885_tsport {int (* fe_set_voltage ) (struct dvb_frontend*,int) ;struct cx23885_dev* dev; } ;
struct cx23885_dev {int dummy; } ;
typedef enum fe_sec_voltage { ____Placeholder_fe_sec_voltage } fe_sec_voltage ;
struct TYPE_2__ {struct cx23885_tsport* priv; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct cx23885_dev*,int) ;
 int FUNC_1 (struct cx23885_dev*,int,int) ;
 int FUNC_2 (struct cx23885_dev*,int) ;
 int FUNC_3 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_2,
     enum fe_sec_voltage VAR_3)
{
 struct cx23885_tsport *VAR_4 = VAR_2->dvb->priv;
 struct cx23885_dev *VAR_5 = VAR_4->dev;

 FUNC_1(VAR_5, VAR_0 | VAR_1, 1);

 switch (VAR_3) {
 case 130:
  FUNC_2(VAR_5, VAR_1);
  FUNC_0(VAR_5, VAR_0);
  break;
 case 129:
  FUNC_2(VAR_5, VAR_1);
  FUNC_2(VAR_5, VAR_0);
  break;
 case 128:
  FUNC_0(VAR_5, VAR_1);
  FUNC_0(VAR_5, VAR_0);
  break;
 }


 VAR_4->fe_set_voltage(VAR_2, VAR_3);

 return 0;
}
