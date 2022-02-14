
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct pch_dev {TYPE_1__* regs; } ;
struct TYPE_2__ {int rx_snap_hi; int rx_snap_lo; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct pch_dev* FUNC_1 (struct pci_dev*) ;

u64 FUNC_2(struct pci_dev *VAR_1)
{
 struct pch_dev *VAR_2 = FUNC_1(VAR_1);
 u64 VAR_3;
 u32 VAR_4, VAR_5;

 VAR_4 = FUNC_0(&VAR_2->regs->rx_snap_lo);
 VAR_5 = FUNC_0(&VAR_2->regs->rx_snap_hi);

 VAR_3 = ((u64) VAR_5) << 32;
 VAR_3 |= VAR_4;
 VAR_3 <<= VAR_0;

 return VAR_3;
}
