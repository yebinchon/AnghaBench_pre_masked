
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct rcar_pcie {int dev; } ;
struct of_pci_range {int flags; int cpu_addr; int size; int pci_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 unsigned long FUNC_3 (int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,unsigned long long) ;
 int FUNC_7 (struct rcar_pcie*,int,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct rcar_pcie *VAR_6,
        struct of_pci_range *VAR_7,
        int *VAR_8)
{
 u64 VAR_9 = VAR_7->flags;
 u64 VAR_10 = VAR_7->cpu_addr;
 u64 VAR_11 = VAR_7->cpu_addr + VAR_7->size;
 u64 VAR_12 = VAR_7->pci_addr;
 u32 VAR_13 = VAR_2 | VAR_4;
 u64 VAR_14;
 u64 VAR_15;
 int VAR_16 = *VAR_8;

 if (VAR_9 & VAR_1)
  VAR_13 |= VAR_3;





 if (VAR_10 > 0) {
  unsigned long VAR_17 = FUNC_3(VAR_10);
  u64 VAR_18 = 1ULL << VAR_17;

  VAR_15 = FUNC_6(VAR_7->size, VAR_18);
 } else {
  VAR_15 = VAR_7->size;
 }

 VAR_15 = FUNC_6(VAR_15, 1ULL << 32);

 VAR_14 = FUNC_8(VAR_15) - 1;
 VAR_14 &= ~0xf;

 while (VAR_10 < VAR_11) {




  FUNC_7(VAR_6, FUNC_5(VAR_12),
       FUNC_2(VAR_16));
  FUNC_7(VAR_6, FUNC_5(VAR_10), FUNC_1(VAR_16));
  FUNC_7(VAR_6, FUNC_5(VAR_14) | VAR_13,
       FUNC_0(VAR_16));

  FUNC_7(VAR_6, FUNC_9(VAR_12),
       FUNC_2(VAR_16 + 1));
  FUNC_7(VAR_6, FUNC_9(VAR_10),
       FUNC_1(VAR_16 + 1));
  FUNC_7(VAR_6, 0, FUNC_0(VAR_16 + 1));

  VAR_12 += VAR_15;
  VAR_10 += VAR_15;
  VAR_16 += 2;

  if (VAR_16 > VAR_5) {
   FUNC_4(VAR_6->dev, "Failed to map inbound regions!\n");
   return -VAR_0;
  }
 }
 *VAR_8 = VAR_16;

 return 0;
}
