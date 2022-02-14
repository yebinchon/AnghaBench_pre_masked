
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct llt_ndlc {int sm_work; int send_q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (int *,struct sk_buff*) ;

int FUNC_3(struct llt_ndlc *VAR_3, struct sk_buff *VAR_4)
{

 u8 VAR_5 = VAR_2 | VAR_0 |
  VAR_1;

 *(u8 *)FUNC_1(VAR_4, 1) = VAR_5;
 FUNC_2(&VAR_3->send_q, VAR_4);

 FUNC_0(&VAR_3->sm_work);

 return 0;
}
