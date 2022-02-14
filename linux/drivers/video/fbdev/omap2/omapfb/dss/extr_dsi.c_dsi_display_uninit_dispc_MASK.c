
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct omap_overlay_manager {int id; } ;
struct dsi_data {scalar_t__ mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct dsi_data* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct omap_overlay_manager*,int ,struct platform_device*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct platform_device *VAR_3,
  struct omap_overlay_manager *VAR_4)
{
 struct dsi_data *VAR_5 = FUNC_0(VAR_3);

 if (VAR_5->mode == VAR_1)
  FUNC_1(VAR_4,
    VAR_2, VAR_3);

 FUNC_2(VAR_4->id, VAR_0);
}
