
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tango_pcie {scalar_t__ base; } ;
struct pci_config_window {int parent; } ;
struct pci_bus {struct pci_config_window* sysdata; } ;


 scalar_t__ VAR_0 ;
 struct tango_pcie* FUNC_0 (int ) ;
 int FUNC_1 (struct pci_bus*,unsigned int,int,int,int ) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct pci_bus *VAR_1, unsigned int VAR_2,
    int VAR_3, int VAR_4, u32 VAR_5)
{
 struct pci_config_window *VAR_6 = VAR_1->sysdata;
 struct tango_pcie *VAR_7 = FUNC_0(VAR_6->parent);
 int VAR_8;

 FUNC_2(1, VAR_7->base + VAR_0);
 VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_2(0, VAR_7->base + VAR_0);

 return VAR_8;
}
