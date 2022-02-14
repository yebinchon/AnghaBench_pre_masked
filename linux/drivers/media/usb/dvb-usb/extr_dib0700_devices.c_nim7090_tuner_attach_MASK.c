
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct i2c_adapter {int dummy; } ;
struct dvb_usb_adapter {TYPE_4__* fe_adap; struct dib0700_adapter_state* priv; } ;
struct TYPE_10__ {int (* set_gpio ) (TYPE_5__*,int,int ,int) ;int get_adc_power; int tuner_sleep; struct i2c_adapter* (* get_i2c_tuner ) (TYPE_5__*) ;} ;
struct dib0700_adapter_state {int set_param_save; TYPE_1__ dib7000p_ops; } ;
struct TYPE_15__ {int get_adc_power; int sleep; int reset; } ;
struct TYPE_11__ {int set_params; } ;
struct TYPE_12__ {TYPE_2__ tuner_ops; } ;
struct TYPE_14__ {TYPE_3__ ops; } ;
struct TYPE_13__ {TYPE_5__* fe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,TYPE_5__*,struct i2c_adapter*,TYPE_7__*) ;
 TYPE_7__ VAR_3 ;
 struct i2c_adapter* FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,int,int ,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_adapter *VAR_4)
{
 struct dib0700_adapter_state *VAR_5 = VAR_4->priv;
 struct i2c_adapter *VAR_6 = VAR_5->dib7000p_ops.get_i2c_tuner(VAR_4->fe_adap[0].fe);

 VAR_3.reset = VAR_5->dib7000p_ops.tuner_sleep,
 VAR_3.sleep = VAR_5->dib7000p_ops.tuner_sleep,
 VAR_3.get_adc_power = VAR_5->dib7000p_ops.get_adc_power;

 if (FUNC_0(VAR_1, VAR_4->fe_adap[0].fe, VAR_6, &VAR_3) == ((void*)0))
  return -VAR_0;

 VAR_5->dib7000p_ops.set_gpio(VAR_4->fe_adap[0].fe, 8, 0, 1);

 VAR_5->set_param_save = VAR_4->fe_adap[0].fe->ops.tuner_ops.set_params;
 VAR_4->fe_adap[0].fe->ops.tuner_ops.set_params = VAR_2;
 return 0;
}
