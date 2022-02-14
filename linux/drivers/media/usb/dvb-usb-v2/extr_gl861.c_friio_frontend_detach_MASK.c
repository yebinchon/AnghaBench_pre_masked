
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct friio_priv {int i2c_client_demod; int tuner_adap; } ;
struct dvb_usb_adapter {int dummy; } ;


 struct friio_priv* FUNC_0 (struct dvb_usb_adapter*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_adapter *VAR_0)
{
 struct friio_priv *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 FUNC_2(&VAR_1->tuner_adap);
 FUNC_1(VAR_1->i2c_client_demod);
 return 0;
}
