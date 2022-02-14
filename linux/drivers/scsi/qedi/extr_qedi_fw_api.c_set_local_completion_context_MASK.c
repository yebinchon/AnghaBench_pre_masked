
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int flags; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {TYPE_1__ state; } ;
struct e4_iscsi_task_context {TYPE_3__ ustorm_st_context; TYPE_2__ ystorm_st_context; } ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct e4_iscsi_task_context *VAR_2)
{
 FUNC_0(VAR_2->ystorm_st_context.state.flags,
    VAR_1, 1);
 FUNC_0(VAR_2->ustorm_st_context.flags,
    VAR_0, 1);
}
