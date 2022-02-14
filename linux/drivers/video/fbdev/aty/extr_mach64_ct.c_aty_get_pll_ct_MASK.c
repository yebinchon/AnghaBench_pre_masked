
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vclk_post_div; int pll_ext_cntl; int vclk_fb_div; int pll_ref_div; int mclk_fb_div; int pll_gen_cntl; int pll_vclk_cntl; void* dsp_on_off; void* dsp_config; } ;
union aty_pll {TYPE_1__ ct; } ;
typedef int u8 ;
struct fb_info {scalar_t__ par; } ;
struct atyfb_par {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int ,struct atyfb_par*) ;
 void* FUNC_2 (int ,struct atyfb_par*) ;
 int FUNC_3 (scalar_t__,struct atyfb_par*) ;

__attribute__((used)) static void FUNC_4(const struct fb_info *VAR_11, union aty_pll *VAR_12)
{
 struct atyfb_par *VAR_13 = (struct atyfb_par *) VAR_11->par;
 u8 VAR_14, VAR_15;

 VAR_15 = FUNC_1(VAR_0, VAR_13) & 0x03U;
 VAR_14 = VAR_15 << 1;
 VAR_12->ct.vclk_post_div = (FUNC_3(VAR_10, VAR_13) >> VAR_14) & 0x03U;

 VAR_12->ct.pll_ext_cntl = FUNC_3(VAR_5, VAR_13) & 0x0FU;
 VAR_12->ct.vclk_fb_div = FUNC_3(VAR_9 + VAR_15, VAR_13) & 0xFFU;
 VAR_12->ct.pll_ref_div = FUNC_3(VAR_7, VAR_13);
 VAR_12->ct.mclk_fb_div = FUNC_3(VAR_4, VAR_13);

 VAR_12->ct.pll_gen_cntl = FUNC_3(VAR_6, VAR_13);
 VAR_12->ct.pll_vclk_cntl = FUNC_3(VAR_8, VAR_13);

 if (FUNC_0(VAR_3)) {
  VAR_12->ct.dsp_config = FUNC_2(VAR_1, VAR_13);
  VAR_12->ct.dsp_on_off = FUNC_2(VAR_2, VAR_13);
 }
}
