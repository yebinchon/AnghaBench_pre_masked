
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct dvb_usb_adapter {struct dib0700_adapter_state* priv; } ;
struct dtv_frontend_properties {int frequency; } ;
struct dvb_frontend {TYPE_2__* dvb; struct dtv_frontend_properties dtv_property_cache; } ;
struct TYPE_3__ {int (* set_wbd_ref ) (struct dvb_frontend*,int) ;} ;
struct dib0700_adapter_state {int (* set_param_save ) (struct dvb_frontend*) ;TYPE_1__ dib7000p_ops; } ;
struct TYPE_4__ {struct dvb_usb_adapter* priv; } ;


 int FUNC_0 (int) ;


 int FUNC_1 (struct dvb_frontend*) ;
 int FUNC_2 (struct dvb_frontend*,int) ;
 int FUNC_3 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_0)
{
 struct dtv_frontend_properties *VAR_1 = &VAR_0->dtv_property_cache;
 struct dvb_usb_adapter *VAR_2 = VAR_0->dvb->priv;
 struct dib0700_adapter_state *VAR_3 = VAR_2->priv;

 u16 VAR_4;
 u8 VAR_5 = FUNC_0(VAR_1->frequency / 1000);

 switch (VAR_5) {
 case 128:
  VAR_4 = 950;
  break;
 default:
 case 129:
  VAR_4 = 550;
  break;
 }

 VAR_3->dib7000p_ops.set_wbd_ref(VAR_0, VAR_4 + FUNC_1(VAR_0));

 return VAR_3->set_param_save(VAR_0);
}
