
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mbox_int; } ;
struct qla_hw_data {int mbx_intr_comp; int mbx_cmd_flags; TYPE_1__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static inline void
FUNC_4(struct qla_hw_data *VAR_2, int VAR_3)
{
 if (FUNC_3(VAR_1, &VAR_2->mbx_cmd_flags) &&
     (VAR_3 & VAR_0) && VAR_2->flags.mbox_int) {
  FUNC_2(VAR_0, &VAR_2->mbx_cmd_flags);
  FUNC_0(VAR_1, &VAR_2->mbx_cmd_flags);
  FUNC_1(&VAR_2->mbx_intr_comp);
 }
}
