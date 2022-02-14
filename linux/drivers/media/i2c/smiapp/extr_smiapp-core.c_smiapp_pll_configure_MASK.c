
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ smiapp_profile; } ;
struct TYPE_6__ {int sys_clk_div; int pix_clk_div; int sys_clk_freq_hz; } ;
struct TYPE_4__ {int sys_clk_div; int pix_clk_div; } ;
struct smiapp_pll {TYPE_3__ op; int pll_multiplier; int pre_pll_clk_div; TYPE_1__ vt; } ;
struct smiapp_sensor {TYPE_2__ minfo; struct smiapp_pll pll; } ;


 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct smiapp_sensor*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct smiapp_sensor *VAR_8)
{
 struct smiapp_pll *VAR_9 = &VAR_8->pll;
 int VAR_10;

 VAR_10 = FUNC_1(
  VAR_8, VAR_5, VAR_9->vt.pix_clk_div);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_1(
  VAR_8, VAR_6, VAR_9->vt.sys_clk_div);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_1(
  VAR_8, VAR_4, VAR_9->pre_pll_clk_div);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_1(
  VAR_8, VAR_3, VAR_9->pll_multiplier);
 if (VAR_10 < 0)
  return VAR_10;


 VAR_10 = FUNC_1(
  VAR_8, VAR_7,
  FUNC_0(VAR_9->op.sys_clk_freq_hz, 1000000 / 256 / 256));
 if (VAR_10 < 0 || VAR_8->minfo.smiapp_profile == VAR_0)
  return VAR_10;

 VAR_10 = FUNC_1(
  VAR_8, VAR_1, VAR_9->op.pix_clk_div);
 if (VAR_10 < 0)
  return VAR_10;

 return FUNC_1(
  VAR_8, VAR_2, VAR_9->op.sys_clk_div);
}
