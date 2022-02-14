
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint ;
typedef int u16 ;
struct ssb_sprom {int bw40po; int cddpo; int stbcpo; int bwduppo; int * mcs5ghpo; int ofdm5ghpo; TYPE_4__* core_pwr_info; int * mcs5glpo; int ofdm5glpo; int * mcs5gpo; int ofdm5gpo; int * mcs2gpo; int ofdm2gpo; int cck2gpo; } ;
struct brcms_phy {int bw402gpo; int bw405gpo; int bw405glpo; int bw405ghpo; int cdd2gpo; int cdd5gpo; int cdd5glpo; int cdd5ghpo; int stbc2gpo; int stbc5gpo; int stbc5glpo; int stbc5ghpo; int bwdup2gpo; int bwdup5gpo; int bwdup5glpo; int bwdup5ghpo; int * mcs5ghpo; int ofdm5ghpo; TYPE_5__* nphy_pwrctrl_info; int * mcs5glpo; int ofdm5glpo; int * mcs5gpo; int ofdm5gpo; int * mcs2gpo; int ofdm2gpo; int cck2gpo; TYPE_3__* sh; TYPE_2__* d11core; } ;
struct TYPE_10__ {int idle_targ_5gh; int pwrdet_5gh_b1; int pwrdet_5gh_b0; int pwrdet_5gh_a1; int max_pwr_5gh; int idle_targ_5gl; int pwrdet_5gl_b1; int pwrdet_5gl_b0; int pwrdet_5gl_a1; int max_pwr_5gl; int idle_targ_5gm; int pwrdet_5gm_b1; int pwrdet_5gm_b0; int pwrdet_5gm_a1; int max_pwr_5gm; int idle_targ_2g; int pwrdet_2g_b1; int pwrdet_2g_b0; int pwrdet_2g_a1; int max_pwr_2g; } ;
struct TYPE_9__ {int * pa_5gh; int maxpwr_5gh; int * pa_5gl; int maxpwr_5gl; int itssi_5g; int * pa_5g; int maxpwr_5g; int itssi_2g; int * pa_2g; int maxpwr_2g; } ;
struct TYPE_8__ {int sromrev; } ;
struct TYPE_7__ {TYPE_1__* bus; } ;
struct TYPE_6__ {struct ssb_sprom sprom; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct brcms_phy*) ;

