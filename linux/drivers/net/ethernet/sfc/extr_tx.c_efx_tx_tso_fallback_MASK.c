
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct sk_buff* next; } ;
struct efx_tx_queue {int dummy; } ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct efx_tx_queue*,struct sk_buff*) ;
 struct sk_buff* FUNC_4 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_5(struct efx_tx_queue *VAR_0,
          struct sk_buff *VAR_1)
{
 struct sk_buff *VAR_2, *VAR_3;

 VAR_2 = FUNC_4(VAR_1, 0);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 FUNC_2(VAR_1);
 VAR_1 = VAR_2;

 while (VAR_1) {
  VAR_3 = VAR_1->next;
  VAR_1->next = ((void*)0);

  FUNC_3(VAR_0, VAR_1);
  VAR_1 = VAR_3;
 }

 return 0;
}
