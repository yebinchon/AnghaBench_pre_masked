
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scif_window {int dummy; } ;
struct TYPE_2__ {int rma_lock; int reg_list; } ;
struct scif_endpt {TYPE_1__ rma_info; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct scif_window*,int *) ;

__attribute__((used)) static inline void
FUNC_3(struct scif_window *VAR_0, struct scif_endpt *VAR_1)
{
 FUNC_0(&VAR_1->rma_info.rma_lock);
 FUNC_2(VAR_0, &VAR_1->rma_info.reg_list);
 FUNC_1(&VAR_1->rma_info.rma_lock);
}
