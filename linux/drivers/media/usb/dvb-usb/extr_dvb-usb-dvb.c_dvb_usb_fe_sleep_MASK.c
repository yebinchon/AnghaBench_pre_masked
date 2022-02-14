
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dvb_usb_adapter {int dev; TYPE_2__* fe_adap; } ;
struct dvb_frontend {size_t id; TYPE_1__* dvb; } ;
struct TYPE_4__ {int (* fe_sleep ) (struct dvb_frontend*) ;} ;
struct TYPE_3__ {struct dvb_usb_adapter* priv; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct dvb_frontend*,int ) ;
 int FUNC_2 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_0)
{
 struct dvb_usb_adapter *VAR_1 = VAR_0->dvb->priv;

 if (VAR_1->fe_adap[VAR_0->id].fe_sleep)
  VAR_1->fe_adap[VAR_0->id].fe_sleep(VAR_0);

 FUNC_1(VAR_0, 0);

 return FUNC_0(VAR_1->dev, 0);
}
