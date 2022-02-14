
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct i2c_adapter {int dummy; } ;
struct dvb_usb_adapter {TYPE_2__* fe_adap; struct dib0700_adapter_state* priv; } ;
struct TYPE_7__ {struct i2c_adapter* (* get_i2c_master ) (TYPE_3__*,int ,int) ;} ;
struct dib0700_adapter_state {TYPE_1__ dib7000p_ops; } ;
struct TYPE_10__ {struct i2c_adapter* i2c_adap; } ;
struct TYPE_9__ {int callback; } ;
struct TYPE_8__ {TYPE_3__* fe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,TYPE_3__*,TYPE_4__*) ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;
 struct i2c_adapter* FUNC_1 (TYPE_3__*,int ,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_adapter *VAR_5)
{
 struct i2c_adapter *VAR_6;
 struct dib0700_adapter_state *VAR_7 = VAR_5->priv;

 VAR_6 = VAR_7->dib7000p_ops.get_i2c_master(VAR_5->fe_adap[0].fe,
  VAR_0, 1);

 VAR_3.i2c_adap = VAR_6;


 VAR_5->fe_adap[0].fe->callback = VAR_2;

 return FUNC_0(VAR_4, VAR_5->fe_adap[0].fe, &VAR_3)
  == ((void*)0) ? -VAR_1 : 0;
}
