
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ems_pci_card {scalar_t__ base_addr; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static u8 FUNC_1(struct ems_pci_card *VAR_0, unsigned int VAR_1)
{
 return FUNC_0(VAR_0->base_addr + (VAR_1 * 4));
}
