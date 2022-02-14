
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct be_queue_info {int id; } ;
struct TYPE_4__ {struct be_queue_info q; } ;
struct TYPE_6__ {TYPE_2__* ptag_state; TYPE_1__ mcc_obj; } ;
struct beiscsi_hba {scalar_t__ db_va; TYPE_3__ ctrl; } ;
struct TYPE_5__ {int tag_state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;

void FUNC_3(struct beiscsi_hba *VAR_4, unsigned int VAR_5)
{
 struct be_queue_info *VAR_6 = &VAR_4->ctrl.mcc_obj.q;
 u32 VAR_7 = 0;

 FUNC_1(VAR_3, &VAR_4->ctrl.ptag_state[VAR_5].tag_state);
 VAR_7 |= VAR_6->id & VAR_2;
 VAR_7 |= 1 << VAR_0;

 FUNC_2();
 FUNC_0(VAR_7, VAR_4->db_va + VAR_1);
}
