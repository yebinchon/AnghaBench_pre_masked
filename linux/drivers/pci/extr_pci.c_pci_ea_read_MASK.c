
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct resource {int start; int end; unsigned long flags; int name; } ;
struct pci_dev {int dummy; } ;
typedef int resource_size_t ;


 unsigned long VAR_0 ;
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
 unsigned long FUNC_0 (struct pci_dev*,int) ;
 struct resource* FUNC_1 (struct pci_dev*,int,int) ;
 int FUNC_2 (struct pci_dev*,char*,...) ;
 int FUNC_3 (struct pci_dev*,char*,...) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int,int*) ;

__attribute__((used)) static int FUNC_6(struct pci_dev *VAR_14, int VAR_15)
{
 struct resource *VAR_16;
 int VAR_17, VAR_18 = VAR_15;
 resource_size_t VAR_19, VAR_20;
 unsigned long VAR_21;
 u32 VAR_22, VAR_23, VAR_24, VAR_25;
 u8 VAR_26;
 bool VAR_27 = (sizeof(resource_size_t) >= 8);

 FUNC_5(VAR_14, VAR_18, &VAR_22);
 VAR_18 += 4;


 VAR_17 = ((VAR_22 & VAR_7) + 1) << 2;

 if (!(VAR_22 & VAR_6))
  goto out;

 VAR_23 = (VAR_22 & VAR_1) >> 4;
 VAR_26 = (VAR_22 & VAR_10) >> 8;





 if (VAR_26 > VAR_11 && VAR_26 < VAR_12)
  VAR_26 = (VAR_22 & VAR_13) >> 16;
 if (VAR_26 > VAR_11)
  goto out;

 VAR_16 = FUNC_1(VAR_14, VAR_23, VAR_26);
 if (!VAR_16) {
  FUNC_2(VAR_14, "Unsupported EA entry BEI: %u\n", VAR_23);
  goto out;
 }

 VAR_21 = FUNC_0(VAR_14, VAR_26);
 if (!VAR_21) {
  FUNC_2(VAR_14, "Unsupported EA properties: %#x\n", VAR_26);
  goto out;
 }


 FUNC_5(VAR_14, VAR_18, &VAR_24);
 VAR_19 = (VAR_24 & VAR_8);
 VAR_18 += 4;


 FUNC_5(VAR_14, VAR_18, &VAR_25);
 VAR_18 += 4;


 if (VAR_24 & VAR_9) {
  u32 VAR_28;

  FUNC_5(VAR_14, VAR_18, &VAR_28);
  VAR_18 += 4;

  VAR_21 |= VAR_0;


  if (!VAR_27 && VAR_28)
   goto out;

  if (VAR_27)
   VAR_19 |= ((u64)VAR_28 << 32);
 }

 VAR_20 = VAR_19 + (VAR_25 | 0x03);


 if (VAR_25 & VAR_9) {
  u32 VAR_29;

  FUNC_5(VAR_14, VAR_18, &VAR_29);
  VAR_18 += 4;

  VAR_21 |= VAR_0;


  if (!VAR_27 && VAR_29)
   goto out;

  if (VAR_27)
   VAR_20 += ((u64)VAR_29 << 32);
 }

 if (VAR_20 < VAR_19) {
  FUNC_2(VAR_14, "EA Entry crosses address boundary\n");
  goto out;
 }

 if (VAR_17 != VAR_18 - VAR_15) {
  FUNC_2(VAR_14, "EA Entry Size (%d) does not match length read (%d)\n",
   VAR_17, VAR_18 - VAR_15);
  goto out;
 }

 VAR_16->name = FUNC_4(VAR_14);
 VAR_16->start = VAR_19;
 VAR_16->end = VAR_20;
 VAR_16->flags = VAR_21;

 if (VAR_23 <= VAR_2)
  FUNC_3(VAR_14, "BAR %d: %pR (from Enhanced Allocation, properties %#02x)\n",
      VAR_23, VAR_16, VAR_26);
 else if (VAR_23 == VAR_3)
  FUNC_3(VAR_14, "ROM: %pR (from Enhanced Allocation, properties %#02x)\n",
      VAR_16, VAR_26);
 else if (VAR_23 >= VAR_4 && VAR_23 <= VAR_5)
  FUNC_3(VAR_14, "VF BAR %d: %pR (from Enhanced Allocation, properties %#02x)\n",
      VAR_23 - VAR_4, VAR_16, VAR_26);
 else
  FUNC_3(VAR_14, "BEI %d res: %pR (from Enhanced Allocation, properties %#02x)\n",
      VAR_23, VAR_16, VAR_26);

out:
 return VAR_15 + VAR_17;
}
