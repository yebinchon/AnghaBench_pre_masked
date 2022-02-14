
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
struct hl_vm_phys_pg_pack {size_t npages; int * pages; int page_size; int total_size; scalar_t__ contiguous; int created_from_userptr; } ;
struct hl_vm {int dram_pg_pool_refcount; int dram_pg_pool; } ;
struct hl_device {struct hl_vm vm; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct hl_vm_phys_pg_pack*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct hl_device *VAR_1,
  struct hl_vm_phys_pg_pack *VAR_2)
{
 struct hl_vm *VAR_3 = &VAR_1->vm;
 u64 VAR_4;

 if (!VAR_2->created_from_userptr) {
  if (VAR_2->contiguous) {
   FUNC_0(VAR_3->dram_pg_pool, VAR_2->pages[0],
     VAR_2->total_size);

   for (VAR_4 = 0; VAR_4 < VAR_2->npages ; VAR_4++)
    FUNC_2(&VAR_3->dram_pg_pool_refcount,
     VAR_0);
  } else {
   for (VAR_4 = 0 ; VAR_4 < VAR_2->npages ; VAR_4++) {
    FUNC_0(VAR_3->dram_pg_pool,
      VAR_2->pages[VAR_4],
      VAR_2->page_size);
    FUNC_2(&VAR_3->dram_pg_pool_refcount,
     VAR_0);
   }
  }
 }

 FUNC_3(VAR_2->pages);
 FUNC_1(VAR_2);
}
