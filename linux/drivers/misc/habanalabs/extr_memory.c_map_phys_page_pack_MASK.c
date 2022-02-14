
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
typedef scalar_t__ u32 ;
struct hl_vm_phys_pg_pack {size_t npages; size_t* pages; int handle; scalar_t__ page_size; } ;
struct hl_device {int dev; } ;
struct hl_ctx {struct hl_device* hdev; } ;


 int FUNC_0 (int ,char*,int ,size_t,size_t) ;
 int FUNC_1 (int ,char*,int ,size_t,size_t,scalar_t__) ;
 int FUNC_2 (struct hl_ctx*,size_t,size_t,scalar_t__) ;
 scalar_t__ FUNC_3 (struct hl_ctx*,size_t,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct hl_ctx *VAR_0, u64 VAR_1,
  struct hl_vm_phys_pg_pack *VAR_2)
{
 struct hl_device *VAR_3 = VAR_0->hdev;
 u64 VAR_4 = VAR_1, VAR_5, VAR_6 = 0, VAR_7;
 u32 VAR_8 = VAR_2->page_size;
 int VAR_9 = 0;

 for (VAR_7 = 0 ; VAR_7 < VAR_2->npages ; VAR_7++) {
  VAR_5 = VAR_2->pages[VAR_7];

  VAR_9 = FUNC_2(VAR_0, VAR_4, VAR_5, VAR_8);
  if (VAR_9) {
   FUNC_0(VAR_3->dev,
    "map failed for handle %u, npages: %llu, mapped: %llu",
    VAR_2->handle, VAR_2->npages,
    VAR_6);
   goto err;
  }

  VAR_6++;
  VAR_4 += VAR_8;
 }

 return 0;

err:
 VAR_4 = VAR_1;
 for (VAR_7 = 0 ; VAR_7 < VAR_6 ; VAR_7++) {
  if (FUNC_3(VAR_0, VAR_4, VAR_8))
   FUNC_1(VAR_3->dev,
    "failed to unmap handle %u, va: 0x%llx, pa: 0x%llx, page size: %u\n",
     VAR_2->handle, VAR_4,
     VAR_2->pages[VAR_7], VAR_8);

  VAR_4 += VAR_8;
 }

 return VAR_9;
}
