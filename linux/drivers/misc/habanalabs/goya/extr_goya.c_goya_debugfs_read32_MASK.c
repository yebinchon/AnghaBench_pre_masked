
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct asic_fixed_properties {int dram_size; int dram_pci_bar_size; } ;
struct hl_device {int* pcie_bar; struct asic_fixed_properties asic_prop; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct hl_device*,int) ;
 int FUNC_2 (int *) ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct hl_device *VAR_12, u64 VAR_13, u32 *VAR_14)
{
 struct asic_fixed_properties *VAR_15 = &VAR_12->asic_prop;
 u64 VAR_16;
 int VAR_17 = 0;

 if ((VAR_13 >= VAR_0) && (VAR_13 < VAR_0 + VAR_1)) {
  *VAR_14 = FUNC_0(VAR_13 - VAR_0);

 } else if ((VAR_13 >= VAR_7) &&
   (VAR_13 < VAR_7 + VAR_9)) {

  *VAR_14 = FUNC_4(VAR_12->pcie_bar[VAR_8] +
    (VAR_13 - VAR_7));

 } else if ((VAR_13 >= VAR_3) &&
   (VAR_13 < VAR_3 + VAR_12->asic_prop.dram_size)) {

  u64 VAR_18 = VAR_3 +
    (VAR_13 & ~(VAR_15->dram_pci_bar_size - 0x1ull));

  VAR_16 = FUNC_1(VAR_12, VAR_18);
  if (VAR_16 != VAR_10) {
   *VAR_14 = FUNC_4(VAR_12->pcie_bar[VAR_2] +
      (VAR_13 - VAR_18));

   VAR_16 = FUNC_1(VAR_12,
       VAR_16);
  }
  if (VAR_16 == VAR_10)
   VAR_17 = -VAR_5;

 } else if (VAR_13 >= VAR_6 && !FUNC_2(&VAR_11)) {
  *VAR_14 = *(u32 *) FUNC_3(VAR_13 - VAR_6);

 } else {
  VAR_17 = -VAR_4;
 }

 return VAR_17;
}
