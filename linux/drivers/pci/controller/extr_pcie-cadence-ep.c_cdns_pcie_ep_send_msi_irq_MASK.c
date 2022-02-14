
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct cdns_pcie {int dummy; } ;
struct cdns_pcie_ep {int irq_pci_addr; int irq_pci_fn; scalar_t__ irq_cpu_addr; int irq_phys_addr; struct cdns_pcie pcie; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct cdns_pcie*,int,scalar_t__) ;
 int FUNC_2 (struct cdns_pcie*,int,scalar_t__) ;
 int FUNC_3 (struct cdns_pcie*,int,int ,int,int ,int,int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct cdns_pcie_ep *VAR_8, u8 VAR_9,
         u8 VAR_10)
{
 struct cdns_pcie *VAR_11 = &VAR_8->pcie;
 u32 VAR_12 = VAR_0;
 u16 VAR_13, VAR_14, VAR_15, VAR_16;
 u8 VAR_17;
 u64 VAR_18, VAR_19 = 0xff;


 VAR_13 = FUNC_2(VAR_11, VAR_9, VAR_12 + VAR_5);
 if (!(VAR_13 & VAR_6))
  return -VAR_1;


 VAR_14 = (VAR_13 & VAR_7) >> 4;
 VAR_17 = 1 << VAR_14;
 if (!VAR_10 || VAR_10 > VAR_17)
  return -VAR_1;


 VAR_16 = VAR_17 - 1;
 VAR_15 = FUNC_2(VAR_11, VAR_9, VAR_12 + VAR_4);
 VAR_15 = (VAR_15 & ~VAR_16) | ((VAR_10 - 1) & VAR_16);


 VAR_18 = FUNC_1(VAR_11, VAR_9, VAR_12 + VAR_2);
 VAR_18 <<= 32;
 VAR_18 |= FUNC_1(VAR_11, VAR_9, VAR_12 + VAR_3);
 VAR_18 &= FUNC_0(63, 2);


 if (FUNC_4(VAR_8->irq_pci_addr != (VAR_18 & ~VAR_19) ||
       VAR_8->irq_pci_fn != VAR_9)) {

  FUNC_3(VAR_11, VAR_9, 0,
           0,
           VAR_8->irq_phys_addr,
           VAR_18 & ~VAR_19,
           VAR_19 + 1);
  VAR_8->irq_pci_addr = (VAR_18 & ~VAR_19);
  VAR_8->irq_pci_fn = VAR_9;
 }
 FUNC_5(VAR_15, VAR_8->irq_cpu_addr + (VAR_18 & VAR_19));

 return 0;
}
