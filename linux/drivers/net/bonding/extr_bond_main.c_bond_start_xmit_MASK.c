
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct bonding {int dummy; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct net_device*) ;
 scalar_t__ FUNC_1 (struct bonding*) ;
 int FUNC_2 (struct net_device*,struct sk_buff*) ;
 int FUNC_3 (struct net_device*) ;
 struct bonding* FUNC_4 (struct net_device*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static netdev_tx_t FUNC_8(struct sk_buff *VAR_2, struct net_device *VAR_3)
{
 struct bonding *VAR_4 = FUNC_4(VAR_3);
 netdev_tx_t VAR_5 = VAR_1;




 if (FUNC_7(FUNC_3(VAR_3)))
  return VAR_0;

 FUNC_5();
 if (FUNC_1(VAR_4))
  VAR_5 = FUNC_0(VAR_2, VAR_3);
 else
  FUNC_2(VAR_3, VAR_2);
 FUNC_6();

 return VAR_5;
}
