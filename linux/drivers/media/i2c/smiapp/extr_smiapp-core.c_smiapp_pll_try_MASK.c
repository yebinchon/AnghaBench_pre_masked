
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct smiapp_sensor {int * limits; TYPE_1__* src; } ;
struct TYPE_6__ {int max_pix_clk_freq_hz; int min_pix_clk_freq_hz; int max_sys_clk_freq_hz; int min_sys_clk_freq_hz; int max_pix_clk_div; int min_pix_clk_div; int max_sys_clk_div; int min_sys_clk_div; } ;
struct TYPE_5__ {int max_pix_clk_freq_hz; int min_pix_clk_freq_hz; int max_sys_clk_freq_hz; int min_sys_clk_freq_hz; int max_pix_clk_div; int min_pix_clk_div; int max_sys_clk_div; int min_sys_clk_div; } ;
struct smiapp_pll_limits {int min_line_length_pck; int min_line_length_pck_bin; TYPE_3__ vt; TYPE_2__ op; int max_pll_op_freq_hz; int min_pll_op_freq_hz; int max_pll_multiplier; int min_pll_multiplier; int max_pll_ip_freq_hz; int min_pll_ip_freq_hz; int max_pre_pll_clk_div; int min_pre_pll_clk_div; } ;
struct smiapp_pll {int dummy; } ;
struct i2c_client {int dev; } ;
struct TYPE_4__ {int sd; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 int FUNC_0 (int *,struct smiapp_pll_limits*,struct smiapp_pll*) ;
 struct i2c_client* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct smiapp_sensor *VAR_26,
     struct smiapp_pll *VAR_27)
{
 struct i2c_client *VAR_28 = FUNC_1(&VAR_26->src->sd);
 struct smiapp_pll_limits VAR_29 = {
  .min_pre_pll_clk_div = VAR_26->limits[VAR_21],
  .max_pre_pll_clk_div = VAR_26->limits[VAR_7],
  .min_pll_ip_freq_hz = VAR_26->limits[VAR_18],
  .max_pll_ip_freq_hz = VAR_26->limits[VAR_4],
  .min_pll_multiplier = VAR_26->limits[VAR_19],
  .max_pll_multiplier = VAR_26->limits[VAR_5],
  .min_pll_op_freq_hz = VAR_26->limits[VAR_20],
  .max_pll_op_freq_hz = VAR_26->limits[VAR_6],

  .op.min_sys_clk_div = VAR_26->limits[VAR_16],
  .op.max_sys_clk_div = VAR_26->limits[VAR_2],
  .op.min_pix_clk_div = VAR_26->limits[VAR_14],
  .op.max_pix_clk_div = VAR_26->limits[VAR_0],
  .op.min_sys_clk_freq_hz = VAR_26->limits[VAR_17],
  .op.max_sys_clk_freq_hz = VAR_26->limits[VAR_3],
  .op.min_pix_clk_freq_hz = VAR_26->limits[VAR_15],
  .op.max_pix_clk_freq_hz = VAR_26->limits[VAR_1],

  .vt.min_sys_clk_div = VAR_26->limits[VAR_24],
  .vt.max_sys_clk_div = VAR_26->limits[VAR_10],
  .vt.min_pix_clk_div = VAR_26->limits[VAR_22],
  .vt.max_pix_clk_div = VAR_26->limits[VAR_8],
  .vt.min_sys_clk_freq_hz = VAR_26->limits[VAR_25],
  .vt.max_sys_clk_freq_hz = VAR_26->limits[VAR_11],
  .vt.min_pix_clk_freq_hz = VAR_26->limits[VAR_23],
  .vt.max_pix_clk_freq_hz = VAR_26->limits[VAR_9],

  .min_line_length_pck_bin = VAR_26->limits[VAR_13],
  .min_line_length_pck = VAR_26->limits[VAR_12],
 };

 return FUNC_0(&VAR_28->dev, &VAR_29, VAR_27);
}
