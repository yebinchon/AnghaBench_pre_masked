
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct sym_tcb {int to_reset; } ;
struct sym_hcb {int myaddr; int istat_sem; struct sym_tcb* target; } ;


 int FUNC_0 (struct sym_hcb*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

int FUNC_1(struct sym_hcb *VAR_4, int VAR_5)
{
 struct sym_tcb *VAR_6;

 if (VAR_5 == VAR_4->myaddr || (u_int)VAR_5 >= VAR_2)
  return -1;

 VAR_6 = &VAR_4->target[VAR_5];
 VAR_6->to_reset = 1;

 VAR_4->istat_sem = VAR_0;
 FUNC_0(VAR_4, VAR_3, VAR_1|VAR_0);

 return 0;
}
