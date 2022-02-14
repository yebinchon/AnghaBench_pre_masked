
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dvb_usb_adapter {TYPE_1__* fe_adap; TYPE_3__* dev; struct dib0700_adapter_state* priv; } ;
struct dvb_frontend {int dummy; } ;
struct TYPE_6__ {int (* set_slave_frontend ) (struct dvb_frontend*,struct dvb_frontend*) ;struct dvb_frontend* (* init ) (int *,int,int *) ;int (* i2c_enumeration ) (int *,int,int,int,int ) ;} ;
struct dib0700_adapter_state {TYPE_2__ dib8000_ops; } ;
struct TYPE_7__ {int i2c_adap; } ;
struct TYPE_5__ {struct dvb_frontend* fe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_3__*,int,int) ;
 int FUNC_1 (TYPE_3__*,int ,int ,int) ;
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int,int,int,int ) ;
 struct dvb_frontend* FUNC_5 (int *,int,int *) ;
 struct dvb_frontend* FUNC_6 (int *,int,int *) ;
 int FUNC_7 (struct dvb_frontend*,struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_8(struct dvb_usb_adapter *VAR_10)
{
 struct dvb_frontend *VAR_11;
 struct dib0700_adapter_state *VAR_12 = VAR_10->priv;

 if (!FUNC_2(VAR_8, &VAR_12->dib8000_ops))
  return -VAR_0;

 FUNC_1(VAR_10->dev, VAR_4, VAR_7, 0);
 FUNC_3(20);
 FUNC_1(VAR_10->dev, VAR_4, VAR_7, 1);
 FUNC_3(1000);
 FUNC_1(VAR_10->dev, VAR_6, VAR_7, 1);
 FUNC_1(VAR_10->dev, VAR_3, VAR_7, 1);
 FUNC_1(VAR_10->dev, VAR_5, VAR_7, 1);

 FUNC_1(VAR_10->dev, VAR_2, VAR_7, 0);

 FUNC_0(VAR_10->dev, 72, 1);

 FUNC_3(20);
 FUNC_1(VAR_10->dev, VAR_2, VAR_7, 1);
 FUNC_3(20);
 FUNC_1(VAR_10->dev, VAR_1, VAR_7, 1);

 VAR_12->dib8000_ops.i2c_enumeration(&VAR_10->dev->i2c_adap, 2, 18, 0x80, 0);

 VAR_10->fe_adap[0].fe = VAR_12->dib8000_ops.init(&VAR_10->dev->i2c_adap, 0x80, &VAR_9[0]);
 if (VAR_10->fe_adap[0].fe == ((void*)0))
  return -VAR_0;


 if (!FUNC_2(VAR_8, &VAR_12->dib8000_ops))
  return -VAR_0;

 VAR_11 = VAR_12->dib8000_ops.init(&VAR_10->dev->i2c_adap, 0x82, &VAR_9[1]);
 VAR_12->dib8000_ops.set_slave_frontend(VAR_10->fe_adap[0].fe, VAR_11);

 return VAR_11 == ((void*)0) ? -VAR_0 : 0;
}
