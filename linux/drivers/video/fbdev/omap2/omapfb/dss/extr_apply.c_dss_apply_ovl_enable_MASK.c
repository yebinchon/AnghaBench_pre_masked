
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovl_priv_data {int enabled; int extra_info_dirty; } ;
struct omap_overlay {int dummy; } ;


 struct ovl_priv_data* FUNC_0 (struct omap_overlay*) ;

__attribute__((used)) static void FUNC_1(struct omap_overlay *VAR_0, bool VAR_1)
{
 struct ovl_priv_data *VAR_2;

 VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->enabled == VAR_1)
  return;

 VAR_2->enabled = VAR_1;
 VAR_2->extra_info_dirty = 1;
}
