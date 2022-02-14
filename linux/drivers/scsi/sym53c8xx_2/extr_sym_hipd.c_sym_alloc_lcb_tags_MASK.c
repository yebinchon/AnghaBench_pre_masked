
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_char ;
struct sym_tcb {int dummy; } ;
struct TYPE_2__ {int itlq_tbl_sa; } ;
struct sym_lcb {int* cb_tags; int * itlq_tbl; TYPE_1__ head; } ;
struct sym_hcb {int notask_ba; struct sym_tcb* target; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int* FUNC_1 (int,int,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int * FUNC_3 (int,char*) ;
 struct sym_lcb* FUNC_4 (struct sym_tcb*,size_t) ;
 int FUNC_5 (int *,int,char*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7 (struct sym_hcb *VAR_2, u_char VAR_3, u_char VAR_4)
{
 struct sym_tcb *VAR_5 = &VAR_2->target[VAR_3];
 struct sym_lcb *VAR_6 = FUNC_4(VAR_5, VAR_4);
 int VAR_7;





 VAR_6->itlq_tbl = FUNC_3(VAR_1*4, "ITLQ_TBL");
 if (!VAR_6->itlq_tbl)
  goto fail;
 VAR_6->cb_tags = FUNC_1(VAR_1, 1, VAR_0);
 if (!VAR_6->cb_tags) {
  FUNC_5(VAR_6->itlq_tbl, VAR_1*4, "ITLQ_TBL");
  VAR_6->itlq_tbl = ((void*)0);
  goto fail;
 }




 FUNC_2(VAR_6->itlq_tbl, FUNC_0(VAR_2->notask_ba), VAR_1);




 for (VAR_7 = 0 ; VAR_7 < VAR_1 ; VAR_7++)
  VAR_6->cb_tags[VAR_7] = VAR_7;





 VAR_6->head.itlq_tbl_sa = FUNC_0(FUNC_6(VAR_6->itlq_tbl));

 return;
fail:
 return;
}
