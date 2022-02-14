
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int len; int os_skbs; int index; struct sk_buff** arr; } ;
struct ehea_port_res {int qp; TYPE_2__ rq1_skba; TYPE_1__* port; } ;
struct TYPE_3__ {struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 struct sk_buff* FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ehea_port_res *VAR_3, int VAR_4, int VAR_5)
{
 struct sk_buff **VAR_6 = VAR_3->rq1_skba.arr;
 struct net_device *VAR_7 = VAR_3->port->netdev;
 int VAR_8 = VAR_3->rq1_skba.len - 1;
 int VAR_9 = VAR_3->rq1_skba.os_skbs + VAR_5;
 int VAR_10 = 0;
 int VAR_11;

 VAR_3->rq1_skba.os_skbs = 0;

 if (FUNC_3(FUNC_2(VAR_1, &VAR_2))) {
  if (VAR_5 > 0)
   VAR_3->rq1_skba.index = VAR_4;
  VAR_3->rq1_skba.os_skbs = VAR_9;
  return;
 }

 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
  if (!VAR_6[VAR_4]) {
   VAR_6[VAR_4] = FUNC_1(VAR_7,
             VAR_0);
   if (!VAR_6[VAR_4]) {
    VAR_3->rq1_skba.os_skbs = VAR_9 - VAR_11;
    break;
   }
  }
  VAR_4--;
  VAR_4 &= VAR_8;
  VAR_10++;
 }

 if (VAR_10 == 0)
  return;


 FUNC_0(VAR_3->qp, VAR_10);
}
