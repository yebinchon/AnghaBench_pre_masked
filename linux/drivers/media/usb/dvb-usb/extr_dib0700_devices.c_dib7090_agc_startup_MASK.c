
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct dvb_usb_adapter {struct dib0700_adapter_state* priv; } ;
struct dvb_frontend {TYPE_1__* dvb; } ;
struct dibx090p_best_adc {int timf; int pll_prediv; int pll_loopdiv; } ;
struct dibx000_bandwidth_config {int pll_prediv; int pll_ratio; } ;
struct TYPE_4__ {int (* ctrl_timf ) (struct dvb_frontend*,int ,int ) ;int (* update_pll ) (struct dvb_frontend*,struct dibx000_bandwidth_config*) ;int (* set_wbd_ref ) (struct dvb_frontend*,int) ;} ;
struct dib0700_adapter_state {int (* set_param_save ) (struct dvb_frontend*) ;TYPE_2__ dib7000p_ops; } ;
struct TYPE_3__ {struct dvb_usb_adapter* priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_frontend*) ;
 int FUNC_1 (struct dvb_frontend*) ;
 scalar_t__ FUNC_2 (struct dvb_frontend*,struct dibx090p_best_adc*) ;
 int FUNC_3 (struct dibx000_bandwidth_config*,int ,int) ;
 int FUNC_4 (struct dvb_frontend*) ;
 int FUNC_5 (struct dvb_frontend*,int) ;
 int FUNC_6 (struct dvb_frontend*,struct dibx000_bandwidth_config*) ;
 int FUNC_7 (struct dvb_frontend*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct dvb_frontend *VAR_1)
{
 struct dvb_usb_adapter *VAR_2 = VAR_1->dvb->priv;
 struct dib0700_adapter_state *VAR_3 = VAR_2->priv;
 struct dibx000_bandwidth_config VAR_4;
 u16 VAR_5;
 struct dibx090p_best_adc VAR_6;
 int VAR_7;

 VAR_7 = VAR_3->set_param_save(VAR_1);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_3(&VAR_4, 0, sizeof(struct dibx000_bandwidth_config));
 FUNC_1(VAR_1);
 VAR_5 = (FUNC_0(VAR_1) * 8 + 1) / 2;
 VAR_3->dib7000p_ops.set_wbd_ref(VAR_1, VAR_5);

 if (FUNC_2(VAR_1, &VAR_6) == 0) {
  VAR_4.pll_ratio = VAR_6.pll_loopdiv;
  VAR_4.pll_prediv = VAR_6.pll_prediv;

  VAR_3->dib7000p_ops.update_pll(VAR_1, &VAR_4);
  VAR_3->dib7000p_ops.ctrl_timf(VAR_1, VAR_0, VAR_6.timf);
 }
 return 0;
}
