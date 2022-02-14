
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_overlay_manager {int dummy; } ;
struct mgr_priv_data {void (* framedone_handler ) (void*) ;void* framedone_handler_data; } ;


 int VAR_0 ;
 struct mgr_priv_data* FUNC_0 (struct omap_overlay_manager*) ;

__attribute__((used)) static int FUNC_1(struct omap_overlay_manager *VAR_1,
  void (*VAR_2)(void *), void *VAR_3)
{
 struct mgr_priv_data *VAR_4 = FUNC_0(VAR_1);

 if (VAR_4->framedone_handler)
  return -VAR_0;

 VAR_4->framedone_handler = VAR_2;
 VAR_4->framedone_handler_data = VAR_3;

 return 0;
}
