
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_overlay_manager_info {scalar_t__ trans_key_type; scalar_t__ trans_enabled; scalar_t__ partial_alpha_enabled; } ;
struct omap_overlay_manager {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;

int FUNC_2(struct omap_overlay_manager *VAR_3,
  const struct omap_overlay_manager_info *VAR_4)
{
 if (FUNC_1(VAR_1)) {





  if (VAR_4->partial_alpha_enabled && VAR_4->trans_enabled
   && VAR_4->trans_key_type != VAR_2) {
   FUNC_0("check_manager: illegal transparency key\n");
   return -VAR_0;
  }
 }

 return 0;
}
