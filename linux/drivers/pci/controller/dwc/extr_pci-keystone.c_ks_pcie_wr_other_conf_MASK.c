
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pcie_port {scalar_t__ root_bus_nr; scalar_t__ va_cfg0_base; } ;
struct pci_bus {TYPE_1__* parent; int number; } ;
struct keystone_pcie {int dummy; } ;
struct dw_pcie {int dummy; } ;
struct TYPE_2__ {scalar_t__ number; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (scalar_t__,int,int) ;
 int FUNC_6 (struct keystone_pcie*,int ,int) ;
 struct dw_pcie* FUNC_7 (struct pcie_port*) ;
 struct keystone_pcie* FUNC_8 (struct dw_pcie*) ;

__attribute__((used)) static int FUNC_9(struct pcie_port *VAR_2, struct pci_bus *VAR_3,
     unsigned int VAR_4, int VAR_5, int VAR_6,
     u32 VAR_7)
{
 struct dw_pcie *VAR_8 = FUNC_7(VAR_2);
 struct keystone_pcie *VAR_9 = FUNC_8(VAR_8);
 u32 VAR_10;

 VAR_10 = FUNC_0(VAR_3->number) | FUNC_1(FUNC_4(VAR_4)) |
  FUNC_2(FUNC_3(VAR_4));
 if (VAR_3->parent->number != VAR_2->root_bus_nr)
  VAR_10 |= VAR_1;
 FUNC_6(VAR_9, VAR_0, VAR_10);

 return FUNC_5(VAR_2->va_cfg0_base + VAR_5, VAR_6, VAR_7);
}
