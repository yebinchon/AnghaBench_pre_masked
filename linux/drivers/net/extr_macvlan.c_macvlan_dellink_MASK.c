
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct macvlan_dev {scalar_t__ mode; int lowerdev; int list; int port; } ;
struct list_head {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct macvlan_dev*) ;
 struct macvlan_dev* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,struct net_device*) ;
 int FUNC_4 (struct net_device*,struct list_head*) ;

void FUNC_5(struct net_device *VAR_1, struct list_head *VAR_2)
{
 struct macvlan_dev *VAR_3 = FUNC_2(VAR_1);

 if (VAR_3->mode == VAR_0)
  FUNC_1(VAR_3->port, VAR_3);
 FUNC_0(&VAR_3->list);
 FUNC_4(VAR_1, VAR_2);
 FUNC_3(VAR_3->lowerdev, VAR_1);
}
