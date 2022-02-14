
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smiapp_pll {int pixel_rate_csi; int pixel_rate_pixel_array; int bits_per_pixel; int scale_m; int link_freq; int binning_vertical; int binning_horizontal; } ;
struct smiapp_sensor {int pixel_rate_csi; int pixel_rate_parray; TYPE_2__* csi_format; int scale_m; TYPE_1__* link_freq; int binning_vertical; int binning_horizontal; struct smiapp_pll pll; } ;
struct TYPE_4__ {int compressed; } ;
struct TYPE_3__ {size_t val; int * qmenu_int; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct smiapp_sensor*,struct smiapp_pll*) ;

__attribute__((used)) static int FUNC_2(struct smiapp_sensor *VAR_0)
{
 struct smiapp_pll *VAR_1 = &VAR_0->pll;
 int VAR_2;

 VAR_1->binning_horizontal = VAR_0->binning_horizontal;
 VAR_1->binning_vertical = VAR_0->binning_vertical;
 VAR_1->link_freq =
  VAR_0->link_freq->qmenu_int[VAR_0->link_freq->val];
 VAR_1->scale_m = VAR_0->scale_m;
 VAR_1->bits_per_pixel = VAR_0->csi_format->compressed;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 FUNC_0(VAR_0->pixel_rate_parray,
     VAR_1->pixel_rate_pixel_array);
 FUNC_0(VAR_0->pixel_rate_csi, VAR_1->pixel_rate_csi);

 return 0;
}
