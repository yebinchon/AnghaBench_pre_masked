
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct be_queue_info {int id; } ;
struct TYPE_3__ {struct be_queue_info cq; } ;
struct TYPE_4__ {TYPE_1__ mcc_obj; } ;
struct beiscsi_hba {TYPE_2__ ctrl; } ;
struct be_mcc_compl {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct beiscsi_hba*) ;
 int FUNC_1 (struct beiscsi_hba*,struct be_mcc_compl*) ;
 int FUNC_2 (TYPE_2__*,struct be_mcc_compl*) ;
 int FUNC_3 (struct beiscsi_hba*,int ,unsigned int,int) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct be_queue_info*) ;
 struct be_mcc_compl* FUNC_6 (struct be_queue_info*) ;

void FUNC_7(struct beiscsi_hba *VAR_3)
{
 struct be_queue_info *VAR_4;
 struct be_mcc_compl *VAR_5;
 unsigned int VAR_6 = 0;

 VAR_4 = &VAR_3->ctrl.mcc_obj.cq;
 VAR_5 = FUNC_6(VAR_4);
 VAR_5->flags = FUNC_4(VAR_5->flags);
 while (VAR_5->flags & VAR_2) {
  if (FUNC_0(VAR_3))
   return;

  if (VAR_6 >= 32) {
   FUNC_3(VAR_3, VAR_4->id,
     VAR_6, 0);
   VAR_6 = 0;
  }
  if (VAR_5->flags & VAR_0) {
   FUNC_1(VAR_3, VAR_5);
  } else if (VAR_5->flags & VAR_1) {
   FUNC_2(&VAR_3->ctrl, VAR_5);
  }

  VAR_5->flags = 0;
  FUNC_5(VAR_4);
  VAR_5 = FUNC_6(VAR_4);
  VAR_5->flags = FUNC_4(VAR_5->flags);
  VAR_6++;
 }

 if (VAR_6 > 0)
  FUNC_3(VAR_3, VAR_4->id, VAR_6, 1);
}
