
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {scalar_t__ number; } ;
struct iproc_pcie {scalar_t__ has_apb_err_disable; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iproc_pcie* FUNC_0 (struct pci_bus*) ;
 int FUNC_1 (struct iproc_pcie*,int ) ;
 int FUNC_2 (struct iproc_pcie*,int ,int ) ;

__attribute__((used)) static inline void FUNC_3(struct pci_bus *VAR_2,
           bool VAR_3)
{
 struct iproc_pcie *VAR_4 = FUNC_0(VAR_2);
 u32 VAR_5;

 if (VAR_2->number && VAR_4->has_apb_err_disable) {
  VAR_5 = FUNC_1(VAR_4, VAR_1);
  if (VAR_3)
   VAR_5 &= ~VAR_0;
  else
   VAR_5 |= VAR_0;
  FUNC_2(VAR_4, VAR_1, VAR_5);
 }
}
