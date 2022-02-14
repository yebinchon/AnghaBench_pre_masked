
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct vm_area_struct {struct vm_area_struct* vm_next; scalar_t__ vm_start; scalar_t__ vm_end; } ;
struct pacct_struct {unsigned long ac_mem; long ac_exitcode; int ac_majflt; int ac_minflt; int ac_stime; int ac_utime; int ac_flag; } ;
struct TYPE_10__ {int flags; TYPE_3__* sighand; scalar_t__ maj_flt; scalar_t__ min_flt; TYPE_2__* mm; TYPE_1__* signal; } ;
struct TYPE_9__ {int siglock; } ;
struct TYPE_8__ {int mmap_sem; struct vm_area_struct* mmap; } ;
struct TYPE_7__ {struct pacct_struct pacct; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_4__* VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int *) ;

void FUNC_6(long VAR_9, int VAR_10)
{
 struct pacct_struct *VAR_11 = &VAR_8->signal->pacct;
 u64 VAR_12, VAR_13;
 unsigned long VAR_14 = 0;

 if (VAR_10 && VAR_8->mm) {
  struct vm_area_struct *VAR_15;

  FUNC_0(&VAR_8->mm->mmap_sem);
  VAR_15 = VAR_8->mm->mmap;
  while (VAR_15) {
   VAR_14 += VAR_15->vm_end - VAR_15->vm_start;
   VAR_15 = VAR_15->vm_next;
  }
  FUNC_5(&VAR_8->mm->mmap_sem);
 }

 FUNC_1(&VAR_8->sighand->siglock);
 if (VAR_10)
  VAR_11->ac_mem = VAR_14 / 1024;
 if (FUNC_4(VAR_8)) {
  VAR_11->ac_exitcode = VAR_9;
  if (VAR_8->flags & VAR_5)
   VAR_11->ac_flag |= VAR_1;
 }
 if (VAR_8->flags & VAR_7)
  VAR_11->ac_flag |= VAR_2;
 if (VAR_8->flags & VAR_4)
  VAR_11->ac_flag |= VAR_0;
 if (VAR_8->flags & VAR_6)
  VAR_11->ac_flag |= VAR_3;

 FUNC_3(VAR_8, &VAR_12, &VAR_13);
 VAR_11->ac_utime += VAR_12;
 VAR_11->ac_stime += VAR_13;
 VAR_11->ac_minflt += VAR_8->min_flt;
 VAR_11->ac_majflt += VAR_8->maj_flt;
 FUNC_2(&VAR_8->sighand->siglock);
}
