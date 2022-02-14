
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {unsigned long ss_end; unsigned long ss_start; } ;
union crtc_ss_u {TYPE_4__ f; scalar_t__ val; } ;
struct w100fb_par {unsigned long hsync_len; scalar_t__ fastpll_mode; TYPE_1__* mach; struct w100_mode* mode; } ;
struct w100_mode {scalar_t__ pixclk_src; int fast_pll_freq; int pll_freq; } ;
struct TYPE_7__ {int pclk_post_div; } ;
struct TYPE_8__ {TYPE_2__ f; } ;
struct TYPE_10__ {TYPE_3__ pclk_cntl; } ;
struct TYPE_6__ {unsigned long xtal_freq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 TYPE_5__ VAR_3 ;

__attribute__((used)) static void FUNC_1(struct w100fb_par *VAR_4)
{
 unsigned long VAR_5;
 struct w100_mode *VAR_6 = VAR_4->mode;
 union crtc_ss_u VAR_7;

 if (VAR_6->pixclk_src == VAR_0)
  VAR_5=VAR_4->mach->xtal_freq;
 else
  VAR_5=((VAR_4->fastpll_mode && VAR_6->fast_pll_freq) ? VAR_6->fast_pll_freq : VAR_6->pll_freq)*100000;

 VAR_5 /= (VAR_3.pclk_cntl.f.pclk_post_div + 1);

 VAR_7.val = FUNC_0(VAR_2 + VAR_1);
 if (VAR_7.val)
  VAR_4->hsync_len = VAR_5 / (VAR_7.f.ss_end-VAR_7.f.ss_start);
 else
  VAR_4->hsync_len = 0;
}
