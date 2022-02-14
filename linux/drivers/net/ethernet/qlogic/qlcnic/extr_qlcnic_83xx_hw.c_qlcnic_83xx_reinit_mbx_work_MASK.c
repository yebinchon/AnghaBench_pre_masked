
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_mailbox {int status; int completion; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct qlcnic_mailbox *VAR_1)
{
 FUNC_0(&VAR_1->completion);
 FUNC_1(VAR_0, &VAR_1->status);
}
