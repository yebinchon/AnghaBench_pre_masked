
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ovl_priv_data {int enabled; } ;
struct omap_overlay {TYPE_1__* manager; } ;
struct TYPE_2__ {int * output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct omap_overlay*,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct ovl_priv_data* FUNC_3 (struct omap_overlay*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct omap_overlay *VAR_3)
{
 struct ovl_priv_data *VAR_4 = FUNC_3(VAR_3);
 unsigned long VAR_5;
 int VAR_6;

 FUNC_4(&VAR_1);

 if (!VAR_4->enabled) {
  VAR_6 = 0;
  goto err;
 }

 if (VAR_3->manager == ((void*)0) || VAR_3->manager->output == ((void*)0)) {
  VAR_6 = -VAR_0;
  goto err;
 }

 FUNC_6(&VAR_2, VAR_5);

 FUNC_0(VAR_3, 0);
 FUNC_2();
 FUNC_1();

 FUNC_7(&VAR_2, VAR_5);

 FUNC_5(&VAR_1);

 return 0;

err:
 FUNC_5(&VAR_1);
 return VAR_6;
}
