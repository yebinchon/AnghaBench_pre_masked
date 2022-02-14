
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ width; scalar_t__ height; scalar_t__ h_start; scalar_t__ v_start; scalar_t__ h_cnt; scalar_t__ v_cnt; scalar_t__ line_inc; } ;
struct TYPE_5__ {scalar_t__ h_start; scalar_t__* coeff_set0; scalar_t__* coeff_set1; } ;
struct TYPE_4__ {scalar_t__ enable; scalar_t__ threshold; } ;
struct omap3isp_h3a_af_config {scalar_t__ alaw_enable; scalar_t__ rgb_pos; scalar_t__ fvmode; int buf_size; TYPE_3__ paxel; TYPE_2__ iir; TYPE_1__ hmf; } ;
struct ispstat {int update; int inc_config; int configured; struct omap3isp_h3a_af_config* priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct omap3isp_h3a_af_config*) ;
 int FUNC_1 (struct omap3isp_h3a_af_config*,struct omap3isp_h3a_af_config*,int) ;

__attribute__((used)) static void FUNC_2(struct ispstat *VAR_1, void *VAR_2)
{
 struct omap3isp_h3a_af_config *VAR_3 = VAR_2;
 struct omap3isp_h3a_af_config *VAR_4 = VAR_1->priv;
 int VAR_5 = 0;
 int VAR_6;


 if (VAR_4->alaw_enable != VAR_3->alaw_enable) {
  VAR_5 = 1;
  goto out;
 }


 if (VAR_4->hmf.enable != VAR_3->hmf.enable) {
  VAR_5 = 1;
  goto out;
 }
 if (VAR_4->hmf.threshold != VAR_3->hmf.threshold) {
  VAR_5 = 1;
  goto out;
 }


 if (VAR_4->rgb_pos != VAR_3->rgb_pos) {
  VAR_5 = 1;
  goto out;
 }


 if (VAR_4->iir.h_start != VAR_3->iir.h_start) {
  VAR_5 = 1;
  goto out;
 }
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_4->iir.coeff_set0[VAR_6] !=
    VAR_3->iir.coeff_set0[VAR_6]) {
   VAR_5 = 1;
   goto out;
  }
  if (VAR_4->iir.coeff_set1[VAR_6] !=
    VAR_3->iir.coeff_set1[VAR_6]) {
   VAR_5 = 1;
   goto out;
  }
 }


 if ((VAR_4->paxel.width != VAR_3->paxel.width) ||
     (VAR_4->paxel.height != VAR_3->paxel.height) ||
     (VAR_4->paxel.h_start != VAR_3->paxel.h_start) ||
     (VAR_4->paxel.v_start != VAR_3->paxel.v_start) ||
     (VAR_4->paxel.h_cnt != VAR_3->paxel.h_cnt) ||
     (VAR_4->paxel.v_cnt != VAR_3->paxel.v_cnt) ||
     (VAR_4->paxel.line_inc != VAR_3->paxel.line_inc)) {
  VAR_5 = 1;
  goto out;
 }


 if (VAR_4->fvmode != VAR_3->fvmode)
  VAR_5 = 1;

out:
 if (VAR_5 || !VAR_1->configured) {
  FUNC_1(VAR_4, VAR_3, sizeof(*VAR_4));
  VAR_1->inc_config++;
  VAR_1->update = 1;






  VAR_4->buf_size = FUNC_0(VAR_4);
 }
}
