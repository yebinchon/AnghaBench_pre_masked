
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_overlay_manager_info {int dummy; } ;
struct omap_overlay_manager {int dummy; } ;
struct mgr_priv_data {struct omap_overlay_manager_info user_info; } ;


 int VAR_0 ;
 struct mgr_priv_data* FUNC_0 (struct omap_overlay_manager*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct omap_overlay_manager *VAR_1,
  struct omap_overlay_manager_info *VAR_2)
{
 struct mgr_priv_data *VAR_3 = FUNC_0(VAR_1);
 unsigned long VAR_4;

 FUNC_1(&VAR_0, VAR_4);

 *VAR_2 = VAR_3->user_info;

 FUNC_2(&VAR_0, VAR_4);
}
