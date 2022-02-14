
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct seq_file {struct hl_debugfs_entry* private; } ;
struct hl_device {int dev; TYPE_1__* asic_funcs; struct hl_ctx* compute_ctx; struct hl_ctx* kernel_ctx; int mmu_enable; } ;
struct hl_debugfs_entry {struct hl_dbg_device_entry* dev_entry; } ;
struct hl_dbg_device_entry {scalar_t__ mmu_addr; scalar_t__ mmu_asid; struct hl_device* hdev; } ;
struct hl_ctx {int mmu_lock; } ;
struct TYPE_2__ {scalar_t__ (* read_pte ) (struct hl_device*,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (struct hl_ctx*) ;
 scalar_t__ FUNC_2 (struct hl_ctx*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (struct hl_ctx*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (struct hl_ctx*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (struct hl_ctx*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (struct hl_ctx*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct seq_file*,char*,scalar_t__,...) ;
 scalar_t__ FUNC_11 (struct hl_device*,scalar_t__) ;
 scalar_t__ FUNC_12 (struct hl_device*,scalar_t__) ;
 scalar_t__ FUNC_13 (struct hl_device*,scalar_t__) ;
 scalar_t__ FUNC_14 (struct hl_device*,scalar_t__) ;
 scalar_t__ FUNC_15 (struct hl_device*,scalar_t__) ;

__attribute__((used)) static int FUNC_16(struct seq_file *VAR_4, void *VAR_5)
{
 struct hl_debugfs_entry *VAR_6 = VAR_4->private;
 struct hl_dbg_device_entry *VAR_7 = VAR_6->dev_entry;
 struct hl_device *VAR_8 = VAR_7->hdev;
 struct hl_ctx *VAR_9;

 u64 VAR_10 = 0, VAR_11 = 0, VAR_12 = 0,
  VAR_13 = 0, VAR_14 = 0, VAR_15 = 0,
  VAR_16 = 0, VAR_17 = 0, VAR_18 = 0,
  VAR_19 = 0, VAR_20 = 0, VAR_21 = 0,
  VAR_22 = 0, VAR_23 = 0, VAR_24 = 0,
  VAR_25 = VAR_7->mmu_addr;

 if (!VAR_8->mmu_enable)
  return 0;

 if (VAR_7->mmu_asid == VAR_0)
  VAR_9 = VAR_8->kernel_ctx;
 else
  VAR_9 = VAR_8->compute_ctx;

 if (!VAR_9) {
  FUNC_0(VAR_8->dev, "no ctx available\n");
  return 0;
 }

 FUNC_8(&VAR_9->mmu_lock);



 VAR_10 = FUNC_1(VAR_9);
 VAR_11 = FUNC_2(VAR_9, VAR_10, VAR_25);
 VAR_12 = VAR_8->asic_funcs->read_pte(VAR_8, VAR_11);
 VAR_13 = FUNC_7(VAR_12);

 if (VAR_13 == VAR_3)
  goto not_mapped;

 VAR_14 = FUNC_3(VAR_9, VAR_13, VAR_25);
 VAR_15 = VAR_8->asic_funcs->read_pte(VAR_8, VAR_14);
 VAR_16 = FUNC_7(VAR_15);

 if (VAR_16 == VAR_3)
  goto not_mapped;

 VAR_17 = FUNC_4(VAR_9, VAR_16, VAR_25);
 VAR_18 = VAR_8->asic_funcs->read_pte(VAR_8, VAR_17);
 VAR_19 = FUNC_7(VAR_18);

 if (VAR_19 == VAR_3)
  goto not_mapped;

 VAR_20 = FUNC_5(VAR_9, VAR_19, VAR_25);
 VAR_21 = VAR_8->asic_funcs->read_pte(VAR_8, VAR_20);

 if (!(VAR_21 & VAR_1)) {
  VAR_22 = FUNC_7(VAR_21);

  if (VAR_22 == VAR_3)
   goto not_mapped;

  VAR_23 = FUNC_6(VAR_9, VAR_22, VAR_25);
  VAR_24 = VAR_8->asic_funcs->read_pte(VAR_8, VAR_23);
  if (!(VAR_24 & VAR_2))
   goto not_mapped;
 } else {
  if (!(VAR_21 & VAR_2))
   goto not_mapped;
 }

 FUNC_10(VAR_4, "asid: %u, virt_addr: 0x%llx\n",
   VAR_7->mmu_asid, VAR_7->mmu_addr);

 FUNC_10(VAR_4, "hop0_addr: 0x%llx\n", VAR_10);
 FUNC_10(VAR_4, "hop0_pte_addr: 0x%llx\n", VAR_11);
 FUNC_10(VAR_4, "hop0_pte: 0x%llx\n", VAR_12);

 FUNC_10(VAR_4, "hop1_addr: 0x%llx\n", VAR_13);
 FUNC_10(VAR_4, "hop1_pte_addr: 0x%llx\n", VAR_14);
 FUNC_10(VAR_4, "hop1_pte: 0x%llx\n", VAR_15);

 FUNC_10(VAR_4, "hop2_addr: 0x%llx\n", VAR_16);
 FUNC_10(VAR_4, "hop2_pte_addr: 0x%llx\n", VAR_17);
 FUNC_10(VAR_4, "hop2_pte: 0x%llx\n", VAR_18);

 FUNC_10(VAR_4, "hop3_addr: 0x%llx\n", VAR_19);
 FUNC_10(VAR_4, "hop3_pte_addr: 0x%llx\n", VAR_20);
 FUNC_10(VAR_4, "hop3_pte: 0x%llx\n", VAR_21);

 if (!(VAR_21 & VAR_1)) {
  FUNC_10(VAR_4, "hop4_addr: 0x%llx\n", VAR_22);
  FUNC_10(VAR_4, "hop4_pte_addr: 0x%llx\n", VAR_23);
  FUNC_10(VAR_4, "hop4_pte: 0x%llx\n", VAR_24);
 }

 goto out;

not_mapped:
 FUNC_0(VAR_8->dev, "virt addr 0x%llx is not mapped to phys addr\n",
   VAR_25);
out:
 FUNC_9(&VAR_9->mmu_lock);

 return 0;
}
