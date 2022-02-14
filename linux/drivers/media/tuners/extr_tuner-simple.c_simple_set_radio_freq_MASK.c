
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct v4l2_priv_tun_config {int* priv; int tuner; } ;
struct tunertype {int count; struct tuner_params* params; } ;
struct TYPE_4__ {int adap; } ;
struct tuner_simple_priv {int last_div; int type; TYPE_2__ i2c_props; struct tunertype* tun; } ;
struct tuner_params {scalar_t__ type; int radio_if; scalar_t__ fm_gain_normal; scalar_t__ port1_set_for_fm_mono; scalar_t__ intercarrier_mode; int port2_fm_high_sensitivity; scalar_t__ port2_active; int port1_fm_high_sensitivity; scalar_t__ port1_active; scalar_t__ has_tda9887; scalar_t__ cb_first_if_lower_freq; TYPE_1__* ranges; } ;
struct dvb_frontend {struct tuner_simple_priv* tuner_priv; } ;
struct analog_parameters {unsigned int frequency; scalar_t__ audmode; } ;
struct TYPE_3__ {int config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ,int ,struct v4l2_priv_tun_config*) ;
 int FUNC_1 (struct dvb_frontend*,int*) ;
 int FUNC_2 (char*,int,int,int,int) ;
 int FUNC_3 (TYPE_2__*,int*,int) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_11,
     struct analog_parameters *VAR_12)
{
 struct tunertype *VAR_13;
 struct tuner_simple_priv *VAR_14 = VAR_11->tuner_priv;
 u8 VAR_15[4];
 u16 VAR_16;
 int VAR_17, VAR_18;
 struct tuner_params *VAR_19;
 unsigned int VAR_20 = VAR_12->frequency;
 bool VAR_21 = VAR_12->audmode == VAR_10;

 VAR_13 = VAR_14->tun;

 for (VAR_18 = VAR_13->count-1; VAR_18 > 0; VAR_18--)
  if (VAR_13->params[VAR_18].type == VAR_5)
   break;

 VAR_19 = &VAR_13->params[VAR_18];


 switch (VAR_19->radio_if) {
 case 0:
  VAR_20 += (unsigned int)(10.7*16000);
  break;
 case 1:
  VAR_20 += (unsigned int)(33.3*16000);
  break;
 case 2:
  VAR_20 += (unsigned int)(41.3*16000);
  break;
 default:
  FUNC_4("Unsupported radio_if value %d\n",
      VAR_19->radio_if);
  return 0;
 }

 VAR_15[2] = (VAR_19->ranges[0].config & ~VAR_6) |
      VAR_7;


 FUNC_1(VAR_11, &VAR_15[0]);




 VAR_16 = (VAR_20 + 400) / 800;

 if (VAR_19->cb_first_if_lower_freq && VAR_16 < VAR_14->last_div) {
  VAR_15[0] = VAR_15[2];
  VAR_15[1] = VAR_15[3];
  VAR_15[2] = (VAR_16>>8) & 0x7f;
  VAR_15[3] = VAR_16 & 0xff;
 } else {
  VAR_15[0] = (VAR_16>>8) & 0x7f;
  VAR_15[1] = VAR_16 & 0xff;
 }

 FUNC_2("radio 0x%02x 0x%02x 0x%02x 0x%02x\n",
        VAR_15[0], VAR_15[1], VAR_15[2], VAR_15[3]);
 VAR_14->last_div = VAR_16;

 if (VAR_19->has_tda9887) {
  int VAR_22 = 0;
  struct v4l2_priv_tun_config VAR_23;

  VAR_23.tuner = VAR_9;
  VAR_23.priv = &VAR_22;

  if (VAR_19->port1_active &&
      !VAR_19->port1_fm_high_sensitivity)
   VAR_22 |= VAR_2;
  if (VAR_19->port2_active &&
      !VAR_19->port2_fm_high_sensitivity)
   VAR_22 |= VAR_3;
  if (VAR_19->intercarrier_mode)
   VAR_22 |= VAR_1;
  if (VAR_19->port1_set_for_fm_mono && VAR_21)
   VAR_22 &= ~VAR_2;
  if (VAR_19->fm_gain_normal)
   VAR_22 |= VAR_0;
  if (VAR_19->radio_if == 2)
   VAR_22 |= VAR_4;
  FUNC_0(VAR_14->i2c_props.adap, VAR_8,
        &VAR_23);
 }
 VAR_17 = FUNC_3(&VAR_14->i2c_props, VAR_15, 4);
 if (4 != VAR_17)
  FUNC_4("i2c i/o error: rc == %d (should be 4)\n", VAR_17);


 switch (VAR_14->type) {
 case 128:
  VAR_15[2] = 0x98;
  VAR_15[3] = 0x20;
  VAR_17 = FUNC_3(&VAR_14->i2c_props, VAR_15, 4);
  if (4 != VAR_17)
   FUNC_4("i2c i/o error: rc == %d (should be 4)\n", VAR_17);
  break;
 }

 return 0;
}
