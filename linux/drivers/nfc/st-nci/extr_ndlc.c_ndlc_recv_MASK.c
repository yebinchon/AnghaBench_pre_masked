
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct llt_ndlc {int sm_work; int rcv_q; int hard_fault; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct sk_buff*) ;
 int FUNC_1 (struct llt_ndlc*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct sk_buff*) ;

void FUNC_5(struct llt_ndlc *VAR_1, struct sk_buff *VAR_2)
{
 if (VAR_2 == ((void*)0)) {
  FUNC_2("NULL Frame -> link is dead\n");
  VAR_1->hard_fault = -VAR_0;
  FUNC_1(VAR_1);
 } else {
  FUNC_0("incoming frame", VAR_2);
  FUNC_4(&VAR_1->rcv_q, VAR_2);
 }

 FUNC_3(&VAR_1->sm_work);
}
