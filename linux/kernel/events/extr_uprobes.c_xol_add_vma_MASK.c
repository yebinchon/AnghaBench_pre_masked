
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xol_area {int vaddr; int xol_mapping; } ;
struct vm_area_struct {int dummy; } ;
struct TYPE_2__ {scalar_t__ xol_area; } ;
struct mm_struct {int mmap_sem; TYPE_1__ uprobes_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct vm_area_struct*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct vm_area_struct*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct vm_area_struct* FUNC_2 (struct mm_struct*,int,scalar_t__,int,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_5 (scalar_t__*,struct xol_area*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct mm_struct *VAR_9, struct xol_area *VAR_10)
{
 struct vm_area_struct *VAR_11;
 int VAR_12;

 if (FUNC_3(&VAR_9->mmap_sem))
  return -VAR_1;

 if (VAR_9->uprobes_state.xol_area) {
  VAR_12 = -VAR_0;
  goto fail;
 }

 if (!VAR_10->vaddr) {

  VAR_10->vaddr = FUNC_4(((void*)0), VAR_4 - VAR_3,
      VAR_3, 0, 0);
  if (VAR_10->vaddr & ~VAR_2) {
   VAR_12 = VAR_10->vaddr;
   goto fail;
  }
 }

 VAR_11 = FUNC_2(VAR_9, VAR_10->vaddr, VAR_3,
    VAR_6|VAR_8|VAR_5|VAR_7,
    &VAR_10->xol_mapping);
 if (FUNC_0(VAR_11)) {
  VAR_12 = FUNC_1(VAR_11);
  goto fail;
 }

 VAR_12 = 0;

 FUNC_5(&VAR_9->uprobes_state.xol_area, VAR_10);
 fail:
 FUNC_6(&VAR_9->mmap_sem);

 return VAR_12;
}
