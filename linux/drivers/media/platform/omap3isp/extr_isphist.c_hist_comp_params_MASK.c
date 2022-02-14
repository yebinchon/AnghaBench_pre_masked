
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap3isp_hist_config {scalar_t__ cfa; scalar_t__ num_acc_frames; scalar_t__ hist_bins; scalar_t__* wg; int num_regions; TYPE_1__* region; } ;
struct ispstat {struct omap3isp_hist_config* priv; } ;
struct TYPE_2__ {scalar_t__ h_start; scalar_t__ h_end; scalar_t__ v_start; scalar_t__ v_end; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct ispstat *VAR_2,
       struct omap3isp_hist_config *VAR_3)
{
 struct omap3isp_hist_config *VAR_4 = VAR_2->priv;
 int VAR_5;

 if (VAR_4->cfa != VAR_3->cfa)
  return 1;

 if (VAR_4->num_acc_frames != VAR_3->num_acc_frames)
  return 1;

 if (VAR_4->hist_bins != VAR_3->hist_bins)
  return 1;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_5 == 3 && VAR_3->cfa == VAR_0)
   break;
  else if (VAR_4->wg[VAR_5] != VAR_3->wg[VAR_5])
   return 1;
 }

 if (VAR_4->num_regions != VAR_3->num_regions)
  return 1;


 for (VAR_5 = 0; VAR_5 < VAR_3->num_regions; VAR_5++) {
  if (VAR_4->region[VAR_5].h_start != VAR_3->region[VAR_5].h_start)
   return 1;
  if (VAR_4->region[VAR_5].h_end != VAR_3->region[VAR_5].h_end)
   return 1;
  if (VAR_4->region[VAR_5].v_start != VAR_3->region[VAR_5].v_start)
   return 1;
  if (VAR_4->region[VAR_5].v_end != VAR_3->region[VAR_5].v_end)
   return 1;
 }

 return 0;
}
