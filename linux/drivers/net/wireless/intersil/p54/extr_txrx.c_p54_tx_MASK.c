
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct p54_common {int tx_pending; } ;


 int FUNC_0 (struct p54_common*) ;
 int FUNC_1 (int *,struct sk_buff*) ;

void FUNC_2(struct p54_common *VAR_0, struct sk_buff *VAR_1)
{
 FUNC_1(&VAR_0->tx_pending, VAR_1);
 FUNC_0(VAR_0);
}
