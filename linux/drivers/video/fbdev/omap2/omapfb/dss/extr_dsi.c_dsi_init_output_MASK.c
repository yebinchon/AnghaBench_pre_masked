
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_2__ {int * dsi; } ;
struct omap_dss_device {char* name; int owner; TYPE_1__ ops; int dispc_channel; int output_type; int id; int * dev; } ;
struct dsi_data {scalar_t__ module_id; struct omap_dss_device output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 struct dsi_data* FUNC_1 (struct platform_device*) ;
 int VAR_4 ;
 int FUNC_2 (struct omap_dss_device*) ;

__attribute__((used)) static void FUNC_3(struct platform_device *VAR_5)
{
 struct dsi_data *VAR_6 = FUNC_1(VAR_5);
 struct omap_dss_device *VAR_7 = &VAR_6->output;

 VAR_7->dev = &VAR_5->dev;
 VAR_7->id = VAR_6->module_id == 0 ?
   VAR_1 : VAR_2;

 VAR_7->output_type = VAR_0;
 VAR_7->name = VAR_6->module_id == 0 ? "dsi.0" : "dsi.1";
 VAR_7->dispc_channel = FUNC_0(VAR_6->module_id);
 VAR_7->ops.dsi = &VAR_4;
 VAR_7->owner = VAR_3;

 FUNC_2(VAR_7);
}
