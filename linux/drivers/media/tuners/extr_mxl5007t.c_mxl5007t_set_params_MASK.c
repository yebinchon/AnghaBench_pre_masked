
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mxl5007t_state {int frequency; int lock; int bandwidth; } ;
struct TYPE_2__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dtv_frontend_properties {int delivery_system; int frequency; int bandwidth_hz; } ;
struct dvb_frontend {TYPE_1__ ops; struct mxl5007t_state* tuner_priv; struct dtv_frontend_properties dtv_property_cache; } ;
typedef enum mxl5007t_mode { ____Placeholder_mxl5007t_mode } mxl5007t_mode ;
typedef enum mxl5007t_bw_mhz { ____Placeholder_mxl5007t_bw_mhz } mxl5007t_bw_mhz ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mxl5007t_state*,int) ;
 int FUNC_3 (struct mxl5007t_state*,int,int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct dvb_frontend*,int) ;
 int FUNC_7 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_8(struct dvb_frontend *VAR_7)
{
 struct dtv_frontend_properties *VAR_8 = &VAR_7->dtv_property_cache;
 u32 VAR_9 = VAR_8->delivery_system;
 struct mxl5007t_state *VAR_10 = VAR_7->tuner_priv;
 enum mxl5007t_bw_mhz VAR_11;
 enum mxl5007t_mode VAR_12;
 int VAR_13;
 u32 VAR_14 = VAR_8->frequency;

 switch (VAR_9) {
 case 131:
  VAR_12 = VAR_4;
  VAR_11 = VAR_1;
  break;
 case 130:
  VAR_12 = VAR_5;
  VAR_11 = VAR_1;
  break;
 case 129:
 case 128:
  VAR_12 = VAR_6;
  switch (VAR_8->bandwidth_hz) {
  case 6000000:
   VAR_11 = VAR_1;
   break;
  case 7000000:
   VAR_11 = VAR_2;
   break;
  case 8000000:
   VAR_11 = VAR_3;
   break;
  default:
   return -VAR_0;
  }
  break;
 default:
  FUNC_4("modulation type not supported!");
  return -VAR_0;
 }

 if (VAR_7->ops.i2c_gate_ctrl)
  VAR_7->ops.i2c_gate_ctrl(VAR_7, 1);

 FUNC_0(&VAR_10->lock);

 VAR_13 = FUNC_2(VAR_10, VAR_12);
 if (FUNC_5(VAR_13))
  goto fail;

 VAR_13 = FUNC_3(VAR_10, VAR_14, VAR_11);
 if (FUNC_5(VAR_13))
  goto fail;

 VAR_10->frequency = VAR_14;
 VAR_10->bandwidth = VAR_8->bandwidth_hz;
fail:
 FUNC_1(&VAR_10->lock);

 if (VAR_7->ops.i2c_gate_ctrl)
  VAR_7->ops.i2c_gate_ctrl(VAR_7, 0);

 return VAR_13;
}
