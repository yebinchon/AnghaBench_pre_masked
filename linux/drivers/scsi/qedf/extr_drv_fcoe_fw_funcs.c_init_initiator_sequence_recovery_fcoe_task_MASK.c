
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct fcoe_task_params {TYPE_2__* sqe; } ;
struct TYPE_3__ {int seq_rec_updated_offset; } ;
struct TYPE_4__ {TYPE_1__ additional_info_union; } ;


 int VAR_0 ;
 int FUNC_0 (struct fcoe_task_params*,int ) ;

int FUNC_1(
 struct fcoe_task_params *VAR_1, u32 VAR_2)
{
 FUNC_0(VAR_1, VAR_0);
 VAR_1->sqe->additional_info_union.seq_rec_updated_offset =
        VAR_2;
 return 0;
}
