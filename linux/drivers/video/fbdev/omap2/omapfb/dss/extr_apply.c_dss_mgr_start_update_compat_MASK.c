
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_overlay_manager {int id; } ;
struct mgr_priv_data {int updating; } ;
struct TYPE_2__ {int irq_enabled; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct omap_overlay_manager*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_4 (struct omap_overlay_manager*) ;
 int FUNC_5 (struct omap_overlay_manager*) ;
 int FUNC_6 () ;
 struct mgr_priv_data* FUNC_7 (struct omap_overlay_manager*) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_11(struct omap_overlay_manager *VAR_2)
{
 struct mgr_priv_data *VAR_3 = FUNC_7(VAR_2);
 unsigned long VAR_4;
 int VAR_5;

 FUNC_9(&VAR_0, VAR_4);

 FUNC_1(VAR_3->updating);

 VAR_5 = FUNC_3(VAR_2);
 if (VAR_5) {
  FUNC_0("cannot start manual update: illegal configuration\n");
  FUNC_10(&VAR_0, VAR_4);
  return;
 }

 FUNC_4(VAR_2);
 FUNC_5(VAR_2);

 VAR_3->updating = 1;

 if (!VAR_1.irq_enabled && FUNC_8())
  FUNC_6();

 FUNC_2(VAR_2->id);

 FUNC_10(&VAR_0, VAR_4);
}
