
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct rockchip_pcie {int dummy; } ;
struct rockchip_pcie_ep {int irq_pci_addr; int irq_pci_fn; scalar_t__ irq_cpu_addr; int irq_phys_addr; scalar_t__ max_regions; struct rockchip_pcie rockchip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (struct rockchip_pcie*,int,scalar_t__,int ,int ,int,int) ;
 int FUNC_3 (struct rockchip_pcie*,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct rockchip_pcie_ep *VAR_9, u8 VAR_10,
      u8 VAR_11)
{
 struct rockchip_pcie *VAR_12 = &VAR_9->rockchip;
 u16 VAR_13, VAR_14, VAR_15, VAR_16;
 u8 VAR_17;
 u64 VAR_18, VAR_19 = 0xff;


 VAR_13 = FUNC_3(&VAR_9->rockchip,
       FUNC_1(VAR_10) +
       VAR_8);
 if (!(VAR_13 & VAR_5))
  return -VAR_1;


 VAR_14 = ((VAR_13 & VAR_6) >>
   VAR_7);
 VAR_17 = 1 << VAR_14;
 if (!VAR_11 || VAR_11 > VAR_17)
  return -VAR_1;


 VAR_16 = VAR_17 - 1;
 VAR_15 = FUNC_3(VAR_12,
      FUNC_1(VAR_10) +
      VAR_8 +
      VAR_4);
 VAR_15 = (VAR_15 & ~VAR_16) | ((VAR_11 - 1) & VAR_16);


 VAR_18 = FUNC_3(VAR_12,
          FUNC_1(VAR_10) +
          VAR_8 +
          VAR_2);
 VAR_18 <<= 32;
 VAR_18 |= FUNC_3(VAR_12,
           FUNC_1(VAR_10) +
           VAR_8 +
           VAR_3);
 VAR_18 &= FUNC_0(63, 2);


 if (FUNC_4(VAR_9->irq_pci_addr != (VAR_18 & ~VAR_19) ||
       VAR_9->irq_pci_fn != VAR_10)) {
  FUNC_2(VAR_12, VAR_10, VAR_9->max_regions - 1,
          VAR_0,
          VAR_9->irq_phys_addr,
          VAR_18 & ~VAR_19,
          VAR_19 + 1);
  VAR_9->irq_pci_addr = (VAR_18 & ~VAR_19);
  VAR_9->irq_pci_fn = VAR_10;
 }

 FUNC_5(VAR_15, VAR_9->irq_cpu_addr + (VAR_18 & VAR_19));
 return 0;
}
