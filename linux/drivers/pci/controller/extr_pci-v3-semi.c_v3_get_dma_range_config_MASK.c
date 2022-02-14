
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct v3_pci {struct device* dev; } ;
struct of_pci_range {int cpu_addr; int size; int pci_addr; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct device*,char*,int,scalar_t__,int,scalar_t__,int,int) ;
 int FUNC_1 (struct device*,char*) ;

__attribute__((used)) static int FUNC_2(struct v3_pci *VAR_17,
       struct of_pci_range *VAR_18,
       u32 *VAR_19, u32 *VAR_20)
{
 struct device *VAR_21 = VAR_17->dev;
 u64 VAR_22 = VAR_18->cpu_addr + VAR_18->size - 1;
 u64 VAR_23 = VAR_18->pci_addr + VAR_18->size - 1;
 u32 VAR_24;

 if (VAR_18->pci_addr & ~VAR_13) {
  FUNC_1(VAR_21, "illegal range, only PCI bits 31..20 allowed\n");
  return -VAR_0;
 }
 VAR_24 = ((u32)VAR_18->pci_addr) & VAR_13;
 *VAR_19 = VAR_24;

 if (VAR_18->cpu_addr & ~VAR_15) {
  FUNC_1(VAR_21, "illegal range, only CPU bits 31..20 allowed\n");
  return -VAR_0;
 }
 VAR_24 = ((u32)VAR_18->cpu_addr) & VAR_15;

 switch (VAR_18->size) {
 case 136:
  VAR_24 |= VAR_4;
  break;
 case 133:
  VAR_24 |= VAR_7;
  break;
 case 131:
  VAR_24 |= VAR_9;
  break;
 case 128:
  VAR_24 |= VAR_12;
  break;
 case 138:
  VAR_24 |= VAR_2;
  break;
 case 132:
  VAR_24 |= VAR_8;
  break;
 case 129:
  VAR_24 |= VAR_11;
  break;
 case 139:
  VAR_24 |= VAR_1;
  break;
 case 135:
  VAR_24 |= VAR_5;
  break;
 case 130:
  VAR_24 |= VAR_10;
  break;
 case 137:
  VAR_24 |= VAR_3;
  break;
 case 134:
  VAR_24 |= VAR_6;
  break;
 default:
  FUNC_1(VAR_17->dev, "illegal dma memory chunk size\n");
  return -VAR_0;
  break;
 }
 VAR_24 |= VAR_16 | VAR_14;
 *VAR_20 = VAR_24;

 FUNC_0(VAR_21,
  "DMA MEM CPU: 0x%016llx -> 0x%016llx => "
  "PCI: 0x%016llx -> 0x%016llx base %08x map %08x\n",
  VAR_18->cpu_addr, VAR_22,
  VAR_18->pci_addr, VAR_23,
  *VAR_19, *VAR_20);

 return 0;
}
