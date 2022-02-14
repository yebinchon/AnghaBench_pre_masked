
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_priv_tun_config {scalar_t__ type; int addr; scalar_t__* priv; int tuner; int mode_mask; } ;
struct tuner_setup {scalar_t__ type; int addr; scalar_t__* priv; int tuner; int mode_mask; } ;
struct TYPE_3__ {size_t type; int i2c_adap; int v4l2_dev; } ;
struct bttv {scalar_t__ tuner_type; scalar_t__ tda9887_conf; scalar_t__ has_radio; TYPE_1__ c; } ;
struct TYPE_4__ {int tuner_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct bttv*,int ,int ,struct v4l2_priv_tun_config*) ;
 TYPE_2__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *,int *,char*,int ,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct bttv *VAR_12)
{
 int VAR_13 = VAR_3;

 if (VAR_3 != VAR_8[VAR_12->c.type].tuner_addr)
  VAR_13 = VAR_8[VAR_12->c.type].tuner_addr;

 if (VAR_12->tuner_type != VAR_4) {
  struct tuner_setup VAR_14;


  if (VAR_12->has_radio)
   FUNC_1(&VAR_12->c.v4l2_dev,
    &VAR_12->c.i2c_adap, "tuner",
    0, FUNC_2(VAR_1));
  FUNC_1(&VAR_12->c.v4l2_dev,
    &VAR_12->c.i2c_adap, "tuner",
    0, FUNC_2(VAR_0));
  FUNC_1(&VAR_12->c.v4l2_dev,
    &VAR_12->c.i2c_adap, "tuner",
    0, FUNC_2(VAR_2));

  VAR_14.mode_mask = VAR_6;
  VAR_14.type = VAR_12->tuner_type;
  VAR_14.addr = VAR_13;

  if (VAR_12->has_radio)
   VAR_14.mode_mask |= VAR_7;

  FUNC_0(VAR_12, VAR_11, VAR_10, &VAR_14);
 }

 if (VAR_12->tda9887_conf) {
  struct v4l2_priv_tun_config VAR_15;

  VAR_15.tuner = VAR_5;
  VAR_15.priv = &VAR_12->tda9887_conf;

  FUNC_0(VAR_12, VAR_11, VAR_9, &VAR_15);
 }
}
