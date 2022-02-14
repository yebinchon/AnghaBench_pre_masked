
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int port1; int port2; int high_cut; int st_noise; int japan_band; int xtal_freq; } ;
struct TYPE_4__ {char* name; struct i2c_adapter* adap; int addr; } ;
struct tea5767_priv {TYPE_2__ ctrl; TYPE_1__ i2c_props; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_tuner_ops {int dummy; } ;
struct TYPE_6__ {int tuner_ops; } ;
struct dvb_frontend {TYPE_3__ ops; struct tea5767_priv* tuner_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tea5767_priv* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *,int) ;
 int VAR_2 ;
 int FUNC_2 (char*,char*) ;

struct dvb_frontend *FUNC_3(struct dvb_frontend *VAR_3,
        struct i2c_adapter* VAR_4,
        u8 VAR_5)
{
 struct tea5767_priv *VAR_6 = ((void*)0);

 VAR_6 = FUNC_0(sizeof(struct tea5767_priv), VAR_0);
 if (VAR_6 == ((void*)0))
  return ((void*)0);
 VAR_3->tuner_priv = VAR_6;

 VAR_6->i2c_props.addr = VAR_5;
 VAR_6->i2c_props.adap = VAR_4;
 VAR_6->i2c_props.name = "tea5767";

 VAR_6->ctrl.xtal_freq = VAR_1;
 VAR_6->ctrl.port1 = 1;
 VAR_6->ctrl.port2 = 1;
 VAR_6->ctrl.high_cut = 1;
 VAR_6->ctrl.st_noise = 1;
 VAR_6->ctrl.japan_band = 1;

 FUNC_1(&VAR_3->ops.tuner_ops, &VAR_2,
        sizeof(struct dvb_tuner_ops));

 FUNC_2("type set to %s\n", "Philips TEA5767HN FM Radio");

 return VAR_3;
}
