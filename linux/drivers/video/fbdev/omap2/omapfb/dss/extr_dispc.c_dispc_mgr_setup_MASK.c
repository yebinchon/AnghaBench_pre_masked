
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_overlay_manager_info {int cpr_coefs; int cpr_enable; int partial_alpha_enabled; int trans_enabled; int trans_key; int trans_key_type; int default_color; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;

void FUNC_7(enum omap_channel VAR_1,
  const struct omap_overlay_manager_info *VAR_2)
{
 FUNC_4(VAR_1, VAR_2->default_color);
 FUNC_5(VAR_1, VAR_2->trans_key_type, VAR_2->trans_key);
 FUNC_2(VAR_1, VAR_2->trans_enabled);
 FUNC_0(VAR_1,
   VAR_2->partial_alpha_enabled);
 if (FUNC_6(VAR_0)) {
  FUNC_1(VAR_1, VAR_2->cpr_enable);
  FUNC_3(VAR_1, &VAR_2->cpr_coefs);
 }
}
