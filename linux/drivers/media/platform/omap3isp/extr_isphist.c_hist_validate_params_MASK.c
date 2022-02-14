
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct omap3isp_hist_config {scalar_t__ cfa; int num_regions; scalar_t__ buf_size; int hist_bins; TYPE_1__* region; } ;
struct ispstat {int dummy; } ;
struct TYPE_2__ {int h_start; int h_end; int v_start; int v_end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct omap3isp_hist_config*) ;

__attribute__((used)) static int FUNC_1(struct ispstat *VAR_9, void *VAR_10)
{
 struct omap3isp_hist_config *VAR_11 = VAR_10;
 int VAR_12;
 u32 VAR_13;

 if (VAR_11->cfa > VAR_5)
  return -VAR_0;



 if ((VAR_11->num_regions < VAR_8) ||
     (VAR_11->num_regions > VAR_7))
  return -VAR_0;


 for (VAR_12 = 0; VAR_12 < VAR_11->num_regions; VAR_12++) {
  if (VAR_11->region[VAR_12].h_start & ~VAR_1)
   return -VAR_0;
  if (VAR_11->region[VAR_12].h_end & ~VAR_1)
   return -VAR_0;
  if (VAR_11->region[VAR_12].v_start & ~VAR_1)
   return -VAR_0;
  if (VAR_11->region[VAR_12].v_end & ~VAR_1)
   return -VAR_0;
  if (VAR_11->region[VAR_12].h_start > VAR_11->region[VAR_12].h_end)
   return -VAR_0;
  if (VAR_11->region[VAR_12].v_start > VAR_11->region[VAR_12].v_end)
   return -VAR_0;
 }

 switch (VAR_11->num_regions) {
 case 1:
  if (VAR_11->hist_bins > VAR_3)
   return -VAR_0;
  break;
 case 2:
  if (VAR_11->hist_bins > VAR_2)
   return -VAR_0;
  break;
 default:
  if (VAR_11->hist_bins > VAR_4)
   return -VAR_0;
  break;
 }

 VAR_13 = FUNC_0(VAR_11);
 if (VAR_13 > VAR_11->buf_size)

  VAR_11->buf_size = VAR_13;
 else if (VAR_11->buf_size > VAR_6)
  VAR_11->buf_size = VAR_6;

 return 0;
}
