
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_overlay_manager {int id; } ;
struct mgr_priv_data {int enabled; int updating; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct mgr_priv_data* FUNC_1 (struct omap_overlay_manager*) ;
 int FUNC_2 (struct omap_overlay_manager*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct omap_overlay_manager *VAR_2)
{
 struct mgr_priv_data *VAR_3 = FUNC_1(VAR_2);
 unsigned long VAR_4;

 FUNC_3(&VAR_0);

 if (!VAR_3->enabled)
  goto out;

 FUNC_7();

 if (!FUNC_2(VAR_2))
  FUNC_0(VAR_2->id);

 FUNC_5(&VAR_1, VAR_4);

 VAR_3->updating = 0;
 VAR_3->enabled = 0;

 FUNC_6(&VAR_1, VAR_4);

out:
 FUNC_4(&VAR_0);
}
