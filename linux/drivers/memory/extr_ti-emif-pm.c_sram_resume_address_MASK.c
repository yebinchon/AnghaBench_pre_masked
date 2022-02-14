
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_emif_data {scalar_t__ ti_emif_sram_phys; } ;
typedef scalar_t__ phys_addr_t ;


 scalar_t__ FUNC_0 (unsigned long) ;

__attribute__((used)) static phys_addr_t FUNC_1(struct ti_emif_data *VAR_0,
           unsigned long VAR_1)
{
 return ((unsigned long)VAR_0->ti_emif_sram_phys +
  FUNC_0(VAR_1));
}
