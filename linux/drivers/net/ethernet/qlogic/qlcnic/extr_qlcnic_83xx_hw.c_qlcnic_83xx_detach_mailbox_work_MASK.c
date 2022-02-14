
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_mailbox {int work_q; int work; int completion; int status; } ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct TYPE_2__ {struct qlcnic_mailbox* mailbox; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct qlcnic_adapter*) ;

void FUNC_5(struct qlcnic_adapter *VAR_1)
{
 struct qlcnic_mailbox *VAR_2 = VAR_1->ahw->mailbox;

 if (!VAR_2)
  return;

 FUNC_1(VAR_0, &VAR_2->status);
 FUNC_2(&VAR_2->completion);
 FUNC_0(&VAR_2->work);
 FUNC_3(VAR_2->work_q);
 FUNC_4(VAR_1);
}
