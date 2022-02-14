
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct omap3isp_hist_config {int cfa; int* wg; int num_regions; int hist_bins; int buf_size; TYPE_1__* region; } ;
struct ispstat {scalar_t__ state; int buf_size; scalar_t__ inc_config; int config_counter; scalar_t__ update; struct isp_device* isp; } ;
struct isp_device {int dummy; } ;
struct TYPE_2__ {int h_start; int h_end; int v_start; int v_end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;



 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (struct ispstat*) ;
 int FUNC_1 (struct isp_device*,int,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ispstat *VAR_25, void *VAR_26)
{
 struct isp_device *VAR_27 = VAR_25->isp;
 struct omap3isp_hist_config *VAR_28 = VAR_26;
 int VAR_29;
 u32 VAR_30;
 u32 VAR_31;
 u32 VAR_32[VAR_23];
 u32 VAR_33[VAR_23];

 if (!VAR_25->update || VAR_25->state == VAR_20 ||
     VAR_25->state == VAR_21)
  return;

 VAR_30 = VAR_28->cfa << VAR_2;

 VAR_31 = VAR_28->wg[0] << VAR_16;
 VAR_31 |= VAR_28->wg[1] << VAR_17;
 VAR_31 |= VAR_28->wg[2] << VAR_18;
 if (VAR_28->cfa == VAR_22)
  VAR_31 |= VAR_28->wg[3] << VAR_19;


 for (VAR_29 = 0; VAR_29 < VAR_23; VAR_29++) {
  if (VAR_29 < VAR_28->num_regions) {
   VAR_32[VAR_29] = (VAR_28->region[VAR_29].h_start <<
         VAR_14)
       | (VAR_28->region[VAR_29].h_end <<
         VAR_13);
   VAR_33[VAR_29] = (VAR_28->region[VAR_29].v_start <<
         VAR_14)
       | (VAR_28->region[VAR_29].v_end <<
         VAR_13);
  } else {
   VAR_32[VAR_29] = 0;
   VAR_33[VAR_29] = 0;
  }
 }

 VAR_30 |= VAR_28->hist_bins << VAR_1;
 switch (VAR_28->hist_bins) {
 case 129:
  VAR_30 |= (VAR_4 - 8) <<
   VAR_3;
  break;
 case 130:
  VAR_30 |= (VAR_4 - 7) <<
   VAR_3;
  break;
 case 128:
  VAR_30 |= (VAR_4 - 6) <<
   VAR_3;
  break;
 default:
  VAR_30 |= (VAR_4 - 5) <<
   VAR_3;
  break;
 }

 FUNC_0(VAR_25);

 FUNC_1(VAR_27, VAR_30, VAR_24, VAR_0);
 FUNC_1(VAR_27, VAR_31, VAR_24, VAR_15);
 FUNC_1(VAR_27, VAR_32[0], VAR_24, VAR_5);
 FUNC_1(VAR_27, VAR_33[0], VAR_24, VAR_6);
 FUNC_1(VAR_27, VAR_32[1], VAR_24, VAR_7);
 FUNC_1(VAR_27, VAR_33[1], VAR_24, VAR_8);
 FUNC_1(VAR_27, VAR_32[2], VAR_24, VAR_9);
 FUNC_1(VAR_27, VAR_33[2], VAR_24, VAR_10);
 FUNC_1(VAR_27, VAR_32[3], VAR_24, VAR_11);
 FUNC_1(VAR_27, VAR_33[3], VAR_24, VAR_12);

 VAR_25->update = 0;
 VAR_25->config_counter += VAR_25->inc_config;
 VAR_25->inc_config = 0;
 VAR_25->buf_size = VAR_28->buf_size;
}
