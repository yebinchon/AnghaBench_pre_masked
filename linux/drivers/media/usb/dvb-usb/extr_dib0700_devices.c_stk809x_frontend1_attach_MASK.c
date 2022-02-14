
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dvb_usb_adapter {TYPE_2__* fe_adap; TYPE_1__* dev; struct dib0700_adapter_state* priv; } ;
struct TYPE_6__ {int * (* init ) (int *,int,int *) ;int (* i2c_enumeration ) (int *,int,int,int,int ) ;} ;
struct dib0700_adapter_state {TYPE_3__ dib8000_ops; } ;
struct TYPE_5__ {int * fe; } ;
struct TYPE_4__ {int i2c_adap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (int *,int,int,int,int ) ;
 int * FUNC_2 (int *,int,int *) ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_adapter *VAR_3)
{
 struct dib0700_adapter_state *VAR_4 = VAR_3->priv;

 if (!FUNC_0(VAR_1, &VAR_4->dib8000_ops))
  return -VAR_0;

 VAR_4->dib8000_ops.i2c_enumeration(&VAR_3->dev->i2c_adap, 1, 0x10, 0x82, 0);

 VAR_3->fe_adap[0].fe = VAR_4->dib8000_ops.init(&VAR_3->dev->i2c_adap, 0x82, &VAR_2[1]);

 return VAR_3->fe_adap[0].fe == ((void*)0) ? -VAR_0 : 0;
}
