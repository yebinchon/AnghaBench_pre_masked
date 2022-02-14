
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slave {int dev; } ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct bonding {int slave_arr; } ;
struct bond_up_slave {struct slave** arr; int count; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct bonding*,struct sk_buff*,int ) ;
 int FUNC_2 (struct net_device*,struct sk_buff*) ;
 unsigned int FUNC_3 (struct bonding*,struct sk_buff*) ;
 scalar_t__ FUNC_4 (unsigned int) ;
 struct bonding* FUNC_5 (struct net_device*) ;
 struct bond_up_slave* FUNC_6 (int ) ;

__attribute__((used)) static netdev_tx_t FUNC_7(struct sk_buff *VAR_1,
         struct net_device *VAR_2)
{
 struct bonding *VAR_3 = FUNC_5(VAR_2);
 struct slave *VAR_4;
 struct bond_up_slave *VAR_5;
 unsigned int VAR_6;

 VAR_5 = FUNC_6(VAR_3->slave_arr);
 VAR_6 = VAR_5 ? FUNC_0(VAR_5->count) : 0;
 if (FUNC_4(VAR_6)) {
  VAR_4 = VAR_5->arr[FUNC_3(VAR_3, VAR_1) % VAR_6];
  FUNC_1(VAR_3, VAR_1, VAR_4->dev);
 } else {
  FUNC_2(VAR_2, VAR_1);
 }

 return VAR_0;
}
