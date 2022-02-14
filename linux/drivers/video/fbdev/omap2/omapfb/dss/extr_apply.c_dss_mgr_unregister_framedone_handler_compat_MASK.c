
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_overlay_manager {int dummy; } ;
struct mgr_priv_data {void (* framedone_handler ) (void*) ;void* framedone_handler_data; } ;


 int FUNC_0 (int) ;
 struct mgr_priv_data* FUNC_1 (struct omap_overlay_manager*) ;

__attribute__((used)) static void FUNC_2(struct omap_overlay_manager *VAR_0,
  void (*VAR_1)(void *), void *VAR_2)
{
 struct mgr_priv_data *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_3->framedone_handler != VAR_1 ||
   VAR_3->framedone_handler_data != VAR_2);

 VAR_3->framedone_handler = ((void*)0);
 VAR_3->framedone_handler_data = ((void*)0);
}
