
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vm_area_struct {scalar_t__ vm_end; scalar_t__ vm_start; struct hl_cb* vm_private_data; int * vm_ops; int vm_pgoff; } ;
struct hl_fpriv {int cb_mgr; struct hl_device* hdev; } ;
struct hl_device {TYPE_1__* asic_funcs; int dev; } ;
struct hl_cb {int mmap; int lock; int size; int mmap_size; scalar_t__ kernel_address; } ;
typedef int phys_addr_t ;
struct TYPE_2__ {int (* cb_mmap ) (struct hl_device*,struct vm_area_struct*,scalar_t__,int ,int ) ;} ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,...) ;
 struct hl_cb* FUNC_2 (struct hl_device*,int *,int ) ;
 int FUNC_3 (struct hl_cb*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct hl_device*,struct vm_area_struct*,scalar_t__,int ,int ) ;
 int FUNC_7 (void*) ;

int FUNC_8(struct hl_fpriv *VAR_3, struct vm_area_struct *VAR_4)
{
 struct hl_device *VAR_5 = VAR_3->hdev;
 struct hl_cb *VAR_6;
 phys_addr_t VAR_7;
 u32 VAR_8;
 int VAR_9;

 VAR_8 = VAR_4->vm_pgoff;


 VAR_6 = FUNC_2(VAR_5, &VAR_3->cb_mgr, VAR_8);
 if (!VAR_6) {
  FUNC_1(VAR_5->dev,
   "CB mmap failed, no match to handle %d\n", VAR_8);
  return -VAR_0;
 }


 if ((VAR_4->vm_end - VAR_4->vm_start) != FUNC_0(VAR_6->size, VAR_1)) {
  FUNC_1(VAR_5->dev,
   "CB mmap failed, mmap size 0x%lx != 0x%x cb size\n",
   VAR_4->vm_end - VAR_4->vm_start, VAR_6->size);
  VAR_9 = -VAR_0;
  goto put_cb;
 }

 FUNC_4(&VAR_6->lock);

 if (VAR_6->mmap) {
  FUNC_1(VAR_5->dev,
   "CB mmap failed, CB already mmaped to user\n");
  VAR_9 = -VAR_0;
  goto release_lock;
 }

 VAR_6->mmap = 1;

 FUNC_5(&VAR_6->lock);

 VAR_4->vm_ops = &VAR_2;






 VAR_4->vm_private_data = VAR_6;


 VAR_7 = FUNC_7((void *) (uintptr_t) VAR_6->kernel_address);

 VAR_9 = VAR_5->asic_funcs->cb_mmap(VAR_5, VAR_4, VAR_6->kernel_address,
     VAR_7, VAR_6->size);

 if (VAR_9) {
  FUNC_4(&VAR_6->lock);
  VAR_6->mmap = 0;
  goto release_lock;
 }

 VAR_6->mmap_size = VAR_6->size;

 return 0;

release_lock:
 FUNC_5(&VAR_6->lock);
put_cb:
 FUNC_3(VAR_6);
 return VAR_9;
}
