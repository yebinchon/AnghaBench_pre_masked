
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct hl_device {int dev; } ;
struct TYPE_2__ {int lock; int list; } ;
struct hl_ctx {int mem_hash_lock; TYPE_1__ host_va_range; TYPE_1__ dram_va_range; int mem_hash; int asid; struct hl_device* hdev; } ;


 int FUNC_0 (struct hl_device*,int *) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct hl_device*,struct hl_ctx*) ;
 int FUNC_4 (struct hl_ctx*) ;
 int FUNC_5 (struct hl_ctx*) ;
 int FUNC_6 (struct hl_device*,TYPE_1__*,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct hl_ctx *VAR_0, u64 VAR_1,
    u64 VAR_2, u64 VAR_3,
    u64 VAR_4)
{
 struct hl_device *VAR_5 = VAR_0->hdev;
 int VAR_6;

 VAR_6 = FUNC_5(VAR_0);
 if (VAR_6) {
  FUNC_1(VAR_5->dev, "failed to init context %d\n", VAR_0->asid);
  return VAR_6;
 }

 FUNC_8(&VAR_0->mem_hash_lock);
 FUNC_2(VAR_0->mem_hash);

 FUNC_8(&VAR_0->host_va_range.lock);

 VAR_6 = FUNC_6(VAR_5, &VAR_0->host_va_range, VAR_1,
   VAR_2);
 if (VAR_6) {
  FUNC_1(VAR_5->dev, "failed to init host vm range\n");
  goto host_vm_err;
 }

 FUNC_8(&VAR_0->dram_va_range.lock);

 VAR_6 = FUNC_6(VAR_5, &VAR_0->dram_va_range, VAR_3,
   VAR_4);
 if (VAR_6) {
  FUNC_1(VAR_5->dev, "failed to init dram vm range\n");
  goto dram_vm_err;
 }

 FUNC_3(VAR_5, VAR_0);

 return 0;

dram_vm_err:
 FUNC_7(&VAR_0->dram_va_range.lock);

 FUNC_9(&VAR_0->host_va_range.lock);
 FUNC_0(VAR_5, &VAR_0->host_va_range.list);
 FUNC_10(&VAR_0->host_va_range.lock);
host_vm_err:
 FUNC_7(&VAR_0->host_va_range.lock);
 FUNC_7(&VAR_0->mem_hash_lock);
 FUNC_4(VAR_0);

 return VAR_6;
}
