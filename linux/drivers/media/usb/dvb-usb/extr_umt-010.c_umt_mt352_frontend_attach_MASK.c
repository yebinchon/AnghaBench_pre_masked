
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mt352_config {int demod_address; int demod_init; } ;
struct dvb_usb_adapter {TYPE_2__* dev; TYPE_1__* fe_adap; } ;
struct TYPE_4__ {int i2c_adap; } ;
struct TYPE_3__ {int fe; } ;


 int FUNC_0 (int ,struct mt352_config*,int *) ;
 int FUNC_1 (struct mt352_config*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_adapter *VAR_2)
{
 struct mt352_config VAR_3;

 FUNC_1(&VAR_3,0,sizeof(struct mt352_config));
 VAR_3.demod_init = VAR_1;
 VAR_3.demod_address = 0xf;

 VAR_2->fe_adap[0].fe = FUNC_0(VAR_0, &VAR_3, &VAR_2->dev->i2c_adap);

 return 0;
}
