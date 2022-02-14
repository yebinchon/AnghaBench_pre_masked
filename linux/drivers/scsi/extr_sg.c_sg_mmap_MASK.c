
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; int vm_flags; int * vm_ops; TYPE_2__* vm_private_data; scalar_t__ vm_pgoff; } ;
struct file {scalar_t__ private_data; } ;
struct TYPE_3__ {unsigned long bufflen; int page_order; int k_use_sg; } ;
struct TYPE_4__ {int mmap_called; int f_mutex; TYPE_1__ reserve; int parentdp; } ;
typedef TYPE_1__ Sg_scatter_hold ;
typedef TYPE_2__ Sg_fd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_8 ;
 int FUNC_3 (int ,int ,char*,void*,int) ;

__attribute__((used)) static int
FUNC_4(struct file *VAR_9, struct vm_area_struct *VAR_10)
{
 Sg_fd *VAR_11;
 unsigned long VAR_12, VAR_13, VAR_14;
 Sg_scatter_hold *VAR_15;
 int VAR_16, VAR_17;
 int VAR_18 = 0;

 if ((!VAR_9) || (!VAR_10) || (!(VAR_11 = (Sg_fd *) VAR_9->private_data)))
  return -VAR_2;
 VAR_12 = VAR_10->vm_end - VAR_10->vm_start;
 FUNC_0(3, FUNC_3(VAR_3, VAR_11->parentdp,
          "sg_mmap starting, vm_start=%p, len=%d\n",
          (void *) VAR_10->vm_start, (int) VAR_12));
 if (VAR_10->vm_pgoff)
  return -VAR_0;
 VAR_15 = &VAR_11->reserve;
 FUNC_1(&VAR_11->f_mutex);
 if (VAR_12 > VAR_15->bufflen) {
  VAR_18 = -VAR_1;
  goto out;
 }

 VAR_14 = VAR_10->vm_start;
 VAR_17 = 1 << (VAR_4 + VAR_15->page_order);
 for (VAR_16 = 0; VAR_16 < VAR_15->k_use_sg && VAR_14 < VAR_10->vm_end; VAR_16++) {
  VAR_13 = VAR_10->vm_end - VAR_14;
  VAR_13 = (VAR_13 < VAR_17) ? VAR_13 : VAR_17;
  VAR_14 += VAR_13;
 }

 VAR_11->mmap_called = 1;
 VAR_10->vm_flags |= VAR_7 | VAR_6 | VAR_5;
 VAR_10->vm_private_data = VAR_11;
 VAR_10->vm_ops = &VAR_8;
out:
 FUNC_2(&VAR_11->f_mutex);
 return VAR_18;
}
