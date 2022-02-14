
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_mailbox {int work_q; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct qlcnic_mailbox*) ;

void FUNC_2(struct qlcnic_mailbox *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_0(VAR_0->work_q);
 FUNC_1(VAR_0);
}
