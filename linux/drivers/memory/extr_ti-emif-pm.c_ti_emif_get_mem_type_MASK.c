
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ti_emif_base_addr_virt; } ;
struct TYPE_4__ {TYPE_1__ pm_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 TYPE_2__* VAR_4 ;
 unsigned long FUNC_0 (scalar_t__) ;

int FUNC_1(void)
{
 unsigned long VAR_5;

 if (!VAR_4)
  return -VAR_1;

 VAR_5 = FUNC_0(VAR_4->pm_data.ti_emif_base_addr_virt +
       VAR_0);

 VAR_5 = (VAR_5 & VAR_2) >> VAR_3;
 return VAR_5;
}
