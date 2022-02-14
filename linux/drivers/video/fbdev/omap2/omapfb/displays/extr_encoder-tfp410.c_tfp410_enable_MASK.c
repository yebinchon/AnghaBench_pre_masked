
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct panel_drv_data {int pd_gpio; scalar_t__ data_lines; int timings; struct omap_dss_device* in; } ;
struct TYPE_4__ {TYPE_1__* dpi; } ;
struct omap_dss_device {int state; TYPE_2__ ops; } ;
struct TYPE_3__ {int (* enable ) (struct omap_dss_device*) ;int (* set_data_lines ) (struct omap_dss_device*,scalar_t__) ;int (* set_timings ) (struct omap_dss_device*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct omap_dss_device*) ;
 scalar_t__ FUNC_3 (struct omap_dss_device*) ;
 int FUNC_4 (struct omap_dss_device*,int *) ;
 int FUNC_5 (struct omap_dss_device*,scalar_t__) ;
 int FUNC_6 (struct omap_dss_device*) ;
 struct panel_drv_data* FUNC_7 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_8(struct omap_dss_device *VAR_2)
{
 struct panel_drv_data *VAR_3 = FUNC_7(VAR_2);
 struct omap_dss_device *VAR_4 = VAR_3->in;
 int VAR_5;

 if (!FUNC_2(VAR_2))
  return -VAR_0;

 if (FUNC_3(VAR_2))
  return 0;

 VAR_4->ops.dpi->set_timings(VAR_4, &VAR_3->timings);
 if (VAR_3->data_lines)
  VAR_4->ops.dpi->set_data_lines(VAR_4, VAR_3->data_lines);

 VAR_5 = VAR_4->ops.dpi->enable(VAR_4);
 if (VAR_5)
  return VAR_5;

 if (FUNC_0(VAR_3->pd_gpio))
  FUNC_1(VAR_3->pd_gpio, 1);

 VAR_2->state = VAR_1;

 return 0;
}
