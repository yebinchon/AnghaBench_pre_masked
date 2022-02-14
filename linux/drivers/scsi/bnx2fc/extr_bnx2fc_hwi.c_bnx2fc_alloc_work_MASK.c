
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bnx2fc_work {int wqe; struct bnx2fc_rport* tgt; int list; } ;
struct bnx2fc_rport {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct bnx2fc_work* FUNC_1 (int,int ) ;

__attribute__((used)) static struct bnx2fc_work *FUNC_2(struct bnx2fc_rport *VAR_1, u16 VAR_2)
{
 struct bnx2fc_work *VAR_3;
 VAR_3 = FUNC_1(sizeof(struct bnx2fc_work), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_0(&VAR_3->list);
 VAR_3->tgt = VAR_1;
 VAR_3->wqe = VAR_2;
 return VAR_3;
}
