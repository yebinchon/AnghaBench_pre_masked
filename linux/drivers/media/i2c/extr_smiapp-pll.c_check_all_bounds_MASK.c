
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int max_pix_clk_freq_hz; int min_pix_clk_freq_hz; int max_sys_clk_freq_hz; int min_sys_clk_freq_hz; } ;
struct smiapp_pll_limits {TYPE_2__ vt; int max_pll_op_freq_hz; int min_pll_op_freq_hz; int max_pll_multiplier; int min_pll_multiplier; int max_pll_ip_freq_hz; int min_pll_ip_freq_hz; } ;
struct smiapp_pll_branch_limits {int max_pix_clk_freq_hz; int min_pix_clk_freq_hz; int max_sys_clk_freq_hz; int min_sys_clk_freq_hz; int max_sys_clk_div; int min_sys_clk_div; } ;
struct smiapp_pll_branch {int pix_clk_freq_hz; int sys_clk_freq_hz; int sys_clk_div; } ;
struct TYPE_3__ {int pix_clk_freq_hz; int sys_clk_freq_hz; } ;
struct smiapp_pll {int flags; TYPE_1__ vt; int pll_op_clk_freq_hz; int pll_multiplier; int pll_ip_clk_freq_hz; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ,int ,int ,char*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_1,
       const struct smiapp_pll_limits *VAR_2,
       const struct smiapp_pll_branch_limits *VAR_3,
       struct smiapp_pll *VAR_4,
       struct smiapp_pll_branch *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1, VAR_4->pll_ip_clk_freq_hz,
       VAR_2->min_pll_ip_freq_hz,
       VAR_2->max_pll_ip_freq_hz,
       "pll_ip_clk_freq_hz");
 if (!VAR_6)
  VAR_6 = FUNC_0(
   VAR_1, VAR_4->pll_multiplier,
   VAR_2->min_pll_multiplier, VAR_2->max_pll_multiplier,
   "pll_multiplier");
 if (!VAR_6)
  VAR_6 = FUNC_0(
   VAR_1, VAR_4->pll_op_clk_freq_hz,
   VAR_2->min_pll_op_freq_hz, VAR_2->max_pll_op_freq_hz,
   "pll_op_clk_freq_hz");
 if (!VAR_6)
  VAR_6 = FUNC_0(
   VAR_1, VAR_5->sys_clk_div,
   VAR_3->min_sys_clk_div, VAR_3->max_sys_clk_div,
   "op_sys_clk_div");
 if (!VAR_6)
  VAR_6 = FUNC_0(
   VAR_1, VAR_5->sys_clk_freq_hz,
   VAR_3->min_sys_clk_freq_hz,
   VAR_3->max_sys_clk_freq_hz,
   "op_sys_clk_freq_hz");
 if (!VAR_6)
  VAR_6 = FUNC_0(
   VAR_1, VAR_5->pix_clk_freq_hz,
   VAR_3->min_pix_clk_freq_hz,
   VAR_3->max_pix_clk_freq_hz,
   "op_pix_clk_freq_hz");





 if (VAR_4->flags & VAR_0)
  return VAR_6;

 if (!VAR_6)
  VAR_6 = FUNC_0(
   VAR_1, VAR_4->vt.sys_clk_freq_hz,
   VAR_2->vt.min_sys_clk_freq_hz,
   VAR_2->vt.max_sys_clk_freq_hz,
   "vt_sys_clk_freq_hz");
 if (!VAR_6)
  VAR_6 = FUNC_0(
   VAR_1, VAR_4->vt.pix_clk_freq_hz,
   VAR_2->vt.min_pix_clk_freq_hz,
   VAR_2->vt.max_pix_clk_freq_hz,
   "vt_pix_clk_freq_hz");

 return VAR_6;
}
