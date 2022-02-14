
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pix_clk_freq_hz; int sys_clk_freq_hz; int pix_clk_div; int sys_clk_div; } ;
struct TYPE_3__ {int pix_clk_freq_hz; int sys_clk_freq_hz; int pix_clk_div; int sys_clk_div; } ;
struct smiapp_pll {int flags; TYPE_2__ vt; TYPE_1__ op; int pll_op_clk_freq_hz; int pll_ip_clk_freq_hz; int ext_clk_freq_hz; int pll_multiplier; int pre_pll_clk_div; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int ) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_1, struct smiapp_pll *VAR_2)
{
 FUNC_0(VAR_1, "pre_pll_clk_div\t%u\n", VAR_2->pre_pll_clk_div);
 FUNC_0(VAR_1, "pll_multiplier \t%u\n", VAR_2->pll_multiplier);
 if (!(VAR_2->flags & VAR_0)) {
  FUNC_0(VAR_1, "op_sys_clk_div \t%u\n", VAR_2->op.sys_clk_div);
  FUNC_0(VAR_1, "op_pix_clk_div \t%u\n", VAR_2->op.pix_clk_div);
 }
 FUNC_0(VAR_1, "vt_sys_clk_div \t%u\n", VAR_2->vt.sys_clk_div);
 FUNC_0(VAR_1, "vt_pix_clk_div \t%u\n", VAR_2->vt.pix_clk_div);

 FUNC_0(VAR_1, "ext_clk_freq_hz \t%u\n", VAR_2->ext_clk_freq_hz);
 FUNC_0(VAR_1, "pll_ip_clk_freq_hz \t%u\n", VAR_2->pll_ip_clk_freq_hz);
 FUNC_0(VAR_1, "pll_op_clk_freq_hz \t%u\n", VAR_2->pll_op_clk_freq_hz);
 if (!(VAR_2->flags & VAR_0)) {
  FUNC_0(VAR_1, "op_sys_clk_freq_hz \t%u\n",
   VAR_2->op.sys_clk_freq_hz);
  FUNC_0(VAR_1, "op_pix_clk_freq_hz \t%u\n",
   VAR_2->op.pix_clk_freq_hz);
 }
 FUNC_0(VAR_1, "vt_sys_clk_freq_hz \t%u\n", VAR_2->vt.sys_clk_freq_hz);
 FUNC_0(VAR_1, "vt_pix_clk_freq_hz \t%u\n", VAR_2->vt.pix_clk_freq_hz);
}
