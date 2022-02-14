
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_6__ {int addr; int * adap; } ;
struct tuner_simple_priv {scalar_t__ frequency; scalar_t__ bandwidth; TYPE_3__ i2c_props; } ;
struct TYPE_4__ {int (* standby ) (struct dvb_frontend*) ;} ;
struct TYPE_5__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;TYPE_1__ analog_ops; } ;
struct dtv_frontend_properties {scalar_t__ delivery_system; scalar_t__ bandwidth_hz; scalar_t__ frequency; } ;
struct dvb_frontend {TYPE_2__ ops; struct tuner_simple_priv* tuner_priv; struct dtv_frontend_properties dtv_property_cache; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dvb_frontend*,int *,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct dvb_frontend*) ;
 int FUNC_2 (struct dvb_frontend*,int) ;
 int FUNC_3 (TYPE_3__*,int *,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_1)
{
 struct dtv_frontend_properties *VAR_2 = &VAR_1->dtv_property_cache;
 u32 VAR_3 = VAR_2->delivery_system;
 u32 VAR_4 = VAR_2->bandwidth_hz;
 u32 VAR_5 = VAR_2->frequency;
 struct tuner_simple_priv *VAR_6 = VAR_1->tuner_priv;
 u32 VAR_7;
 u32 VAR_8, VAR_9;
 int VAR_10;
 u8 VAR_11[5];

 if (VAR_6->i2c_props.adap == ((void*)0))
  return -VAR_0;

 VAR_8 = VAR_6->frequency;
 VAR_9 = VAR_6->bandwidth;

 VAR_7 = FUNC_0(VAR_1, VAR_11+1, VAR_3, VAR_5, VAR_4);
 if (VAR_7 == 0)
  return -VAR_0;

 VAR_11[0] = VAR_6->i2c_props.addr;

 VAR_6->frequency = VAR_7;
 VAR_6->bandwidth = VAR_4;


 if (VAR_1->ops.analog_ops.standby)
  VAR_1->ops.analog_ops.standby(VAR_1);

 if (VAR_1->ops.i2c_gate_ctrl)
  VAR_1->ops.i2c_gate_ctrl(VAR_1, 1);



 VAR_10 = FUNC_3(&VAR_6->i2c_props, VAR_11+1, 4);
 if (VAR_10 != 4)
  goto fail;

 return 0;
fail:

 VAR_6->frequency = VAR_8;
 VAR_6->bandwidth = VAR_9;

 return VAR_10;
}
