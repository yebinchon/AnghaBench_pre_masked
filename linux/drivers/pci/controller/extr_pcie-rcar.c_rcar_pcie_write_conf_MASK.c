
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
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ,unsigned int,int,int,int) ;
 int FUNC_1 (struct rcar_pcie*,int ,struct pci_bus*,unsigned int,int,int*) ;

__attribute__((used)) static int FUNC_2(struct pci_bus *VAR_4, unsigned int VAR_5,
    int VAR_6, int VAR_7, u32 VAR_8)
{
 struct rcar_pcie *VAR_9 = VAR_4->sysdata;
 unsigned int VAR_10;
 u32 VAR_11;
 int VAR_12;

 VAR_12 = FUNC_1(VAR_9, VAR_2,
          VAR_4, VAR_5, VAR_6, &VAR_11);
 if (VAR_12 != VAR_1)
  return VAR_12;

 FUNC_0(&VAR_4->dev, "pcie-config-write: bus=%3d devfn=0x%04x where=0x%04x size=%d val=0x%08x\n",
  VAR_4->number, VAR_5, VAR_6, VAR_7, VAR_8);

 if (VAR_7 == 1) {
  VAR_10 = VAR_0 * (VAR_6 & 3);
  VAR_11 &= ~(0xff << VAR_10);
  VAR_11 |= ((VAR_8 & 0xff) << VAR_10);
 } else if (VAR_7 == 2) {
  VAR_10 = VAR_0 * (VAR_6 & 2);
  VAR_11 &= ~(0xffff << VAR_10);
  VAR_11 |= ((VAR_8 & 0xffff) << VAR_10);
 } else
  VAR_11 = VAR_8;

 VAR_12 = FUNC_1(VAR_9, VAR_3,
          VAR_4, VAR_5, VAR_6, &VAR_11);

 return VAR_12;
}
