
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_3__ {int (* set_params ) (struct dvb_frontend*) ;int * release; } ;
struct TYPE_4__ {TYPE_1__ tuner_ops; } ;
struct dtv_frontend_properties {int bandwidth_hz; int frequency; } ;
struct dvb_frontend {TYPE_2__ ops; struct af9005_fe_state* demodulator_priv; struct dtv_frontend_properties dtv_property_cache; } ;
struct af9005_fe_state {int original_fcw; int strong; int next_status_check; scalar_t__ abort_count; scalar_t__ post_vit_error_count; scalar_t__ ber; scalar_t__ pre_vit_bit_count; scalar_t__ pre_vit_error_count; int d; scalar_t__ original_if_unplug_th; int original_aci1_if_top; int original_aci0_if_top; int original_if_top; int original_rf_top; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct dvb_frontend*) ;
 int FUNC_4 (struct dvb_frontend*) ;
 int FUNC_5 (int ,int,scalar_t__) ;
 int FUNC_6 (int ,int ,int,int,int ) ;
 int FUNC_7 (int ,int,scalar_t__*,int) ;
 int FUNC_8 (int ,int,int,int,int,int ) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_11 (struct dvb_frontend*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_12(struct dvb_frontend *VAR_10)
{
 struct dtv_frontend_properties *VAR_11 = &VAR_10->dtv_property_cache;
 struct af9005_fe_state *VAR_12 = VAR_10->demodulator_priv;
 int VAR_13;
 u8 VAR_14, VAR_15, VAR_16, VAR_17;

 FUNC_9("af9005_fe_set_frontend freq %d bw %d\n", VAR_11->frequency,
   VAR_11->bandwidth_hz);
 if (VAR_10->ops.tuner_ops.release == ((void*)0)) {
  FUNC_10("Tuner not attached");
  return -VAR_0;
 }

 FUNC_9("turn off led\n");

 VAR_13 = FUNC_2(VAR_12->d, 0);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_6(VAR_12->d, VAR_1, 2, 1, 0);
 if (VAR_13)
  return VAR_13;


 FUNC_9("set FCW to default value\n");
 VAR_15 = (u8) (VAR_12->original_fcw & 0x000000ff);
 VAR_16 = (u8) ((VAR_12->original_fcw & 0x0000ff00) >> 8);
 VAR_17 = (u8) ((VAR_12->original_fcw & 0x00ff0000) >> 16);
 VAR_13 = FUNC_5(VAR_12->d, 0xae1a, VAR_15);
 if (VAR_13)
  return VAR_13;
 VAR_13 = FUNC_5(VAR_12->d, 0xae19, VAR_16);
 if (VAR_13)
  return VAR_13;
 VAR_13 = FUNC_5(VAR_12->d, 0xae18, VAR_17);
 if (VAR_13)
  return VAR_13;


 FUNC_9("restore original TOPs\n");
 VAR_13 =
     FUNC_8(VAR_12->d,
      VAR_7,
      VAR_6, 0, 2,
      VAR_12->original_rf_top);
 if (VAR_13)
  return VAR_13;
 VAR_13 =
     FUNC_8(VAR_12->d,
      VAR_5,
      VAR_4, 0, 2,
      VAR_12->original_if_top);
 if (VAR_13)
  return VAR_13;
 VAR_13 =
     FUNC_8(VAR_12->d, 0xA60E, 0xA60A, 4, 2,
      VAR_12->original_aci0_if_top);
 if (VAR_13)
  return VAR_13;
 VAR_13 =
     FUNC_8(VAR_12->d, 0xA60E, 0xA60B, 6, 2,
      VAR_12->original_aci1_if_top);
 if (VAR_13)
  return VAR_13;


 FUNC_9("select bandwidth");
 VAR_13 = FUNC_1(VAR_12->d, VAR_11->bandwidth_hz);
 if (VAR_13)
  return VAR_13;
 VAR_13 = FUNC_0(VAR_12->d, VAR_11->bandwidth_hz);
 if (VAR_13)
  return VAR_13;


 FUNC_9("clear easy mode flag\n");
 VAR_13 = FUNC_5(VAR_12->d, 0xaefd, 0);
 if (VAR_13)
  return VAR_13;


 FUNC_9("set unplug threshold to original value\n");
 VAR_13 =
     FUNC_5(VAR_12->d, VAR_9,
           VAR_12->original_if_unplug_th);
 if (VAR_13)
  return VAR_13;

 FUNC_9("set tuner\n");
 VAR_13 = VAR_10->ops.tuner_ops.set_params(VAR_10);
 if (VAR_13)
  return VAR_13;


 FUNC_9("trigger ofsm\n");
 VAR_14 = 0;
 VAR_13 = FUNC_7(VAR_12->d, 0xffff, &VAR_14, 1);
 if (VAR_13)
  return VAR_13;


 FUNC_9("clear retrain and freeze flag\n");
 VAR_13 =
     FUNC_6(VAR_12->d,
           VAR_8,
           VAR_3, 2, 0);
 if (VAR_13)
  return VAR_13;


 FUNC_4(VAR_10);
 FUNC_3(VAR_10);
 VAR_12->pre_vit_error_count = 0;
 VAR_12->pre_vit_bit_count = 0;
 VAR_12->ber = 0;
 VAR_12->post_vit_error_count = 0;

 VAR_12->abort_count = 0;

 VAR_12->next_status_check = VAR_2;
 VAR_12->strong = -1;

 return 0;
}
