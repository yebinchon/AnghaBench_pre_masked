
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovl_priv_data {scalar_t__ enabled; } ;
struct omap_overlay_manager {int overlays; int id; int name; } ;
struct omap_overlay {int list; struct omap_overlay_manager* manager; int id; int name; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct ovl_priv_data* FUNC_4 (struct omap_overlay*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct omap_overlay *VAR_3,
  struct omap_overlay_manager *VAR_4)
{
 struct ovl_priv_data *VAR_5 = FUNC_4(VAR_3);
 unsigned long VAR_6;
 int VAR_7;

 if (!VAR_4)
  return -VAR_0;

 FUNC_6(&VAR_1);

 if (VAR_3->manager) {
  FUNC_0("overlay '%s' already has a manager '%s'\n",
    VAR_3->name, VAR_3->manager->name);
  VAR_7 = -VAR_0;
  goto err;
 }

 VAR_7 = FUNC_2();
 if (VAR_7)
  goto err;

 FUNC_8(&VAR_2, VAR_6);

 if (VAR_5->enabled) {
  FUNC_9(&VAR_2, VAR_6);
  FUNC_0("overlay has to be disabled to change the manager\n");
  VAR_7 = -VAR_0;
  goto err1;
 }

 FUNC_1(VAR_3->id, VAR_4->id);

 VAR_3->manager = VAR_4;
 FUNC_5(&VAR_3->list, &VAR_4->overlays);

 FUNC_9(&VAR_2, VAR_6);

 FUNC_3();

 FUNC_7(&VAR_1);

 return 0;

err1:
 FUNC_3();
err:
 FUNC_7(&VAR_1);
 return VAR_7;
}
