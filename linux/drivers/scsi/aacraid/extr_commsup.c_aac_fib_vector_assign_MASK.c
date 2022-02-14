
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct fib {size_t vector_no; } ;
struct aac_dev {int max_msix; size_t vector_cap; TYPE_1__* scsi_host_ptr; struct fib* fibs; } ;
struct TYPE_2__ {size_t can_queue; } ;


 size_t VAR_0 ;

void FUNC_0(struct aac_dev *VAR_1)
{
 u32 VAR_2 = 0;
 u32 VAR_3 = 1;
 struct fib *VAR_4 = ((void*)0);

 for (VAR_2 = 0, VAR_4 = &VAR_1->fibs[VAR_2];
  VAR_2 < (VAR_1->scsi_host_ptr->can_queue + VAR_0);
  VAR_2++, VAR_4++) {
  if ((VAR_1->max_msix == 1) ||
    (VAR_2 > ((VAR_1->scsi_host_ptr->can_queue + VAR_0 - 1)
   - VAR_1->vector_cap))) {
   VAR_4->vector_no = 0;
  } else {
   VAR_4->vector_no = VAR_3;
   VAR_3++;
   if (VAR_3 == VAR_1->max_msix)
    VAR_3 = 1;
  }
 }
}
