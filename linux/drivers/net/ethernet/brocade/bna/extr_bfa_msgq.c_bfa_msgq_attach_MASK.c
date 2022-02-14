
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_msgq {int ioc_notify; struct bfa_ioc* ioc; int rspq; int cmdq; } ;
struct bfa_ioc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct bfa_msgq*) ;
 int FUNC_1 (int *,struct bfa_msgq*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,struct bfa_msgq*) ;
 int FUNC_3 (struct bfa_ioc*,int ,int ,struct bfa_msgq*) ;
 int FUNC_4 (struct bfa_ioc*,int *) ;

void
FUNC_5(struct bfa_msgq *VAR_3, struct bfa_ioc *VAR_4)
{
 VAR_3->ioc = VAR_4;

 FUNC_1(&VAR_3->cmdq, VAR_3);
 FUNC_2(&VAR_3->rspq, VAR_3);

 FUNC_3(VAR_3->ioc, VAR_0, VAR_1, VAR_3);
 FUNC_0(&VAR_3->ioc_notify, VAR_2, VAR_3);
 FUNC_4(VAR_3->ioc, &VAR_3->ioc_notify);
}
