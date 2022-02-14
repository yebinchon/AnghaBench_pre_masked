
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct platform_device {int dummy; } ;
struct omap_dss_device {int dummy; } ;
struct TYPE_2__ {int x_res; int y_res; } ;
struct dsi_data {int update_channel; void (* framedone_callback ) (int,void*) ;int update_bytes; int pix_fmt; TYPE_1__ timings; void* framedone_data; } ;


 struct platform_device* FUNC_0 (struct omap_dss_device*) ;
 struct dsi_data* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct omap_dss_device *VAR_0, int VAR_1,
  void (*VAR_2)(int, void *), void *VAR_3)
{
 struct platform_device *VAR_4 = FUNC_0(VAR_0);
 struct dsi_data *VAR_5 = FUNC_1(VAR_4);
 u16 VAR_6, VAR_7;

 FUNC_3(VAR_4);

 VAR_5->update_channel = VAR_1;

 VAR_5->framedone_callback = VAR_2;
 VAR_5->framedone_data = VAR_3;

 VAR_6 = VAR_5->timings.x_res;
 VAR_7 = VAR_5->timings.y_res;





 FUNC_4(VAR_4);

 return 0;
}
