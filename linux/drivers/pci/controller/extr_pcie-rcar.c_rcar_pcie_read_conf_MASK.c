
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rcar_pcie {int dummy; } ;
struct pci_bus {int number; int dev; struct rcar_pcie* sysdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ,unsigned int,int,int,int) ;
 int FUNC_1 (struct rcar_pcie*,int ,struct pci_bus*,unsigned int,int,int*) ;

__attribute__((used)) static int FUNC_2(struct pci_bus *VAR_3, unsigned int VAR_4,
          int VAR_5, int VAR_6, u32 *VAR_7)
{
 struct rcar_pcie *VAR_8 = VAR_3->sysdata;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_8, VAR_2,
          VAR_3, VAR_4, VAR_5, VAR_7);
 if (VAR_9 != VAR_1) {
  *VAR_7 = 0xffffffff;
  return VAR_9;
 }

 if (VAR_6 == 1)
  *VAR_7 = (*VAR_7 >> (VAR_0 * (VAR_5 & 3))) & 0xff;
 else if (VAR_6 == 2)
  *VAR_7 = (*VAR_7 >> (VAR_0 * (VAR_5 & 2))) & 0xffff;

 FUNC_0(&VAR_3->dev, "pcie-config-read: bus=%3d devfn=0x%04x where=0x%04x size=%d val=0x%08x\n",
  VAR_3->number, VAR_4, VAR_5, VAR_6, *VAR_7);

 return VAR_9;
}
