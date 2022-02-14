
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_overlay_manager {int id; } ;
struct mgr_priv_data {int busy; int enabled; } ;
struct TYPE_2__ {int irq_enabled; } ;


 int FUNC_0 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 () ;
 struct mgr_priv_data* FUNC_2 (struct omap_overlay_manager*) ;
 scalar_t__ FUNC_3 (struct omap_overlay_manager*) ;
 int FUNC_4 (struct omap_overlay_manager*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 struct omap_overlay_manager* FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(void)
{
 const int VAR_1 = FUNC_6();
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2) {
  struct omap_overlay_manager *VAR_3;
  struct mgr_priv_data *VAR_4;

  VAR_3 = FUNC_7(VAR_2);
  VAR_4 = FUNC_2(VAR_3);

  if (!VAR_4->enabled || FUNC_3(VAR_3) || VAR_4->busy)
   continue;

  if (!FUNC_4(VAR_3))
   continue;

  VAR_4->busy = 1;

  if (!VAR_0.irq_enabled && FUNC_5())
   FUNC_1();

  FUNC_0(VAR_3->id);
 }

}
