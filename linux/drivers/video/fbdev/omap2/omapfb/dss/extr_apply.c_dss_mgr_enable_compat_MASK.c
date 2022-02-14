
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_overlay_manager {int id; } ;
struct mgr_priv_data {int enabled; int updating; } ;
struct TYPE_2__ {int irq_enabled; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct omap_overlay_manager*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 struct mgr_priv_data* FUNC_7 (struct omap_overlay_manager*) ;
 int FUNC_8 (struct omap_overlay_manager*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_14(struct omap_overlay_manager *VAR_3)
{
 struct mgr_priv_data *VAR_4 = FUNC_7(VAR_3);
 unsigned long VAR_5;
 int VAR_6;

 FUNC_9(&VAR_0);

 if (VAR_4->enabled)
  goto out;

 FUNC_12(&VAR_1, VAR_5);

 VAR_4->enabled = 1;

 VAR_6 = FUNC_2(VAR_3);
 if (VAR_6) {
  FUNC_0("failed to enable manager %d: check_settings failed\n",
    VAR_3->id);
  goto err;
 }

 FUNC_5();

 FUNC_6();
 FUNC_4();

 if (!FUNC_8(VAR_3))
  VAR_4->updating = 1;

 if (!VAR_2.irq_enabled && FUNC_11())
  FUNC_3();

 FUNC_13(&VAR_1, VAR_5);

 if (!FUNC_8(VAR_3))
  FUNC_1(VAR_3->id);

out:
 FUNC_10(&VAR_0);

 return 0;

err:
 VAR_4->enabled = 0;
 FUNC_13(&VAR_1, VAR_5);
 FUNC_10(&VAR_0);
 return VAR_6;
}
