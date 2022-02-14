
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct dvb_usb_adapter {int dev; struct dib0700_adapter_state* priv; } ;
struct TYPE_5__ {int bandwidth_hz; } ;
struct dvb_frontend {TYPE_2__ dtv_property_cache; TYPE_1__* dvb; } ;
struct dibx090p_best_adc {int timf; int pll_prediv; int pll_loopdiv; } ;
struct dibx000_bandwidth_config {int pll_prediv; int pll_ratio; } ;
struct TYPE_6__ {int (* ctrl_timf ) (struct dvb_frontend*,int ,int ) ;int (* update_pll ) (struct dvb_frontend*,struct dibx000_bandwidth_config*,int,int ) ;int (* set_wbd_ref ) (struct dvb_frontend*,int) ;} ;
struct dib0700_adapter_state {int (* set_param_save ) (struct dvb_frontend*) ;TYPE_3__ dib8000_ops; } ;
struct TYPE_4__ {struct dvb_usb_adapter* priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_frontend*) ;
 int FUNC_1 (struct dvb_frontend*) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (struct dvb_frontend*,struct dibx090p_best_adc*) ;
 int FUNC_4 (struct dibx000_bandwidth_config*,int ,int) ;
 int FUNC_5 (struct dvb_frontend*) ;
 int FUNC_6 (struct dvb_frontend*,int) ;
 int FUNC_7 (struct dvb_frontend*,struct dibx000_bandwidth_config*,int,int ) ;
 int FUNC_8 (struct dvb_frontend*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct dvb_frontend *VAR_1)
{
 struct dvb_usb_adapter *VAR_2 = VAR_1->dvb->priv;
 struct dib0700_adapter_state *VAR_3 = VAR_2->priv;
 struct dibx000_bandwidth_config VAR_4;
 struct dibx090p_best_adc VAR_5;
 u16 VAR_6;
 int VAR_7;

 VAR_7 = VAR_3->set_param_save(VAR_1);
 if (VAR_7 < 0)
  return VAR_7;
 FUNC_4(&VAR_4, 0, sizeof(struct dibx000_bandwidth_config));

 FUNC_1(VAR_1);


 VAR_6 = (FUNC_0(VAR_1) * 8 + 1) / 2;
 VAR_3->dib8000_ops.set_wbd_ref(VAR_1, VAR_6);

 if (FUNC_3(VAR_1, &VAR_5) == 0) {
  VAR_4.pll_ratio = VAR_5.pll_loopdiv;
  VAR_4.pll_prediv = VAR_5.pll_prediv;

  FUNC_2(VAR_2->dev, 200);
  VAR_3->dib8000_ops.update_pll(VAR_1, &VAR_4, VAR_1->dtv_property_cache.bandwidth_hz / 1000, 0);
  VAR_3->dib8000_ops.ctrl_timf(VAR_1, VAR_0, VAR_5.timf);
  FUNC_2(VAR_2->dev, 1000);
 }
 return 0;
}
