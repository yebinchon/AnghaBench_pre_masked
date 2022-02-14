
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct dvb_usb_adapter {struct dib0700_adapter_state* priv; } ;
struct TYPE_5__ {int frequency; int bandwidth_hz; } ;
struct dvb_frontend {TYPE_2__ dtv_property_cache; TYPE_1__* dvb; } ;
struct TYPE_6__ {int (* set_tune_state ) (struct dvb_frontend*,int ) ;int (* pwm_agc_reset ) (struct dvb_frontend*) ;int (* set_gpio ) (struct dvb_frontend*,int,int ,int) ;int (* set_wbd_ref ) (struct dvb_frontend*,int) ;int (* ctrl_timf ) (struct dvb_frontend*,int ,int) ;int (* update_pll ) (struct dvb_frontend*,int *,int,int) ;} ;
struct dib0700_adapter_state {int (* set_param_save ) (struct dvb_frontend*) ;TYPE_3__ dib8000_ops; } ;
typedef enum frontend_tune_state { ____Placeholder_frontend_tune_state } frontend_tune_state ;
struct TYPE_4__ {struct dvb_usb_adapter* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct dvb_frontend*) ;
 int FUNC_3 (struct dvb_frontend*,int *,int *,int*,int*) ;
 int FUNC_4 (struct dvb_frontend*) ;
 int FUNC_5 (struct dvb_frontend*) ;
 int FUNC_6 (struct dvb_frontend*) ;
 int FUNC_7 (struct dvb_frontend*,int ) ;
 int FUNC_8 (struct dvb_frontend*) ;
 int VAR_9 ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct dvb_frontend*,int,int ,int) ;
 int FUNC_11 (struct dvb_frontend*) ;
 int FUNC_12 (struct dvb_frontend*,int ) ;
 int FUNC_13 (struct dvb_frontend*,int,int ,int) ;
 int FUNC_14 (struct dvb_frontend*) ;
 int FUNC_15 (struct dvb_frontend*,int *,int,int) ;
 int FUNC_16 (struct dvb_frontend*,int *,int,int) ;
 int FUNC_17 (struct dvb_frontend*,int ,int) ;
 int FUNC_18 (struct dvb_frontend*,int) ;
 int FUNC_19 (struct dvb_frontend*,int,int ,int) ;
 int FUNC_20 (struct dvb_frontend*,int,int ,int) ;

__attribute__((used)) static int FUNC_21(struct dvb_frontend *VAR_10)
{
 struct dvb_usb_adapter *VAR_11 = VAR_10->dvb->priv;
 struct dib0700_adapter_state *VAR_12 = VAR_11->priv;
 u8 VAR_13, VAR_14 = FUNC_0(VAR_10->dtv_property_cache.frequency / 1000);
 u16 VAR_15, VAR_16, VAR_17;
 u32 VAR_18;
 int VAR_19 = 0;
 enum frontend_tune_state VAR_20 = VAR_6;

 switch (VAR_14) {
 default:
   FUNC_1("Warning : Rf frequency  (%iHz) is not in the supported range, using VHF switch ", VAR_10->dtv_property_cache.frequency);

 case 128:
   VAR_12->dib8000_ops.set_gpio(VAR_10, 3, 0, 1);
   break;
 case 129:
   VAR_12->dib8000_ops.set_gpio(VAR_10, 3, 0, 0);
   break;
 }

 VAR_19 = VAR_12->set_param_save(VAR_10);
 if (VAR_19 < 0)
  return VAR_19;

 if (VAR_10->dtv_property_cache.bandwidth_hz != 6000000) {
  FUNC_1("only 6MHz bandwidth is supported\n");
  return -VAR_8;
 }


 VAR_12->dib8000_ops.update_pll(VAR_10, &VAR_9, VAR_10->dtv_property_cache.bandwidth_hz / 1000, 0);


 VAR_13 = FUNC_8(VAR_10);
 if (VAR_13 == 17)
  VAR_18 = 21387946;
 else if (VAR_13 == 18)
  VAR_18 = 20199727;
 else if (VAR_13 == 19)
  VAR_18 = 19136583;
 else
  VAR_18 = 18179756;


 VAR_12->dib8000_ops.update_pll(VAR_10, &VAR_9, VAR_10->dtv_property_cache.bandwidth_hz / 1000, VAR_13);

 VAR_12->dib8000_ops.ctrl_timf(VAR_10, VAR_7, VAR_18);

 if (VAR_14 != VAR_0) {

  VAR_15 = (FUNC_5(VAR_10) * 8 * 18 / 33 + 1) / 2;
  VAR_12->dib8000_ops.set_wbd_ref(VAR_10, VAR_15);
 }

 if (VAR_14 == VAR_0) {
  FUNC_1("tuning in CBAND - soft-AGC startup\n");
  FUNC_7(VAR_10, VAR_1);

  do {
   VAR_19 = FUNC_2(VAR_10);
   FUNC_9(VAR_19);
   VAR_20 = FUNC_4(VAR_10);
   if (VAR_20 == VAR_2)
    VAR_12->dib8000_ops.set_gpio(VAR_10, 6, 0, 1);
   else if (VAR_20 == VAR_3) {
    FUNC_3(VAR_10, ((void*)0), ((void*)0), &VAR_17, &VAR_16);
    if (VAR_17 < 2000)
     VAR_12->dib8000_ops.set_gpio(VAR_10, 6, 0, 0);
   }
  } while (VAR_20 < VAR_4);

  FUNC_1("switching to PWM AGC\n");
  FUNC_6(VAR_10);
  VAR_12->dib8000_ops.pwm_agc_reset(VAR_10);
  VAR_12->dib8000_ops.set_tune_state(VAR_10, VAR_5);
 } else {

  FUNC_1("not tuning in CBAND - standard AGC startup\n");
  FUNC_6(VAR_10);
 }

 return 0;
}
