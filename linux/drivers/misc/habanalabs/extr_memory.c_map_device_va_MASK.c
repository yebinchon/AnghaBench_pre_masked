
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct hl_vm_phys_pg_pack {int flags; scalar_t__ asid; int mapping_cnt; scalar_t__ total_size; scalar_t__ offset; } ;
struct hl_vm_hash_node {int* ptr; int node; scalar_t__ vaddr; } ;
struct hl_vm {int idr_lock; int phys_pg_pack_handles; } ;
struct hl_userptr {int dummy; } ;
struct TYPE_5__ {scalar_t__ hint_addr; int handle; } ;
struct TYPE_4__ {scalar_t__ hint_addr; int host_virt_addr; } ;
struct hl_mem_in {int flags; TYPE_2__ map_device; TYPE_1__ map_host; } ;
struct hl_device {int dev; TYPE_3__* asic_funcs; struct hl_vm vm; } ;
struct hl_ctx {scalar_t__ asid; int dram_va_range; int host_va_range; int mem_hash_lock; int mem_hash; int mmu_lock; struct hl_device* hdev; } ;
typedef enum vm_type_t { ____Placeholder_vm_type_t } vm_type_t ;
struct TYPE_6__ {int (* mmu_invalidate_cache ) (struct hl_device*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct hl_device*,int *,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,char*,int ,scalar_t__) ;
 int FUNC_5 (struct hl_device*,struct hl_vm_phys_pg_pack*) ;
 int FUNC_6 (struct hl_device*,struct hl_userptr*) ;
 int FUNC_7 (struct hl_device*,struct hl_mem_in*,struct hl_userptr**) ;
 scalar_t__ FUNC_8 (struct hl_device*,int *,scalar_t__,scalar_t__,int) ;
 int FUNC_9 (int ,int *,scalar_t__) ;
 struct hl_vm_phys_pg_pack* FUNC_10 (int *,int ) ;
 int FUNC_11 (struct hl_ctx*,struct hl_userptr*,struct hl_vm_phys_pg_pack**) ;
 int FUNC_12 (struct hl_vm_hash_node*) ;
 struct hl_vm_hash_node* FUNC_13 (int,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct hl_ctx*,scalar_t__,struct hl_vm_phys_pg_pack*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct hl_device*,int) ;

__attribute__((used)) static int FUNC_21(struct hl_ctx *VAR_6, struct hl_mem_in *VAR_7,
  u64 *VAR_8)
{
 struct hl_device *VAR_9 = VAR_6->hdev;
 struct hl_vm *VAR_10 = &VAR_9->vm;
 struct hl_vm_phys_pg_pack *VAR_11;
 struct hl_userptr *VAR_12 = ((void*)0);
 struct hl_vm_hash_node *VAR_13;
 enum vm_type_t *VAR_14;
 u64 VAR_15, VAR_16;
 u32 VAR_17 = 0;
 int VAR_18;
 bool VAR_19 = VAR_7->flags & VAR_5;


 *VAR_8 = 0;

 if (VAR_19) {
  VAR_18 = FUNC_7(VAR_9, VAR_7, &VAR_12);
  if (VAR_18) {
   FUNC_3(VAR_9->dev, "failed to get userptr from va\n");
   return VAR_18;
  }

  VAR_18 = FUNC_11(VAR_6, VAR_12,
    &VAR_11);
  if (VAR_18) {
   FUNC_3(VAR_9->dev,
    "unable to init page pack for vaddr 0x%llx\n",
    VAR_7->map_host.host_virt_addr);
   goto init_page_pack_err;
  }

  VAR_14 = (enum vm_type_t *) VAR_12;
  VAR_16 = VAR_7->map_host.hint_addr;
 } else {
  VAR_17 = FUNC_14(VAR_7->map_device.handle);

  FUNC_18(&VAR_10->idr_lock);
  VAR_11 = FUNC_10(&VAR_10->phys_pg_pack_handles, VAR_17);
  if (!VAR_11) {
   FUNC_19(&VAR_10->idr_lock);
   FUNC_3(VAR_9->dev,
    "no match for handle %u\n", VAR_17);
   return -VAR_0;
  }


  FUNC_2(&VAR_11->mapping_cnt);

  FUNC_19(&VAR_10->idr_lock);

  VAR_14 = (enum vm_type_t *) VAR_11;

  VAR_16 = VAR_7->map_device.hint_addr;
 }





 if (!VAR_19 && !(VAR_11->flags & VAR_4) &&
   VAR_11->asid != VAR_6->asid) {
  FUNC_3(VAR_9->dev,
   "Failed to map memory, handle %u is not shared\n",
   VAR_17);
  VAR_18 = -VAR_2;
  goto shared_err;
 }

 VAR_13 = FUNC_13(sizeof(*VAR_13), VAR_3);
 if (!VAR_13) {
  VAR_18 = -VAR_1;
  goto hnode_err;
 }

 VAR_15 = FUNC_8(VAR_9,
   VAR_19 ? &VAR_6->host_va_range : &VAR_6->dram_va_range,
   VAR_11->total_size, VAR_16, VAR_19);
 if (!VAR_15) {
  FUNC_3(VAR_9->dev, "no available va block for handle %u\n",
    VAR_17);
  VAR_18 = -VAR_1;
  goto va_block_err;
 }

 FUNC_16(&VAR_6->mmu_lock);

 VAR_18 = FUNC_15(VAR_6, VAR_15, VAR_11);
 if (VAR_18) {
  FUNC_17(&VAR_6->mmu_lock);
  FUNC_3(VAR_9->dev, "mapping page pack failed for handle %u\n",
    VAR_17);
  goto map_err;
 }

 VAR_9->asic_funcs->mmu_invalidate_cache(VAR_9, 0);

 FUNC_17(&VAR_6->mmu_lock);

 VAR_15 += VAR_11->offset;

 VAR_13->ptr = VAR_14;
 VAR_13->vaddr = VAR_15;

 FUNC_16(&VAR_6->mem_hash_lock);
 FUNC_9(VAR_6->mem_hash, &VAR_13->node, VAR_15);
 FUNC_17(&VAR_6->mem_hash_lock);

 *VAR_8 = VAR_15;

 if (VAR_19)
  FUNC_5(VAR_9, VAR_11);

 return 0;

map_err:
 if (FUNC_0(VAR_9,
   VAR_19 ? &VAR_6->host_va_range : &VAR_6->dram_va_range,
   VAR_15,
   VAR_15 + VAR_11->total_size - 1))
  FUNC_4(VAR_9->dev,
   "release va block failed for handle 0x%x, vaddr: 0x%llx\n",
    VAR_17, VAR_15);

va_block_err:
 FUNC_12(VAR_13);
hnode_err:
shared_err:
 FUNC_1(&VAR_11->mapping_cnt);
 if (VAR_19)
  FUNC_5(VAR_9, VAR_11);
init_page_pack_err:
 if (VAR_19)
  FUNC_6(VAR_9, VAR_12);

 return VAR_18;
}
