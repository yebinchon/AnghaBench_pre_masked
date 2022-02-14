
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_overlay_manager {int name; } ;
struct mgr_priv_data {scalar_t__ busy; int enabled; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct omap_overlay_manager*) ;
 int FUNC_2 (struct omap_overlay_manager*) ;
 int FUNC_3 (struct omap_overlay_manager*) ;
 struct mgr_priv_data* FUNC_4 (struct omap_overlay_manager*) ;
 scalar_t__ FUNC_5 (struct omap_overlay_manager*) ;
 int FUNC_6 () ;
 struct omap_overlay_manager* FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(void)
{
 const int VAR_0 = FUNC_6();
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0; ++VAR_1) {
  struct omap_overlay_manager *VAR_2;
  struct mgr_priv_data *VAR_3;
  int VAR_4;

  VAR_2 = FUNC_7(VAR_1);
  VAR_3 = FUNC_4(VAR_2);

  if (!VAR_3->enabled || FUNC_5(VAR_2) || VAR_3->busy)
   continue;

  VAR_4 = FUNC_1(VAR_2);
  if (VAR_4) {
   FUNC_0("cannot write registers for manager %s: "
     "illegal configuration\n", VAR_2->name);
   continue;
  }

  FUNC_2(VAR_2);
  FUNC_3(VAR_2);
 }
}
