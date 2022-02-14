
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hl_vm_phys_pg_pack {int total_size; int mapping_cnt; } ;
struct hl_vm {int idr_lock; int phys_pg_pack_handles; } ;
struct hl_device {int dev; int dram_used_mem; struct hl_vm vm; } ;
struct hl_ctx {int dram_phys_mem; struct hl_device* hdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct hl_device*,struct hl_vm_phys_pg_pack*) ;
 struct hl_vm_phys_pg_pack* FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct hl_ctx *VAR_1, u32 VAR_2)
{
 struct hl_device *VAR_3 = VAR_1->hdev;
 struct hl_vm *VAR_4 = &VAR_3->vm;
 struct hl_vm_phys_pg_pack *VAR_5;

 FUNC_6(&VAR_4->idr_lock);
 VAR_5 = FUNC_4(&VAR_4->phys_pg_pack_handles, VAR_2);
 if (VAR_5) {
  if (FUNC_1(&VAR_5->mapping_cnt) > 0) {
   FUNC_2(VAR_3->dev, "handle %u is mapped, cannot free\n",
    VAR_2);
   FUNC_7(&VAR_4->idr_lock);
   return -VAR_0;
  }






  FUNC_5(&VAR_4->phys_pg_pack_handles, VAR_2);
  FUNC_7(&VAR_4->idr_lock);

  FUNC_0(VAR_5->total_size, &VAR_1->dram_phys_mem);
  FUNC_0(VAR_5->total_size, &VAR_3->dram_used_mem);

  FUNC_3(VAR_3, VAR_5);
 } else {
  FUNC_7(&VAR_4->idr_lock);
  FUNC_2(VAR_3->dev,
   "free device memory failed, no match for handle %u\n",
   VAR_2);
  return -VAR_0;
 }

 return 0;
}
