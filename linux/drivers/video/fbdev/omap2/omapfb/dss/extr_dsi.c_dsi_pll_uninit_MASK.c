
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct dsi_data {int vdds_dsi_enabled; int vdds_dsi_reg; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct platform_device*) ;
 struct dsi_data* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*,int ) ;
 int FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct platform_device *VAR_1, bool VAR_2)
{
 struct dsi_data *VAR_3 = FUNC_3(VAR_1);

 FUNC_4(VAR_1, VAR_0);
 if (VAR_2) {
  FUNC_1(!VAR_3->vdds_dsi_enabled);
  FUNC_6(VAR_3->vdds_dsi_reg);
  VAR_3->vdds_dsi_enabled = 0;
 }

 FUNC_2(VAR_1);
 FUNC_5(VAR_1);

 FUNC_0("PLL uninit done\n");
}
