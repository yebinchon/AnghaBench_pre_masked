
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_2__ {int * dpi; } ;
struct omap_dss_device {char* name; int owner; TYPE_1__ ops; int dispc_channel; int output_type; int id; int * dev; } ;
struct dpi_data {struct omap_dss_device output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct dpi_data* FUNC_1 (struct platform_device*) ;
 int VAR_3 ;
 int FUNC_2 (struct omap_dss_device*) ;

__attribute__((used)) static void FUNC_3(struct platform_device *VAR_4)
{
 struct dpi_data *VAR_5 = FUNC_1(VAR_4);
 struct omap_dss_device *VAR_6 = &VAR_5->output;

 VAR_6->dev = &VAR_4->dev;
 VAR_6->id = VAR_1;
 VAR_6->output_type = VAR_0;
 VAR_6->name = "dpi.0";
 VAR_6->dispc_channel = FUNC_0(0);
 VAR_6->ops.dpi = &VAR_3;
 VAR_6->owner = VAR_2;

 FUNC_2(VAR_6);
}
