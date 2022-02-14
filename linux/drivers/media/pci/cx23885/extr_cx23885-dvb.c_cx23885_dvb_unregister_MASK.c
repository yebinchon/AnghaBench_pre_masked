
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ frontend; } ;
struct vb2_dvb_frontend {TYPE_1__ dvb; } ;
struct TYPE_7__ {TYPE_2__* driver; } ;
struct i2c_client {TYPE_3__ dev; } ;
struct cx23885_tsport {int * gate_ctrl; int nr; TYPE_4__* dev; struct i2c_client* i2c_client_demod; struct i2c_client* i2c_client_tuner; struct i2c_client* i2c_client_sec; struct i2c_client* i2c_client_ci; int frontends; } ;
struct TYPE_8__ {int board; } ;
struct TYPE_6__ {int owner; } ;




 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cx23885_tsport*) ;
 struct vb2_dvb_frontend* FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct cx23885_tsport *VAR_0)
{
 struct vb2_dvb_frontend *VAR_1;
 struct i2c_client *VAR_2;

 VAR_1 = FUNC_4(&VAR_0->frontends, 1);

 if (VAR_1 && VAR_1->dvb.frontend)
  FUNC_5(&VAR_0->frontends);


 VAR_2 = VAR_0->i2c_client_ci;
 if (VAR_2) {
  FUNC_2(VAR_2->dev.driver->owner);
  FUNC_1(VAR_2);
 }


 VAR_2 = VAR_0->i2c_client_sec;
 if (VAR_2) {
  FUNC_2(VAR_2->dev.driver->owner);
  FUNC_1(VAR_2);
 }


 VAR_2 = VAR_0->i2c_client_tuner;
 if (VAR_2) {
  FUNC_2(VAR_2->dev.driver->owner);
  FUNC_1(VAR_2);
 }


 VAR_2 = VAR_0->i2c_client_demod;
 if (VAR_2) {
  FUNC_2(VAR_2->dev.driver->owner);
  FUNC_1(VAR_2);
 }

 switch (VAR_0->dev->board) {
 case 129:
  FUNC_3(VAR_0);
  break;
 case 128:
  FUNC_0(VAR_0->dev, VAR_0->nr);
  break;
 }

 VAR_0->gate_ctrl = ((void*)0);

 return 0;
}
