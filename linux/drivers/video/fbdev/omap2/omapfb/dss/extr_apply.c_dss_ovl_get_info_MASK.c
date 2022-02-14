
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_overlay_info {int dummy; } ;
struct ovl_priv_data {struct omap_overlay_info user_info; } ;
struct omap_overlay {int dummy; } ;


 int VAR_0 ;
 struct ovl_priv_data* FUNC_0 (struct omap_overlay*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct omap_overlay *VAR_1,
  struct omap_overlay_info *VAR_2)
{
 struct ovl_priv_data *VAR_3 = FUNC_0(VAR_1);
 unsigned long VAR_4;

 FUNC_1(&VAR_0, VAR_4);

 *VAR_2 = VAR_3->user_info;

 FUNC_2(&VAR_0, VAR_4);
}
