
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct of_pci_range {int size; int pci_addr; int cpu_addr; } ;
struct iproc_pcie {int dummy; } ;
typedef int range ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iproc_pcie*,struct of_pci_range*,int ) ;
 int FUNC_1 (struct of_pci_range*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct iproc_pcie *VAR_2, u64 VAR_3)
{
 int VAR_4;
 struct of_pci_range VAR_5;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.size = VAR_1;
 VAR_5.pci_addr = VAR_5.cpu_addr = VAR_3 & ~(VAR_5.size - 1);

 VAR_4 = FUNC_0(VAR_2, &VAR_5, VAR_0);
 return VAR_4;
}
