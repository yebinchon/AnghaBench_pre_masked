
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap3isp_hist_config {int num_acc_frames; int buf_size; } ;
struct ispstat {int update; int inc_config; int configured; struct omap3isp_hist_config* priv; } ;


 scalar_t__ FUNC_0 (struct ispstat*,struct omap3isp_hist_config*) ;
 int FUNC_1 (struct omap3isp_hist_config*) ;
 int FUNC_2 (struct omap3isp_hist_config*,struct omap3isp_hist_config*,int) ;

__attribute__((used)) static void FUNC_3(struct ispstat *VAR_0, void *VAR_1)
{
 struct omap3isp_hist_config *VAR_2 = VAR_1;
 struct omap3isp_hist_config *VAR_3 = VAR_0->priv;

 if (!VAR_0->configured || FUNC_0(VAR_0, VAR_2)) {
  FUNC_2(VAR_3, VAR_2, sizeof(*VAR_2));
  if (VAR_2->num_acc_frames == 0)
   VAR_2->num_acc_frames = 1;
  VAR_0->inc_config++;
  VAR_0->update = 1;






  VAR_3->buf_size = FUNC_1(VAR_3);

 }
}
