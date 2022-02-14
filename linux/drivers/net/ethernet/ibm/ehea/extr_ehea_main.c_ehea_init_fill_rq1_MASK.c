
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int len; struct sk_buff** arr; } ;
struct ehea_port_res {int qp; TYPE_2__ rq1_skba; TYPE_1__* port; } ;
struct TYPE_3__ {struct net_device* netdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 struct sk_buff* FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,char*) ;

__attribute__((used)) static void FUNC_3(struct ehea_port_res *VAR_1, int VAR_2)
{
 struct sk_buff **VAR_3 = VAR_1->rq1_skba.arr;
 struct net_device *VAR_4 = VAR_1->port->netdev;
 int VAR_5;

 if (VAR_2 > VAR_1->rq1_skba.len) {
  FUNC_2(VAR_4, "NR_RQ1A bigger than skb array len\n");
  return;
 }

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_3[VAR_5] = FUNC_1(VAR_4, VAR_0);
  if (!VAR_3[VAR_5])
   break;
 }

 FUNC_0(VAR_1->qp, VAR_5 - 1);
}
