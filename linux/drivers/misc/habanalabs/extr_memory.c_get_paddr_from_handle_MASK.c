
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct hl_vm_phys_pg_pack {int * pages; } ;
struct hl_vm {int idr_lock; int phys_pg_pack_handles; } ;
struct TYPE_2__ {int handle; } ;
struct hl_mem_in {TYPE_1__ map_device; } ;
struct hl_device {int dev; struct hl_vm vm; } ;
struct hl_ctx {struct hl_device* hdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 struct hl_vm_phys_pg_pack* FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct hl_ctx *VAR_1, struct hl_mem_in *VAR_2,
    u64 *VAR_3)
{
 struct hl_device *VAR_4 = VAR_1->hdev;
 struct hl_vm *VAR_5 = &VAR_4->vm;
 struct hl_vm_phys_pg_pack *VAR_6;
 u32 VAR_7;

 VAR_7 = FUNC_2(VAR_2->map_device.handle);
 FUNC_3(&VAR_5->idr_lock);
 VAR_6 = FUNC_1(&VAR_5->phys_pg_pack_handles, VAR_7);
 if (!VAR_6) {
  FUNC_4(&VAR_5->idr_lock);
  FUNC_0(VAR_4->dev, "no match for handle %u\n", VAR_7);
  return -VAR_0;
 }

 *VAR_3 = VAR_6->pages[0];

 FUNC_4(&VAR_5->idr_lock);

 return 0;
}
