
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;
struct TYPE_6__ {TYPE_1__* feat; } ;
struct TYPE_5__ {int framedone_irq; } ;
struct TYPE_4__ {scalar_t__ no_framedone_tv; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 TYPE_2__* VAR_2 ;

u32 FUNC_0(enum omap_channel VAR_3)
{
 if (VAR_3 == VAR_0 && VAR_1.feat->no_framedone_tv)
  return 0;

 return VAR_2[VAR_3].framedone_irq;
}
