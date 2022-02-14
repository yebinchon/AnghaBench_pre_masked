
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i2c_adapter {int dummy; } ;
struct dvb_usb_adapter {size_t id; TYPE_2__* fe_adap; struct dib0700_adapter_state* priv; } ;
struct TYPE_3__ {struct i2c_adapter* (* get_i2c_master ) (int ,int ,int) ;} ;
struct dib0700_adapter_state {TYPE_1__ dib7000p_ops; } ;
struct TYPE_4__ {int fe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int ,struct i2c_adapter*,int *) ;
 int VAR_2 ;
 int * VAR_3 ;
 struct i2c_adapter* FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_adapter *VAR_4)
{
 struct i2c_adapter *VAR_5;
 struct dib0700_adapter_state *VAR_6 = VAR_4->priv;

 VAR_5 = VAR_6->dib7000p_ops.get_i2c_master(VAR_4->fe_adap[0].fe,
         VAR_0, 1);
 return FUNC_0(VAR_2, VAR_4->fe_adap[0].fe, VAR_5,
  &VAR_3[VAR_4->id]) == ((void*)0) ? -VAR_1 : 0;
}
