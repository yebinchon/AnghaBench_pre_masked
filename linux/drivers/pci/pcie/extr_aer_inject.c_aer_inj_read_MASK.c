
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_ops {int (* read ) (struct pci_bus*,unsigned int,int,int,int *) ;} ;
struct pci_bus {struct pci_ops* ops; } ;


 struct pci_ops* FUNC_0 (struct pci_bus*) ;
 int FUNC_1 (struct pci_bus*,unsigned int,int,int,int *) ;

__attribute__((used)) static int FUNC_2(struct pci_bus *VAR_0, unsigned int VAR_1, int VAR_2,
   int VAR_3, u32 *VAR_4)
{
 struct pci_ops *VAR_5, *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_0(VAR_0);
 if (!VAR_5)
  return -1;

 VAR_6 = VAR_0->ops;
 VAR_0->ops = VAR_5;
 VAR_7 = VAR_5->read(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 VAR_0->ops = VAR_6;

 return VAR_7;
}
