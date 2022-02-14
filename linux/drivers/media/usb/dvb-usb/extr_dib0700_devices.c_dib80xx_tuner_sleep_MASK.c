
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dvb_usb_adapter {struct dib0700_adapter_state* priv; } ;
struct dvb_frontend {TYPE_1__* dvb; } ;
struct TYPE_4__ {int (* set_gpio ) (struct dvb_frontend*,int ,int ,int) ;} ;
struct dib0700_adapter_state {TYPE_2__ dib8000_ops; } ;
struct TYPE_3__ {struct dvb_usb_adapter* priv; } ;


 int FUNC_0 (struct dvb_frontend*,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0, int VAR_1)
{
 struct dvb_usb_adapter *VAR_2 = VAR_0->dvb->priv;
 struct dib0700_adapter_state *VAR_3 = VAR_2->priv;

 return VAR_3->dib8000_ops.set_gpio(VAR_0, 0, 0, VAR_1);
}
