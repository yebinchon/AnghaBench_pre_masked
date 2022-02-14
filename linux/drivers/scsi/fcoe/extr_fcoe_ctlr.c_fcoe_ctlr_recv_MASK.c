
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct fcoe_ctlr {int recv_work; int fip_recv_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct sk_buff*,int ) ;

void FUNC_3(struct fcoe_ctlr *VAR_1, struct sk_buff *VAR_2)
{
 VAR_2 = FUNC_2(VAR_2, VAR_0);
 if (!VAR_2)
  return;
 FUNC_1(&VAR_1->fip_recv_list, VAR_2);
 FUNC_0(&VAR_1->recv_work);
}
