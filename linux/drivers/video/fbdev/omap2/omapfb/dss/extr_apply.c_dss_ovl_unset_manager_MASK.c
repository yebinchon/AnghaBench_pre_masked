
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovl_priv_data {scalar_t__ extra_info_dirty; scalar_t__ enabled; } ;
struct omap_overlay {int list; int * manager; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ovl_priv_data* FUNC_1 (struct omap_overlay*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct omap_overlay*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct omap_overlay *VAR_3)
{
 struct ovl_priv_data *VAR_4 = FUNC_1(VAR_3);
 unsigned long VAR_5;
 int VAR_6;

 FUNC_3(&VAR_1);

 if (!VAR_3->manager) {
  FUNC_0("failed to detach overlay: manager not set\n");
  VAR_6 = -VAR_0;
  goto err;
 }

 FUNC_6(&VAR_2, VAR_5);

 if (VAR_4->enabled) {
  FUNC_7(&VAR_2, VAR_5);
  FUNC_0("overlay has to be disabled to unset the manager\n");
  VAR_6 = -VAR_0;
  goto err;
 }

 FUNC_7(&VAR_2, VAR_5);


 FUNC_8();
 FUNC_6(&VAR_2, VAR_5);

 if (FUNC_5(VAR_3) && VAR_4->extra_info_dirty) {
  FUNC_7(&VAR_2, VAR_5);
  FUNC_0("need an update to change the manager\n");
  VAR_6 = -VAR_0;
  goto err;
 }

 VAR_3->manager = ((void*)0);
 FUNC_2(&VAR_3->list);

 FUNC_7(&VAR_2, VAR_5);

 FUNC_4(&VAR_1);

 return 0;
err:
 FUNC_4(&VAR_1);
 return VAR_6;
}
