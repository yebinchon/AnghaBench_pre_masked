
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ext_vpll_cntl; int pll_ext_cntl; int mclk_fb_div; int pll_gen_cntl; int pll_ref_div; int spll_cntl2; int sclk_fb_div; } ;
union aty_pll {TYPE_1__ ct; } ;
struct fb_info {struct atyfb_par* par; } ;
struct atyfb_par {scalar_t__ mclk_per; scalar_t__ xclk_per; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,struct atyfb_par*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(const struct fb_info *VAR_7,
         union aty_pll *VAR_8)
{
 struct atyfb_par *VAR_9 = VAR_7->par;

 if (VAR_9->mclk_per != VAR_9->xclk_per) {







  FUNC_0(VAR_5, VAR_8->ct.sclk_fb_div, VAR_9);
  FUNC_0(VAR_6, VAR_8->ct.spll_cntl2, VAR_9);




  FUNC_1(5);
 }

 FUNC_0(VAR_4, VAR_8->ct.pll_ref_div, VAR_9);
 FUNC_0(VAR_3, VAR_8->ct.pll_gen_cntl, VAR_9);
 FUNC_0(VAR_1, VAR_8->ct.mclk_fb_div, VAR_9);
 FUNC_0(VAR_2, VAR_8->ct.pll_ext_cntl, VAR_9);
 FUNC_0(VAR_0, VAR_8->ct.ext_vpll_cntl, VAR_9);
}
