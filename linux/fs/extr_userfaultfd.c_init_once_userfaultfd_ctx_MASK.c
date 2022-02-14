
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct userfaultfd_ctx {int refile_seq; int fd_wqh; int event_wqh; int fault_wqh; int fault_pending_wqh; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct userfaultfd_ctx *VAR_1 = (struct userfaultfd_ctx *) VAR_0;

 FUNC_0(&VAR_1->fault_pending_wqh);
 FUNC_0(&VAR_1->fault_wqh);
 FUNC_0(&VAR_1->event_wqh);
 FUNC_0(&VAR_1->fd_wqh);
 FUNC_1(&VAR_1->refile_seq);
}
