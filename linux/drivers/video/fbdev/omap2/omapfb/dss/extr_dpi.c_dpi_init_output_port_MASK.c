
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int * dpi; } ;
struct omap_dss_device {char* name; int port_num; int owner; TYPE_1__ ops; int dispc_channel; int output_type; int id; int * dev; } ;
struct dpi_data {struct omap_dss_device output; } ;
struct device_node {struct dpi_data* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (struct device_node*,char*,int*) ;
 int FUNC_2 (struct omap_dss_device*) ;

__attribute__((used)) static void FUNC_3(struct platform_device *VAR_4,
 struct device_node *VAR_5)
{
 struct dpi_data *VAR_6 = VAR_5->data;
 struct omap_dss_device *VAR_7 = &VAR_6->output;
 int VAR_8;
 u32 VAR_9;

 VAR_8 = FUNC_1(VAR_5, "reg", &VAR_9);
 if (VAR_8)
  VAR_9 = 0;

 switch (VAR_9) {
 case 2:
  VAR_7->name = "dpi.2";
  break;
 case 1:
  VAR_7->name = "dpi.1";
  break;
 case 0:
 default:
  VAR_7->name = "dpi.0";
  break;
 }

 VAR_7->dev = &VAR_4->dev;
 VAR_7->id = VAR_1;
 VAR_7->output_type = VAR_0;
 VAR_7->dispc_channel = FUNC_0(VAR_9);
 VAR_7->port_num = VAR_9;
 VAR_7->ops.dpi = &VAR_3;
 VAR_7->owner = VAR_2;

 FUNC_2(VAR_7);
}
