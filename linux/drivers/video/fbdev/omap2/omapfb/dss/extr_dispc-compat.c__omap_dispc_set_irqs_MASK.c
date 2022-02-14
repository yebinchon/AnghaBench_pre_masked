
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct omap_dispc_isr_data {int mask; int * isr; } ;
struct TYPE_2__ {struct omap_dispc_isr_data* registered_isr; int irq_error_mask; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(void)
{
 u32 VAR_2;
 int VAR_3;
 struct omap_dispc_isr_data *VAR_4;

 VAR_2 = VAR_1.irq_error_mask;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_4 = &VAR_1.registered_isr[VAR_3];

  if (VAR_4->isr == ((void*)0))
   continue;

  VAR_2 |= VAR_4->mask;
 }

 FUNC_0(VAR_2);
}
