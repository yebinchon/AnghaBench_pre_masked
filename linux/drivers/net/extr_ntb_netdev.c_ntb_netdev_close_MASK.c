
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ntb_netdev {int tx_timer; int qp; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*) ;
 struct ntb_netdev* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 struct sk_buff* FUNC_4 (int ,int*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0)
{
 struct ntb_netdev *VAR_1 = FUNC_2(VAR_0);
 struct sk_buff *VAR_2;
 int VAR_3;

 FUNC_3(VAR_1->qp);

 while ((VAR_2 = FUNC_4(VAR_1->qp, &VAR_3)))
  FUNC_1(VAR_2);

 FUNC_0(&VAR_1->tx_timer);

 return 0;
}
