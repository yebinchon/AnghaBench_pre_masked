
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct v4l2_subdev {int dummy; } ;
struct adv7343_state {int reg00; unsigned char reg02; unsigned char reg82; unsigned char reg35; TYPE_3__* pdata; } ;
struct TYPE_5__ {int* sd_dac_out; } ;
struct TYPE_4__ {int sleep_mode; int pll_control; int* dac; } ;
struct TYPE_6__ {TYPE_2__ sd_config; TYPE_1__ mode_config; } ;


 scalar_t__ VAR_0 ;
 unsigned char VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned char VAR_9 ;
 int VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 unsigned char VAR_13 ;
 unsigned char VAR_14 ;
 unsigned char VAR_15 ;
 int FUNC_0 (struct v4l2_subdev*,int ,unsigned char) ;
 int VAR_16 ;
 struct adv7343_state* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*,scalar_t__) ;
 int FUNC_3 (struct v4l2_subdev*,char*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_17, u32 VAR_18)
{
 struct adv7343_state *VAR_19 = FUNC_1(VAR_17);
 unsigned char VAR_20;
 int VAR_21 = 0;

 if (VAR_18 > VAR_8) {
  FUNC_2(1, VAR_16, VAR_17,
   "Invalid output type or output type not supported:%d\n",
        VAR_18);
  return -VAR_10;
 }


 VAR_20 = VAR_19->reg00 & 0x03;


 if (!VAR_19->pdata)
  if (VAR_18 == VAR_2)
   VAR_20 |= VAR_3;
  else if (VAR_18 == VAR_0)
   VAR_20 |= VAR_1;
  else
   VAR_20 |= VAR_9;
 else
  VAR_20 = VAR_19->pdata->mode_config.sleep_mode << 0 |
        VAR_19->pdata->mode_config.pll_control << 1 |
        VAR_19->pdata->mode_config.dac[2] << 2 |
        VAR_19->pdata->mode_config.dac[1] << 3 |
        VAR_19->pdata->mode_config.dac[0] << 4 |
        VAR_19->pdata->mode_config.dac[5] << 5 |
        VAR_19->pdata->mode_config.dac[4] << 6 |
        VAR_19->pdata->mode_config.dac[3] << 7;

 VAR_21 = FUNC_0(VAR_17, VAR_6, VAR_20);
 if (VAR_21 < 0)
  goto setoutput_exit;

 VAR_19->reg00 = VAR_20;


 VAR_20 = VAR_19->reg02 | VAR_15;
 VAR_21 = FUNC_0(VAR_17, VAR_5, VAR_20);
 if (VAR_21 < 0)
  goto setoutput_exit;

 VAR_19->reg02 = VAR_20;


 VAR_20 = VAR_19->reg82 & (VAR_13 & VAR_14);

 if (VAR_19->pdata && VAR_19->pdata->sd_config.sd_dac_out[0])
  VAR_20 = VAR_20 | (VAR_19->pdata->sd_config.sd_dac_out[0] << 1);
 else if (VAR_19->pdata && !VAR_19->pdata->sd_config.sd_dac_out[0])
  VAR_20 = VAR_20 & ~(VAR_19->pdata->sd_config.sd_dac_out[0] << 1);

 if (VAR_19->pdata && VAR_19->pdata->sd_config.sd_dac_out[1])
  VAR_20 = VAR_20 | (VAR_19->pdata->sd_config.sd_dac_out[1] << 2);
 else if (VAR_19->pdata && !VAR_19->pdata->sd_config.sd_dac_out[1])
  VAR_20 = VAR_20 & ~(VAR_19->pdata->sd_config.sd_dac_out[1] << 2);

 VAR_21 = FUNC_0(VAR_17, VAR_7, VAR_20);
 if (VAR_21 < 0)
  goto setoutput_exit;

 VAR_19->reg82 = VAR_20;



 VAR_20 = VAR_19->reg35 & (VAR_12 & VAR_11);
 VAR_21 = FUNC_0(VAR_17, VAR_4, VAR_20);
 if (VAR_21 < 0)
  goto setoutput_exit;

 VAR_19->reg35 = VAR_20;

setoutput_exit:
 if (VAR_21 != 0)
  FUNC_3(VAR_17, "Error setting output, write failed\n");

 return VAR_21;
}
