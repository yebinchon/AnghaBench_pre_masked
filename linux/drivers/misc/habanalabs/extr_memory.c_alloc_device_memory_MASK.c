
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct hl_vm_phys_pg_pack {int npages; int page_size; int total_size; int flags; int contiguous; int* pages; int handle; int asid; int vm_type; } ;
struct hl_vm {int dram_pg_pool; int dram_pg_pool_refcount; int idr_lock; int phys_pg_pack_handles; } ;
struct TYPE_4__ {int mem_size; } ;
struct hl_mem_in {int flags; TYPE_2__ alloc; } ;
struct TYPE_3__ {int dram_page_size; } ;
struct hl_device {int dram_used_mem; int dev; TYPE_1__ asic_prop; struct hl_vm vm; } ;
struct hl_ctx {int dram_phys_mem; int asid; struct hl_device* hdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int *,struct hl_vm_phys_pg_pack*,int,int ,int ) ;
 int FUNC_6 (struct hl_vm_phys_pg_pack*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int*) ;
 int* FUNC_9 (int,int,int ) ;
 struct hl_vm_phys_pg_pack* FUNC_10 (int,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct hl_ctx *VAR_6, struct hl_mem_in *VAR_7,
    u32 *VAR_8)
{
 struct hl_device *VAR_9 = VAR_6->hdev;
 struct hl_vm *VAR_10 = &VAR_9->vm;
 struct hl_vm_phys_pg_pack *VAR_11;
 u64 VAR_12 = 0, VAR_13, VAR_14, VAR_15;
 u32 VAR_16, VAR_17, VAR_18;
 int VAR_19, VAR_20;
 bool VAR_21;

 VAR_16 = 0;
 VAR_17 = VAR_9->asic_prop.dram_page_size;
 VAR_18 = FUNC_0(VAR_17);
 VAR_14 = (VAR_7->alloc.mem_size + (VAR_17 - 1)) >> VAR_18;
 VAR_13 = VAR_14 << VAR_18;

 VAR_21 = VAR_7->flags & VAR_4;

 if (VAR_21) {
  VAR_12 = (u64) FUNC_3(VAR_10->dram_pg_pool, VAR_13);
  if (!VAR_12) {
   FUNC_2(VAR_9->dev,
    "failed to allocate %llu huge contiguous pages\n",
    VAR_14);
   return -VAR_1;
  }
 }

 VAR_11 = FUNC_10(sizeof(*VAR_11), VAR_3);
 if (!VAR_11) {
  VAR_20 = -VAR_1;
  goto pages_pack_err;
 }

 VAR_11->vm_type = VAR_5;
 VAR_11->asid = VAR_6->asid;
 VAR_11->npages = VAR_14;
 VAR_11->page_size = VAR_17;
 VAR_11->total_size = VAR_13;
 VAR_11->flags = VAR_7->flags;
 VAR_11->contiguous = VAR_21;

 VAR_11->pages = FUNC_9(VAR_14, sizeof(u64), VAR_3);
 if (!VAR_11->pages) {
  VAR_20 = -VAR_1;
  goto pages_arr_err;
 }

 if (VAR_11->contiguous) {
  for (VAR_15 = 0 ; VAR_15 < VAR_14 ; VAR_15++)
   VAR_11->pages[VAR_15] = VAR_12 + VAR_15 * VAR_17;
 } else {
  for (VAR_15 = 0 ; VAR_15 < VAR_14 ; VAR_15++) {
   VAR_11->pages[VAR_15] = (u64) FUNC_3(
       VAR_10->dram_pg_pool,
       VAR_17);
   if (!VAR_11->pages[VAR_15]) {
    FUNC_2(VAR_9->dev,
     "Failed to allocate device memory (out of memory)\n");
    VAR_20 = -VAR_1;
    goto page_err;
   }

   VAR_16++;
  }
 }

 FUNC_11(&VAR_10->idr_lock);
 VAR_19 = FUNC_5(&VAR_10->phys_pg_pack_handles, VAR_11, 1, 0,
    VAR_2);
 FUNC_12(&VAR_10->idr_lock);

 if (VAR_19 < 0) {
  FUNC_2(VAR_9->dev, "Failed to get handle for page\n");
  VAR_20 = -VAR_0;
  goto idr_err;
 }

 for (VAR_15 = 0 ; VAR_15 < VAR_14 ; VAR_15++)
  FUNC_7(&VAR_10->dram_pg_pool_refcount);

 VAR_11->handle = VAR_19;

 FUNC_1(VAR_11->total_size, &VAR_6->dram_phys_mem);
 FUNC_1(VAR_11->total_size, &VAR_9->dram_used_mem);

 *VAR_8 = VAR_19;

 return 0;

idr_err:
page_err:
 if (!VAR_11->contiguous)
  for (VAR_15 = 0 ; VAR_15 < VAR_16 ; VAR_15++)
   FUNC_4(VAR_10->dram_pg_pool, VAR_11->pages[VAR_15],
     VAR_17);

 FUNC_8(VAR_11->pages);
pages_arr_err:
 FUNC_6(VAR_11);
pages_pack_err:
 if (VAR_21)
  FUNC_4(VAR_10->dram_pg_pool, VAR_12, VAR_13);

 return VAR_20;
}