__attribute__((used)) static void FUNC_1(struct brcms_phy *VAR_4)
{
 u16 VAR_5, VAR_6, VAR_7, VAR_8;
 uint VAR_9;
 struct ssb_sprom *VAR_10 = &VAR_4->d11core->bus->sprom;

 if (VAR_4->sh->sromrev >= 9)
  return;

 VAR_5 = VAR_10->bw40po;
 VAR_4->bw402gpo = VAR_5 & 0xf;
 VAR_4->bw405gpo = (VAR_5 & 0xf0) >> 4;
 VAR_4->bw405glpo = (VAR_5 & 0xf00) >> 8;
 VAR_4->bw405ghpo = (VAR_5 & 0xf000) >> 12;

 VAR_6 = VAR_10->cddpo;
 VAR_4->cdd2gpo = VAR_6 & 0xf;
 VAR_4->cdd5gpo = (VAR_6 & 0xf0) >> 4;
 VAR_4->cdd5glpo = (VAR_6 & 0xf00) >> 8;
 VAR_4->cdd5ghpo = (VAR_6 & 0xf000) >> 12;

 VAR_7 = VAR_10->stbcpo;
 VAR_4->stbc2gpo = VAR_7 & 0xf;
 VAR_4->stbc5gpo = (VAR_7 & 0xf0) >> 4;
 VAR_4->stbc5glpo = (VAR_7 & 0xf00) >> 8;
 VAR_4->stbc5ghpo = (VAR_7 & 0xf000) >> 12;

 VAR_8 = VAR_10->bwduppo;
 VAR_4->bwdup2gpo = VAR_8 & 0xf;
 VAR_4->bwdup5gpo = (VAR_8 & 0xf0) >> 4;
 VAR_4->bwdup5glpo = (VAR_8 & 0xf00) >> 8;
 VAR_4->bwdup5ghpo = (VAR_8 & 0xf000) >> 12;

 for (VAR_9 = 0; VAR_9 < (VAR_0 + VAR_1);
      VAR_9++) {
  switch (VAR_9) {
  case 0:
   VAR_4->nphy_pwrctrl_info[VAR_2].max_pwr_2g =
    VAR_10->core_pwr_info[0].maxpwr_2g;
   VAR_4->nphy_pwrctrl_info[VAR_3].max_pwr_2g =
    VAR_10->core_pwr_info[1].maxpwr_2g;
   VAR_4->nphy_pwrctrl_info[VAR_2].pwrdet_2g_a1 =
    VAR_10->core_pwr_info[0].pa_2g[0];
   VAR_4->nphy_pwrctrl_info[VAR_3].pwrdet_2g_a1 =
    VAR_10->core_pwr_info[1].pa_2g[0];
   VAR_4->nphy_pwrctrl_info[VAR_2].pwrdet_2g_b0 =
    VAR_10->core_pwr_info[0].pa_2g[1];
   VAR_4->nphy_pwrctrl_info[VAR_3].pwrdet_2g_b0 =
    VAR_10->core_pwr_info[1].pa_2g[1];
   VAR_4->nphy_pwrctrl_info[VAR_2].pwrdet_2g_b1 =
    VAR_10->core_pwr_info[0].pa_2g[2];
   VAR_4->nphy_pwrctrl_info[VAR_3].pwrdet_2g_b1 =
    VAR_10->core_pwr_info[1].pa_2g[2];
   VAR_4->nphy_pwrctrl_info[VAR_2].idle_targ_2g =
    VAR_10->core_pwr_info[0].itssi_2g;
   VAR_4->nphy_pwrctrl_info[VAR_3].idle_targ_2g =
    VAR_10->core_pwr_info[1].itssi_2g;

   VAR_4->cck2gpo = VAR_10->cck2gpo;

   VAR_4->ofdm2gpo = VAR_10->ofdm2gpo;

   VAR_4->mcs2gpo[0] = VAR_10->mcs2gpo[0];
   VAR_4->mcs2gpo[1] = VAR_10->mcs2gpo[1];
   VAR_4->mcs2gpo[2] = VAR_10->mcs2gpo[2];
   VAR_4->mcs2gpo[3] = VAR_10->mcs2gpo[3];
   VAR_4->mcs2gpo[4] = VAR_10->mcs2gpo[4];
   VAR_4->mcs2gpo[5] = VAR_10->mcs2gpo[5];
   VAR_4->mcs2gpo[6] = VAR_10->mcs2gpo[6];
   VAR_4->mcs2gpo[7] = VAR_10->mcs2gpo[7];
   break;
  case 1:

   VAR_4->nphy_pwrctrl_info[VAR_2].max_pwr_5gm =
    VAR_10->core_pwr_info[0].maxpwr_5g;
   VAR_4->nphy_pwrctrl_info[VAR_3].max_pwr_5gm =
    VAR_10->core_pwr_info[1].maxpwr_5g;
   VAR_4->nphy_pwrctrl_info[VAR_2].pwrdet_5gm_a1 =
    VAR_10->core_pwr_info[0].pa_5g[0];
   VAR_4->nphy_pwrctrl_info[VAR_3].pwrdet_5gm_a1 =
    VAR_10->core_pwr_info[1].pa_5g[0];
   VAR_4->nphy_pwrctrl_info[VAR_2].pwrdet_5gm_b0 =
    VAR_10->core_pwr_info[0].pa_5g[1];
   VAR_4->nphy_pwrctrl_info[VAR_3].pwrdet_5gm_b0 =
    VAR_10->core_pwr_info[1].pa_5g[1];
   VAR_4->nphy_pwrctrl_info[VAR_2].pwrdet_5gm_b1 =
    VAR_10->core_pwr_info[0].pa_5g[2];
   VAR_4->nphy_pwrctrl_info[VAR_3].pwrdet_5gm_b1 =
    VAR_10->core_pwr_info[1].pa_5g[2];
   VAR_4->nphy_pwrctrl_info[VAR_2].idle_targ_5gm =
    VAR_10->core_pwr_info[0].itssi_5g;
   VAR_4->nphy_pwrctrl_info[VAR_3].idle_targ_5gm =
    VAR_10->core_pwr_info[1].itssi_5g;

   VAR_4->ofdm5gpo = VAR_10->ofdm5gpo;

   VAR_4->mcs5gpo[0] = VAR_10->mcs5gpo[0];
   VAR_4->mcs5gpo[1] = VAR_10->mcs5gpo[1];
   VAR_4->mcs5gpo[2] = VAR_10->mcs5gpo[2];
   VAR_4->mcs5gpo[3] = VAR_10->mcs5gpo[3];
   VAR_4->mcs5gpo[4] = VAR_10->mcs5gpo[4];
   VAR_4->mcs5gpo[5] = VAR_10->mcs5gpo[5];
   VAR_4->mcs5gpo[6] = VAR_10->mcs5gpo[6];
   VAR_4->mcs5gpo[7] = VAR_10->mcs5gpo[7];
   break;
  case 2:

   VAR_4->nphy_pwrctrl_info[0].max_pwr_5gl =
    VAR_10->core_pwr_info[0].maxpwr_5gl;
   VAR_4->nphy_pwrctrl_info[1].max_pwr_5gl =
    VAR_10->core_pwr_info[1].maxpwr_5gl;
   VAR_4->nphy_pwrctrl_info[0].pwrdet_5gl_a1 =
    VAR_10->core_pwr_info[0].pa_5gl[0];
   VAR_4->nphy_pwrctrl_info[1].pwrdet_5gl_a1 =
    VAR_10->core_pwr_info[1].pa_5gl[0];
   VAR_4->nphy_pwrctrl_info[0].pwrdet_5gl_b0 =
    VAR_10->core_pwr_info[0].pa_5gl[1];
   VAR_4->nphy_pwrctrl_info[1].pwrdet_5gl_b0 =
    VAR_10->core_pwr_info[1].pa_5gl[1];
   VAR_4->nphy_pwrctrl_info[0].pwrdet_5gl_b1 =
    VAR_10->core_pwr_info[0].pa_5gl[2];
   VAR_4->nphy_pwrctrl_info[1].pwrdet_5gl_b1 =
    VAR_10->core_pwr_info[1].pa_5gl[2];
   VAR_4->nphy_pwrctrl_info[0].idle_targ_5gl = 0;
   VAR_4->nphy_pwrctrl_info[1].idle_targ_5gl = 0;

   VAR_4->ofdm5glpo = VAR_10->ofdm5glpo;

   VAR_4->mcs5glpo[0] = VAR_10->mcs5glpo[0];
   VAR_4->mcs5glpo[1] = VAR_10->mcs5glpo[1];
   VAR_4->mcs5glpo[2] = VAR_10->mcs5glpo[2];
   VAR_4->mcs5glpo[3] = VAR_10->mcs5glpo[3];
   VAR_4->mcs5glpo[4] = VAR_10->mcs5glpo[4];
   VAR_4->mcs5glpo[5] = VAR_10->mcs5glpo[5];
   VAR_4->mcs5glpo[6] = VAR_10->mcs5glpo[6];
   VAR_4->mcs5glpo[7] = VAR_10->mcs5glpo[7];
   break;
  case 3:

   VAR_4->nphy_pwrctrl_info[0].max_pwr_5gh =
    VAR_10->core_pwr_info[0].maxpwr_5gh;
   VAR_4->nphy_pwrctrl_info[1].max_pwr_5gh =
    VAR_10->core_pwr_info[1].maxpwr_5gh;
   VAR_4->nphy_pwrctrl_info[0].pwrdet_5gh_a1 =
    VAR_10->core_pwr_info[0].pa_5gh[0];
   VAR_4->nphy_pwrctrl_info[1].pwrdet_5gh_a1 =
    VAR_10->core_pwr_info[1].pa_5gh[0];
   VAR_4->nphy_pwrctrl_info[0].pwrdet_5gh_b0 =
    VAR_10->core_pwr_info[0].pa_5gh[1];
   VAR_4->nphy_pwrctrl_info[1].pwrdet_5gh_b0 =
    VAR_10->core_pwr_info[1].pa_5gh[1];
   VAR_4->nphy_pwrctrl_info[0].pwrdet_5gh_b1 =
    VAR_10->core_pwr_info[0].pa_5gh[2];
   VAR_4->nphy_pwrctrl_info[1].pwrdet_5gh_b1 =
    VAR_10->core_pwr_info[1].pa_5gh[2];
   VAR_4->nphy_pwrctrl_info[0].idle_targ_5gh = 0;
   VAR_4->nphy_pwrctrl_info[1].idle_targ_5gh = 0;

   VAR_4->ofdm5ghpo = VAR_10->ofdm5ghpo;

   VAR_4->mcs5ghpo[0] = VAR_10->mcs5ghpo[0];
   VAR_4->mcs5ghpo[1] = VAR_10->mcs5ghpo[1];
   VAR_4->mcs5ghpo[2] = VAR_10->mcs5ghpo[2];
   VAR_4->mcs5ghpo[3] = VAR_10->mcs5ghpo[3];
   VAR_4->mcs5ghpo[4] = VAR_10->mcs5ghpo[4];
   VAR_4->mcs5ghpo[5] = VAR_10->mcs5ghpo[5];
   VAR_4->mcs5ghpo[6] = VAR_10->mcs5ghpo[6];
   VAR_4->mcs5ghpo[7] = VAR_10->mcs5ghpo[7];
   break;
  }
 }

 FUNC_0(VAR_4);
}
