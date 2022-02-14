
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tango_pcie {scalar_t__ base; } ;
struct pci_config_window {int parent; } ;
struct pci_bus {struct pci_config_window* sysdata; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct tango_pcie* FUNC_0 (int ) ;
 int FUNC_1 (struct pci_bus*,unsigned int,int,int,int *) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct pci_bus *VAR_2, unsigned int VAR_3,
          int VAR_4, int VAR_5, u32 *VAR_6)
{
 struct pci_config_window *VAR_7 = VAR_2->sysdata;
 struct tango_pcie *VAR_8 = FUNC_0(VAR_7->parent);
 int VAR_9;


 if (VAR_3 != 0)
  return VAR_0;






 FUNC_2(1, VAR_8->base + VAR_1);
 VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_2(0, VAR_8->base + VAR_1);

 return VAR_9;
}
