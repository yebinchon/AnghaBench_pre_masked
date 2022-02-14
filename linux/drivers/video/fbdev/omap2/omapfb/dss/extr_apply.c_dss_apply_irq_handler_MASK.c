
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_overlay_manager {int dummy; } ;
struct mgr_priv_data {int busy; int framedone_handler_data; int (* framedone_handler ) (int ) ;int updating; int enabled; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_1 ;
 struct mgr_priv_data* FUNC_9 (struct omap_overlay_manager*) ;
 int FUNC_10 (struct omap_overlay_manager*) ;
 int FUNC_11 (struct omap_overlay_manager*) ;
 int FUNC_12 () ;
 struct omap_overlay_manager* FUNC_13 (int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static void FUNC_17(void *VAR_2, u32 VAR_3)
{
 const int VAR_4 = FUNC_4();
 int VAR_5;
 bool VAR_6;

 FUNC_14(&VAR_0);


 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  struct omap_overlay_manager *VAR_7;
  struct mgr_priv_data *VAR_8;

  VAR_7 = FUNC_13(VAR_5);
  VAR_8 = FUNC_9(VAR_7);

  if (!VAR_8->enabled)
   continue;

  VAR_8->updating = FUNC_3(VAR_5);

  if (!FUNC_11(VAR_7)) {
   bool VAR_9 = VAR_8->busy;
   VAR_8->busy = FUNC_2(VAR_5);

   if (VAR_9 && !VAR_8->busy)
    FUNC_10(VAR_7);
  }
 }

 FUNC_7();
 FUNC_5();

 VAR_6 = FUNC_8();
 if (!VAR_6)
  FUNC_0(&VAR_1);


 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  struct omap_overlay_manager *VAR_10;
  struct mgr_priv_data *VAR_11;

  VAR_10 = FUNC_13(VAR_5);
  VAR_11 = FUNC_9(VAR_10);

  if (!FUNC_11(VAR_10) || !VAR_11->framedone_handler)
   continue;

  if (VAR_3 & FUNC_1(VAR_5))
   VAR_11->framedone_handler(VAR_11->framedone_handler_data);
 }

 if (!FUNC_12())
  FUNC_6();

 FUNC_15(&VAR_0);
}
