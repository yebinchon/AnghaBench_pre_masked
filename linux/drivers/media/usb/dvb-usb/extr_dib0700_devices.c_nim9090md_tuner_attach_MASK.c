
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct i2c_adapter {int dummy; } ;
struct dvb_usb_adapter {TYPE_1__* fe_adap; int dev; struct dib0700_adapter_state* priv; } ;
struct dvb_frontend {int dvb; } ;
struct dib0700_adapter_state {int frontend_firmware; } ;
struct TYPE_2__ {struct dvb_frontend* fe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct i2c_adapter*,int*,int) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (struct dvb_frontend*) ;
 int FUNC_4 (struct dvb_frontend*,int) ;
 struct i2c_adapter* FUNC_5 (struct dvb_frontend*) ;
 struct i2c_adapter* FUNC_6 (struct dvb_frontend*,int ,int ) ;
 struct dvb_frontend* FUNC_7 (struct dvb_frontend*,int) ;
 struct i2c_adapter* FUNC_8 (struct dvb_frontend*) ;
 int FUNC_9 (struct dvb_frontend*,struct i2c_adapter*) ;
 int * FUNC_10 (int ,struct dvb_frontend*,struct i2c_adapter*,int *) ;
 int * VAR_4 ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct dvb_usb_adapter *VAR_5)
{
 struct dib0700_adapter_state *VAR_6 = VAR_5->priv;
 struct i2c_adapter *VAR_7;
 struct dvb_frontend *VAR_8;
 u16 VAR_9[10] = {
  1, 0x5374,
  2, 0x01ae,
  7, 0x0020,
  0, 0x00ef,
  8, 0x0406,
 };
 if (!FUNC_0(VAR_0))
  return -VAR_2;
 VAR_7 = FUNC_8(VAR_5->fe_adap[0].fe);
 if (FUNC_10(VAR_3, VAR_5->fe_adap[0].fe, VAR_7, &VAR_4[0]) == ((void*)0))
  return -VAR_2;
 VAR_7 = FUNC_6(VAR_5->fe_adap[0].fe, VAR_1, 0);
 if (!VAR_7)
  return -VAR_2;
 if (FUNC_1(VAR_7, VAR_9, 10) < 0)
  return -VAR_2;

 FUNC_2(VAR_5->dev, 1500);
 if (FUNC_3(VAR_5->fe_adap[0].fe) < 0)
  return -VAR_2;

 VAR_8 = FUNC_7(VAR_5->fe_adap[0].fe, 1);
 if (VAR_8 != ((void*)0)) {
  VAR_7 = FUNC_5(VAR_5->fe_adap[0].fe);
  FUNC_9(VAR_8, VAR_7);

  VAR_7 = FUNC_8(VAR_8);
  if (FUNC_10(VAR_3, VAR_8, VAR_7, &VAR_4[1]) == ((void*)0))
   return -VAR_2;
  VAR_8->dvb = VAR_5->fe_adap[0].fe->dvb;
  FUNC_4(VAR_5->fe_adap[0].fe, 1500);
  if (FUNC_3(VAR_8) < 0)
   return -VAR_2;
 }
 FUNC_11(VAR_6->frontend_firmware);

 return 0;
}
