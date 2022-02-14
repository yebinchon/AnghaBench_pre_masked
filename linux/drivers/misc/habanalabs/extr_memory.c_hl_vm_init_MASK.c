
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_vm {int init_done; int dram_pg_pool; int phys_pg_pack_handles; int idr_lock; int dram_pg_pool_refcount; } ;
struct asic_fixed_properties {scalar_t__ dram_user_base_address; scalar_t__ dram_end_address; int dram_page_size; } ;
struct hl_device {int dram_used_mem; int dev; struct hl_vm vm; struct asic_fixed_properties asic_prop; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct hl_device *VAR_1)
{
 struct asic_fixed_properties *VAR_2 = &VAR_1->asic_prop;
 struct hl_vm *VAR_3 = &VAR_1->vm;
 int VAR_4;

 VAR_3->dram_pg_pool = FUNC_4(FUNC_0(VAR_2->dram_page_size), -1);
 if (!VAR_3->dram_pg_pool) {
  FUNC_2(VAR_1->dev, "Failed to create dram page pool\n");
  return -VAR_0;
 }

 FUNC_7(&VAR_3->dram_pg_pool_refcount);

 VAR_4 = FUNC_3(VAR_3->dram_pg_pool, VAR_2->dram_user_base_address,
   VAR_2->dram_end_address - VAR_2->dram_user_base_address,
   -1);

 if (VAR_4) {
  FUNC_2(VAR_1->dev,
   "Failed to add memory to dram page pool %d\n", VAR_4);
  goto pool_add_err;
 }

 FUNC_8(&VAR_3->idr_lock);
 FUNC_6(&VAR_3->phys_pg_pack_handles);

 FUNC_1(&VAR_1->dram_used_mem, 0);

 VAR_3->init_done = 1;

 return 0;

pool_add_err:
 FUNC_5(VAR_3->dram_pg_pool);

 return VAR_4;
}
