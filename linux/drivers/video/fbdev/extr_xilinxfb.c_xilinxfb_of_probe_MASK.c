
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct xilinxfb_platform_data {int rotate_screen; scalar_t__ yvirt; scalar_t__ xvirt; scalar_t__ yres; scalar_t__ xres; scalar_t__ screen_height_mm; scalar_t__ screen_width_mm; } ;
struct xilinxfb_drvdata {int dcr_host; int dcr_len; int flags; } ;
struct TYPE_4__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,struct xilinxfb_drvdata*) ;
 struct xilinxfb_drvdata* FUNC_6 (TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_7 (int ,char*,int *) ;
 scalar_t__* FUNC_8 (int ,char*,int*) ;
 int FUNC_9 (int ,char*,scalar_t__*) ;
 struct xilinxfb_platform_data VAR_4 ;
 int FUNC_10 (struct platform_device*,struct xilinxfb_drvdata*,struct xilinxfb_platform_data*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_5)
{
 const u32 *VAR_6;
 u32 VAR_7 = 0;
 struct xilinxfb_platform_data VAR_8;
 int VAR_9;
 struct xilinxfb_drvdata *VAR_10;


 VAR_8 = VAR_4;


 VAR_10 = FUNC_6(&VAR_5->dev, sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_2;





 FUNC_9(VAR_5->dev.of_node, "xlnx,dcr-splb-slave-if",
        &VAR_7);





 if (VAR_7)
  VAR_10->flags |= VAR_0;
 VAR_6 = FUNC_8(VAR_5->dev.of_node, "phys-size", &VAR_9);
 if ((VAR_6) && (VAR_9 >= sizeof(u32) * 2)) {
  VAR_8.screen_width_mm = VAR_6[0];
  VAR_8.screen_height_mm = VAR_6[1];
 }

 VAR_6 = FUNC_8(VAR_5->dev.of_node, "resolution", &VAR_9);
 if ((VAR_6) && (VAR_9 >= sizeof(u32) * 2)) {
  VAR_8.xres = VAR_6[0];
  VAR_8.yres = VAR_6[1];
 }

 VAR_6 = FUNC_8(VAR_5->dev.of_node, "virtual-resolution", &VAR_9);
 if ((VAR_6) && (VAR_9 >= sizeof(u32) * 2)) {
  VAR_8.xvirt = VAR_6[0];
  VAR_8.yvirt = VAR_6[1];
 }

 if (FUNC_7(VAR_5->dev.of_node, "rotate-display", ((void*)0)))
  VAR_8.rotate_screen = 1;

 FUNC_5(&VAR_5->dev, VAR_10);
 return FUNC_10(VAR_5, VAR_10, &VAR_8);
}
