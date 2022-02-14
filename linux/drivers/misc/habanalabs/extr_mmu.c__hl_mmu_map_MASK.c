
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct asic_fixed_properties {scalar_t__ mmu_dram_default_page_addr; int va_space_dram_end_address; int va_space_dram_start_address; } ;
struct hl_device {int dev; scalar_t__ dram_default_page_mapping; struct asic_fixed_properties asic_prop; } ;
struct hl_ctx {struct hl_device* hdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct hl_ctx*) ;
 int FUNC_3 (struct hl_ctx*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct hl_ctx*,scalar_t__,int*) ;
 scalar_t__ FUNC_5 (struct hl_ctx*) ;
 scalar_t__ FUNC_6 (struct hl_ctx*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (struct hl_ctx*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (struct hl_ctx*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (struct hl_ctx*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (struct hl_ctx*,scalar_t__,scalar_t__) ;
 int FUNC_11 (struct hl_ctx*,scalar_t__) ;
 int FUNC_12 (scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_13 (struct hl_ctx*,scalar_t__,scalar_t__) ;
 int FUNC_14 (struct hl_ctx*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_15(struct hl_ctx *VAR_8, u64 VAR_9, u64 VAR_10,
  u32 VAR_11)
{
 struct hl_device *VAR_12 = VAR_8->hdev;
 struct asic_fixed_properties *VAR_13 = &VAR_12->asic_prop;
 u64 VAR_14 = 0, VAR_15 = 0,
  VAR_16 = 0, VAR_17 = 0,
  VAR_18 = 0, VAR_19 = 0,
  VAR_20 = 0, VAR_21 = 0,
  VAR_22 = 0, VAR_23 = 0,
  VAR_24 = 0;
 bool VAR_25 = 0, VAR_26 = 0, VAR_27 = 0,
  VAR_28 = 0, VAR_29, VAR_30;
 int VAR_31 = -VAR_2;
 VAR_29 = VAR_11 == VAR_5;

 VAR_30 = FUNC_12(VAR_9, VAR_11,
    VAR_13->va_space_dram_start_address,
    VAR_13->va_space_dram_end_address);

 if (VAR_30 && !VAR_29) {
  FUNC_1(VAR_12->dev, "DRAM mapping should use huge pages only\n");
  return -VAR_0;
 }

 VAR_14 = FUNC_5(VAR_8);
 VAR_15 = FUNC_6(VAR_8, VAR_14, VAR_9);
 VAR_24 = *(u64 *) (uintptr_t) VAR_15;

 VAR_16 = FUNC_4(VAR_8, VAR_24, &VAR_25);
 if (VAR_16 == VAR_7)
  goto err;

 VAR_17 = FUNC_7(VAR_8, VAR_16, VAR_9);
 VAR_24 = *(u64 *) (uintptr_t) VAR_17;

 VAR_18 = FUNC_4(VAR_8, VAR_24, &VAR_26);
 if (VAR_18 == VAR_7)
  goto err;

 VAR_19 = FUNC_8(VAR_8, VAR_18, VAR_9);
 VAR_24 = *(u64 *) (uintptr_t) VAR_19;

 VAR_20 = FUNC_4(VAR_8, VAR_24, &VAR_27);
 if (VAR_20 == VAR_7)
  goto err;

 VAR_21 = FUNC_9(VAR_8, VAR_20, VAR_9);
 VAR_24 = *(u64 *) (uintptr_t) VAR_21;

 if (!VAR_29) {
  VAR_22 = FUNC_4(VAR_8, VAR_24, &VAR_28);
  if (VAR_22 == VAR_7)
   goto err;

  VAR_23 = FUNC_10(VAR_8, VAR_22, VAR_9);
  VAR_24 = *(u64 *) (uintptr_t) VAR_23;
 }

 if (VAR_12->dram_default_page_mapping && VAR_30) {
  u64 VAR_32 = (VAR_13->mmu_dram_default_page_addr &
     VAR_6) | VAR_3 |
      VAR_4;

  if (VAR_24 != VAR_32) {
   FUNC_1(VAR_12->dev,
    "DRAM: mapping already exists for virt_addr 0x%llx\n",
     VAR_9);
   VAR_31 = -VAR_1;
   goto err;
  }

  if (VAR_25 || VAR_26 || VAR_27 || VAR_28) {
   FUNC_1(VAR_12->dev,
    "DRAM mapping should not allocate more hops\n");
   VAR_31 = -VAR_0;
   goto err;
  }
 } else if (VAR_24 & VAR_4) {
  FUNC_1(VAR_12->dev,
   "mapping already exists for virt_addr 0x%llx\n",
    VAR_9);

  FUNC_0(VAR_12->dev, "hop0 pte: 0x%llx (0x%llx)\n",
   *(u64 *) (uintptr_t) VAR_15, VAR_15);
  FUNC_0(VAR_12->dev, "hop1 pte: 0x%llx (0x%llx)\n",
   *(u64 *) (uintptr_t) VAR_17, VAR_17);
  FUNC_0(VAR_12->dev, "hop2 pte: 0x%llx (0x%llx)\n",
   *(u64 *) (uintptr_t) VAR_19, VAR_19);
  FUNC_0(VAR_12->dev, "hop3 pte: 0x%llx (0x%llx)\n",
   *(u64 *) (uintptr_t) VAR_21, VAR_21);

  if (!VAR_29)
   FUNC_0(VAR_12->dev, "hop4 pte: 0x%llx (0x%llx)\n",
    *(u64 *) (uintptr_t) VAR_23,
    VAR_23);

  VAR_31 = -VAR_1;
  goto err;
 }

 VAR_24 = (VAR_10 & VAR_6) | VAR_3
   | VAR_4;

 if (VAR_29)
  FUNC_13(VAR_8, VAR_21, VAR_24);
 else
  FUNC_13(VAR_8, VAR_23, VAR_24);

 if (VAR_25) {
  VAR_24 =
   (VAR_16 & VAR_6) | VAR_4;
  FUNC_14(VAR_8, VAR_15, VAR_24);
 }
 if (VAR_26) {
  VAR_24 =
   (VAR_18 & VAR_6) | VAR_4;
  FUNC_14(VAR_8, VAR_17, VAR_24);
  FUNC_11(VAR_8, VAR_16);
 }
 if (VAR_27) {
  VAR_24 =
   (VAR_20 & VAR_6) | VAR_4;
  FUNC_14(VAR_8, VAR_19, VAR_24);
  FUNC_11(VAR_8, VAR_18);
 }

 if (!VAR_29) {
  if (VAR_28) {
   VAR_24 = (VAR_22 & VAR_6) |
     VAR_4;
   FUNC_14(VAR_8, VAR_21, VAR_24);
   FUNC_11(VAR_8, VAR_20);
  }

  FUNC_11(VAR_8, VAR_22);
 } else {
  FUNC_11(VAR_8, VAR_20);
 }

 FUNC_2(VAR_8);

 return 0;

err:
 if (VAR_28)
  FUNC_3(VAR_8, VAR_22);
 if (VAR_27)
  FUNC_3(VAR_8, VAR_20);
 if (VAR_26)
  FUNC_3(VAR_8, VAR_18);
 if (VAR_25)
  FUNC_3(VAR_8, VAR_16);

 return VAR_31;
}
