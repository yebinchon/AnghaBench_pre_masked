
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_overlay_manager {int dummy; } ;
struct TYPE_2__ {int (* unregister_framedone_handler ) (struct omap_overlay_manager*,void (*) (void*),void*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct omap_overlay_manager*,void (*) (void*),void*) ;

void FUNC_1(struct omap_overlay_manager *VAR_1,
  void (*VAR_2)(void *), void *VAR_3)
{
 VAR_0->unregister_framedone_handler(VAR_1, VAR_2, VAR_3);
}
