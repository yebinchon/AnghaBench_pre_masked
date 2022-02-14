
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct i2c_adapter {int dummy; } ;
struct dvb_usb_adapter {TYPE_4__* fe_adap; struct dib0700_adapter_state* priv; } ;
struct TYPE_6__ {void* set_params; } ;
struct TYPE_7__ {TYPE_2__ tuner_ops; } ;
struct dvb_frontend {TYPE_3__ ops; int dvb; } ;
struct TYPE_5__ {struct i2c_adapter* (* get_i2c_master ) (struct dvb_frontend*,int ,int) ;struct dvb_frontend* (* get_slave_frontend ) (struct dvb_frontend*,int) ;} ;
struct dib0700_adapter_state {void* set_param_save; TYPE_1__ dib8000_ops; } ;
struct TYPE_8__ {struct dvb_frontend* fe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int ,struct dvb_frontend*,struct i2c_adapter*,int *) ;
 struct dvb_frontend* FUNC_1 (struct dvb_frontend*,int) ;
 struct i2c_adapter* FUNC_2 (struct dvb_frontend*,int ,int) ;
 struct i2c_adapter* FUNC_3 (struct dvb_frontend*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_adapter *VAR_5)
{
 struct dib0700_adapter_state *VAR_6 = VAR_5->priv;
 struct i2c_adapter *VAR_7;
 struct dvb_frontend *VAR_8 = VAR_6->dib8000_ops.get_slave_frontend(VAR_5->fe_adap[0].fe, 1);

 if (VAR_8) {
  VAR_7 = VAR_6->dib8000_ops.get_i2c_master(VAR_8, VAR_0, 1);
  if (FUNC_0(VAR_2, VAR_8, VAR_7, &VAR_4) == ((void*)0))
   return -VAR_1;
  VAR_8->dvb = VAR_5->fe_adap[0].fe->dvb;
  VAR_8->ops.tuner_ops.set_params = VAR_3;
 }
 VAR_7 = VAR_6->dib8000_ops.get_i2c_master(VAR_5->fe_adap[0].fe, VAR_0, 1);
 if (FUNC_0(VAR_2, VAR_5->fe_adap[0].fe, VAR_7, &VAR_4) == ((void*)0))
  return -VAR_1;

 VAR_6->set_param_save = VAR_5->fe_adap[0].fe->ops.tuner_ops.set_params;
 VAR_5->fe_adap[0].fe->ops.tuner_ops.set_params = VAR_3;

 return 0;
}
