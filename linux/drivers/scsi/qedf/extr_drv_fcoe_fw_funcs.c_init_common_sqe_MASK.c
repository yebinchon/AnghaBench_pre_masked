
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fcoe_task_params {int itid; TYPE_1__* sqe; } ;
typedef enum fcoe_sqe_request_type { ____Placeholder_fcoe_sqe_request_type } fcoe_sqe_request_type ;
struct TYPE_2__ {int task_id; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct fcoe_task_params *VAR_1,
       enum fcoe_sqe_request_type VAR_2)
{
 FUNC_1(VAR_1->sqe, 0, sizeof(*(VAR_1->sqe)));
 FUNC_0(VAR_1->sqe->flags, VAR_0,
    VAR_2);
 VAR_1->sqe->task_id = VAR_1->itid;
}
