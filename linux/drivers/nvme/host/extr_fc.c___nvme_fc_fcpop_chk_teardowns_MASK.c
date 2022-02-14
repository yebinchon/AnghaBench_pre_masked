
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_fc_fcp_op {int dummy; } ;
struct nvme_fc_ctrl {int flags; int lock; int ioabort_wait; int iocnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void
FUNC_3(struct nvme_fc_ctrl *VAR_2,
  struct nvme_fc_fcp_op *VAR_3, int VAR_4)
{
 unsigned long VAR_5;

 if (VAR_4 == VAR_1) {
  FUNC_0(&VAR_2->lock, VAR_5);
  if (VAR_2->flags & VAR_0) {
   if (!--VAR_2->iocnt)
    FUNC_2(&VAR_2->ioabort_wait);
  }
  FUNC_1(&VAR_2->lock, VAR_5);
 }
}
