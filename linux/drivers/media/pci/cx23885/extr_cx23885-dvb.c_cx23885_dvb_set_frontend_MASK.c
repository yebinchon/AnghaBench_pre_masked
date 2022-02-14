
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dtv_frontend_properties {int modulation; } ;
struct dvb_frontend {TYPE_1__* dvb; struct dtv_frontend_properties dtv_property_cache; } ;
struct cx23885_tsport {int (* set_frontend ) (struct dvb_frontend*) ;struct cx23885_dev* dev; } ;
struct cx23885_dev {int board; } ;
struct TYPE_2__ {struct cx23885_tsport* priv; } ;






 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct cx23885_dev*,int ) ;
 int FUNC_1 (struct cx23885_dev*,int ) ;
 int FUNC_2 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_2)
{
 struct dtv_frontend_properties *VAR_3 = &VAR_2->dtv_property_cache;
 struct cx23885_tsport *VAR_4 = VAR_2->dvb->priv;
 struct cx23885_dev *VAR_5 = VAR_4->dev;

 switch (VAR_5->board) {
 case 134:
  switch (VAR_3->modulation) {
  case 128:
   FUNC_0(VAR_5, VAR_1);
   break;
  case 129:
  case 130:
  default:
   FUNC_1(VAR_5, VAR_1);
   break;
  }
  break;
 case 132:
 case 131:
 case 133:

  FUNC_1(VAR_5, VAR_0);
  break;
 }


 if (VAR_4->set_frontend)
  return VAR_4->set_frontend(VAR_2);

 return 0;
}
