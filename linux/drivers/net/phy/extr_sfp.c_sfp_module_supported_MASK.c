
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ phys_id; scalar_t__ phys_ext_id; } ;
struct sfp_eeprom_id {TYPE_1__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(const struct sfp_eeprom_id *VAR_2)
{
 return VAR_2->base.phys_id == VAR_1 &&
        VAR_2->base.phys_ext_id == VAR_0;
}
