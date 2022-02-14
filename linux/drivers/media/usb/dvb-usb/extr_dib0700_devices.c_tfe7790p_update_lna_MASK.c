
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct dvb_usb_adapter {struct dib0700_adapter_state* priv; } ;
struct dvb_frontend {TYPE_1__* dvb; } ;
struct TYPE_4__ {int (* set_agc1_min ) (struct dvb_frontend*,int) ;int (* set_gpio ) (struct dvb_frontend*,int,int ,int) ;} ;
struct dib0700_adapter_state {TYPE_2__ dib7000p_ops; } ;
struct TYPE_3__ {struct dvb_usb_adapter* priv; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct dvb_frontend*,int,int ,int) ;
 int FUNC_2 (struct dvb_frontend*,int) ;
 int FUNC_3 (struct dvb_frontend*,int,int ,int) ;
 int FUNC_4 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_0, u16 VAR_1)
{
 struct dvb_usb_adapter *VAR_2 = VAR_0->dvb->priv;
 struct dib0700_adapter_state *VAR_3 = VAR_2->priv;

 FUNC_0("update LNA: agc global=%i", VAR_1);

 if (VAR_1 < 25000) {
  VAR_3->dib7000p_ops.set_gpio(VAR_0, 8, 0, 0);
  VAR_3->dib7000p_ops.set_agc1_min(VAR_0, 0);
 } else {
  VAR_3->dib7000p_ops.set_gpio(VAR_0, 8, 0, 1);
  VAR_3->dib7000p_ops.set_agc1_min(VAR_0, 32768);
 }

 return 0;
}
