
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slave {int dev; } ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct bonding {int curr_active_slave; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int FUNC_0 (struct bonding*,struct sk_buff*,int ) ;
 int FUNC_1 (struct net_device*,struct sk_buff*) ;
 struct bonding* FUNC_2 (struct net_device*) ;
 struct slave* FUNC_3 (int ) ;

__attribute__((used)) static netdev_tx_t FUNC_4(struct sk_buff *VAR_1,
       struct net_device *VAR_2)
{
 struct bonding *VAR_3 = FUNC_2(VAR_2);
 struct slave *VAR_4;

 VAR_4 = FUNC_3(VAR_3->curr_active_slave);
 if (VAR_4)
  FUNC_0(VAR_3, VAR_1, VAR_4->dev);
 else
  FUNC_1(VAR_2, VAR_1);

 return VAR_0;
}
