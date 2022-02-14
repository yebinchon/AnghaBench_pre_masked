
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_bridge_reg_behavior {int rw; int w1c; } ;
struct pci_bridge_emul {struct pci_bridge_reg_behavior* pci_regs_behavior; int conf; TYPE_1__* ops; struct pci_bridge_reg_behavior* pcie_cap_regs_behavior; int pcie_conf; scalar_t__ has_pcie; } ;
struct TYPE_2__ {void (* write_pcie ) (struct pci_bridge_emul*,int,int,int,int) ;void (* write_base ) (struct pci_bridge_emul*,int,int,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pci_bridge_emul*,int,int,int*) ;

int FUNC_1(struct pci_bridge_emul *VAR_5, int VAR_6,
          int VAR_7, u32 VAR_8)
{
 int VAR_9 = VAR_6 & ~3;
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 void (*VAR_15)(struct pci_bridge_emul *VAR_16, int VAR_17,
    u32 VAR_18, u32 VAR_19, u32 VAR_20);
 u32 *VAR_21;
 const struct pci_bridge_reg_behavior *VAR_22;

 if (VAR_5->has_pcie && VAR_9 >= VAR_3)
  return VAR_1;

 if (!VAR_5->has_pcie && VAR_9 >= VAR_2)
  return VAR_1;

 VAR_14 = (VAR_6 & 0x3) * 8;

 if (VAR_7 == 4)
  VAR_10 = 0xffffffff;
 else if (VAR_7 == 2)
  VAR_10 = 0xffff << VAR_14;
 else if (VAR_7 == 1)
  VAR_10 = 0xff << VAR_14;
 else
  return VAR_0;

 VAR_11 = FUNC_0(VAR_5, VAR_9, 4, &VAR_12);
 if (VAR_11 != VAR_1)
  return VAR_11;

 if (VAR_5->has_pcie && VAR_9 >= VAR_4) {
  VAR_9 -= VAR_4;
  VAR_15 = VAR_5->ops->write_pcie;
  VAR_21 = (u32 *) &VAR_5->pcie_conf;
  VAR_22 = VAR_5->pcie_cap_regs_behavior;
 } else {
  VAR_15 = VAR_5->ops->write_base;
  VAR_21 = (u32 *) &VAR_5->conf;
  VAR_22 = VAR_5->pci_regs_behavior;
 }


 VAR_13 = VAR_12 & (~VAR_10 | ~VAR_22[VAR_9 / 4].rw);


 VAR_13 |= (VAR_8 << VAR_14) & (VAR_22[VAR_9 / 4].rw & VAR_10);


 VAR_13 &= ~((VAR_8 << VAR_14) & (VAR_22[VAR_9 / 4].w1c & VAR_10));

 VAR_21[VAR_9 / 4] = VAR_13;

 if (VAR_15)
  VAR_15(VAR_5, VAR_9, VAR_12, VAR_13, VAR_10);

 return VAR_1;
}
