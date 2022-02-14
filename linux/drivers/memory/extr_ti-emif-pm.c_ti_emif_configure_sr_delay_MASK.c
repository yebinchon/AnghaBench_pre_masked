
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ti_emif_base_addr_virt; } ;
struct ti_emif_data {TYPE_1__ pm_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ti_emif_data *VAR_3)
{
 FUNC_0(VAR_2,
        (VAR_3->pm_data.ti_emif_base_addr_virt +
  VAR_0));

 FUNC_0(VAR_2,
        (VAR_3->pm_data.ti_emif_base_addr_virt +
  VAR_1));
}
