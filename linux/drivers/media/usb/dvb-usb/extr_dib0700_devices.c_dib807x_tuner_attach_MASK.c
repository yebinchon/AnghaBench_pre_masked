
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct i2c_adapter {int dummy; } ;
struct dvb_usb_adapter {scalar_t__ id; TYPE_4__* fe_adap; struct dib0700_adapter_state* priv; } ;
struct TYPE_7__ {struct i2c_adapter* (* get_i2c_master ) (TYPE_5__*,int ,int) ;} ;
struct dib0700_adapter_state {int set_param_save; TYPE_1__ dib8000_ops; } ;
struct TYPE_8__ {int set_params; } ;
struct TYPE_9__ {TYPE_2__ tuner_ops; } ;
struct TYPE_11__ {TYPE_3__ ops; } ;
struct TYPE_10__ {TYPE_5__* fe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int ,TYPE_5__*,struct i2c_adapter*,int *) ;
 struct i2c_adapter* FUNC_1 (TYPE_5__*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_adapter *VAR_5)
{
 struct dib0700_adapter_state *VAR_6 = VAR_5->priv;
 struct i2c_adapter *VAR_7 = VAR_6->dib8000_ops.get_i2c_master(VAR_5->fe_adap[0].fe,
   VAR_0, 1);

 if (VAR_5->id == 0) {
  if (FUNC_0(VAR_2, VAR_5->fe_adap[0].fe, VAR_7,
    &VAR_3[0]) == ((void*)0))
   return -VAR_1;
 } else {
  if (FUNC_0(VAR_2, VAR_5->fe_adap[0].fe, VAR_7,
    &VAR_3[1]) == ((void*)0))
   return -VAR_1;
 }

 VAR_6->set_param_save = VAR_5->fe_adap[0].fe->ops.tuner_ops.set_params;
 VAR_5->fe_adap[0].fe->ops.tuner_ops.set_params = VAR_4;
 return 0;
}
