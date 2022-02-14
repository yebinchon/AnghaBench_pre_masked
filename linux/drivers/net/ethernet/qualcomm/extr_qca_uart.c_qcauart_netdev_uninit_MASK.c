
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcauart {int rx_skb; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct qcauart* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 struct qcauart *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->rx_skb);
}
