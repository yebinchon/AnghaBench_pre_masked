
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_mailbox {int completion; int rsp_status; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct qlcnic_mailbox *VAR_1)
{
 VAR_1->rsp_status = VAR_0;
 FUNC_0(&VAR_1->completion);
}
