
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovl_priv_data {int user_info_dirty; int info_dirty; int user_info; int info; } ;
struct omap_overlay {int dummy; } ;


 struct ovl_priv_data* FUNC_0 (struct omap_overlay*) ;

__attribute__((used)) static void FUNC_1(struct omap_overlay *VAR_0)
{
 struct ovl_priv_data *VAR_1;

 VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1->user_info_dirty)
  return;

 VAR_1->user_info_dirty = 0;
 VAR_1->info_dirty = 1;
 VAR_1->info = VAR_1->user_info;
}
