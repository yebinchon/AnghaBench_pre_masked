
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_overlay_manager {TYPE_1__* output; } ;
struct mgr_priv_data {scalar_t__ enabled; } ;
struct TYPE_2__ {int * manager; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mgr_priv_data* FUNC_1 (struct omap_overlay_manager*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct omap_overlay_manager *VAR_3)
{
 int VAR_4;
 struct mgr_priv_data *VAR_5 = FUNC_1(VAR_3);
 unsigned long VAR_6;

 FUNC_2(&VAR_1);

 if (!VAR_3->output) {
  FUNC_0("failed to unset output, output not set\n");
  VAR_4 = -VAR_0;
  goto err;
 }

 FUNC_4(&VAR_2, VAR_6);

 if (VAR_5->enabled) {
  FUNC_0("output can't be unset when manager is enabled\n");
  VAR_4 = -VAR_0;
  goto err1;
 }

 FUNC_5(&VAR_2, VAR_6);

 VAR_3->output->manager = ((void*)0);
 VAR_3->output = ((void*)0);

 FUNC_3(&VAR_1);

 return 0;
err1:
 FUNC_5(&VAR_2, VAR_6);
err:
 FUNC_3(&VAR_1);

 return VAR_4;
}
