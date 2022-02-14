
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct i2c_adapter {int dummy; } ;
struct dvb_usb_adapter {TYPE_4__* fe_adap; struct dib0700_adapter_state* priv; } ;
struct TYPE_10__ {int (* set_gpio ) (TYPE_6__*,int,int ,int) ;int tuner_sleep; struct i2c_adapter* (* get_i2c_tuner ) (TYPE_6__*) ;} ;
struct dib0700_adapter_state {int set_param_save; TYPE_1__ dib8000_ops; } ;
struct TYPE_11__ {int set_params; } ;
struct TYPE_12__ {TYPE_2__ tuner_ops; } ;
struct TYPE_15__ {TYPE_3__ ops; } ;
struct TYPE_14__ {int wbd; int sleep; int reset; } ;
struct TYPE_13__ {TYPE_6__* fe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ,TYPE_6__*,struct i2c_adapter*,TYPE_5__*) ;
 struct i2c_adapter* FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*,int,int ,int) ;
 TYPE_5__ VAR_4 ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_adapter *VAR_5)
{
 struct dib0700_adapter_state *VAR_6 = VAR_5->priv;
 struct i2c_adapter *VAR_7 = VAR_6->dib8000_ops.get_i2c_tuner(VAR_5->fe_adap[0].fe);

 VAR_4.reset = VAR_6->dib8000_ops.tuner_sleep;
 VAR_4.sleep = VAR_6->dib8000_ops.tuner_sleep;
 VAR_4.wbd = VAR_3;

 if (FUNC_0(VAR_1, VAR_5->fe_adap[0].fe, VAR_7,
    &VAR_4) == ((void*)0))
  return -VAR_0;

 VAR_6->dib8000_ops.set_gpio(VAR_5->fe_adap[0].fe, 8, 0, 1);

 VAR_6->set_param_save = VAR_5->fe_adap[0].fe->ops.tuner_ops.set_params;
 VAR_5->fe_adap[0].fe->ops.tuner_ops.set_params = VAR_2;
 return 0;
}
