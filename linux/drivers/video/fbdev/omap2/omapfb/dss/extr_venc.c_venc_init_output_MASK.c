
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_3__ {int * atv; } ;
struct omap_dss_device {char* name; int owner; TYPE_1__ ops; int dispc_channel; int output_type; int id; int * dev; } ;
struct TYPE_4__ {struct omap_dss_device output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct omap_dss_device*) ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_1(struct platform_device *VAR_6)
{
 struct omap_dss_device *VAR_7 = &VAR_4.output;

 VAR_7->dev = &VAR_6->dev;
 VAR_7->id = VAR_2;
 VAR_7->output_type = VAR_0;
 VAR_7->name = "venc.0";
 VAR_7->dispc_channel = VAR_1;
 VAR_7->ops.atv = &VAR_5;
 VAR_7->owner = VAR_3;

 FUNC_0(VAR_7);
}
