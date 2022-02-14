
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ovl_priv_data {int enabling; scalar_t__ enabled; } ;
struct omap_overlay {int id; TYPE_1__* manager; } ;
struct TYPE_2__ {int * output; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct omap_overlay*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 struct ovl_priv_data* FUNC_6 (struct omap_overlay*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_11(struct omap_overlay *VAR_3)
{
 struct ovl_priv_data *VAR_4 = FUNC_6(VAR_3);
 unsigned long VAR_5;
 int VAR_6;

 FUNC_7(&VAR_1);

 if (VAR_4->enabled) {
  VAR_6 = 0;
  goto err1;
 }

 if (VAR_3->manager == ((void*)0) || VAR_3->manager->output == ((void*)0)) {
  VAR_6 = -VAR_0;
  goto err1;
 }

 FUNC_9(&VAR_2, VAR_5);

 VAR_4->enabling = 1;

 VAR_6 = FUNC_2(VAR_3->manager);
 if (VAR_6) {
  FUNC_0("failed to enable overlay %d: check_settings failed\n",
    VAR_3->id);
  goto err2;
 }

 FUNC_4();

 VAR_4->enabling = 0;
 FUNC_1(VAR_3, 1);

 FUNC_5();
 FUNC_3();

 FUNC_10(&VAR_2, VAR_5);

 FUNC_8(&VAR_1);

 return 0;
err2:
 VAR_4->enabling = 0;
 FUNC_10(&VAR_2, VAR_5);
err1:
 FUNC_8(&VAR_1);
 return VAR_6;
}
