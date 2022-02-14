
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct bonding {int dummy; } ;
typedef int netdev_tx_t ;


 int FUNC_0 (struct bonding*) ;







 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*,struct net_device*) ;
 int FUNC_3 (struct sk_buff*,struct net_device*) ;
 scalar_t__ FUNC_4 (struct bonding*) ;
 int FUNC_5 (struct bonding*,struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,struct net_device*) ;
 int FUNC_7 (struct net_device*,struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,struct net_device*) ;
 int FUNC_9 (struct sk_buff*,struct net_device*) ;
 int FUNC_10 (struct sk_buff*,struct net_device*) ;
 int FUNC_11 (struct net_device*,char*,int) ;
 struct bonding* FUNC_12 (struct net_device*) ;

__attribute__((used)) static netdev_tx_t FUNC_13(struct sk_buff *VAR_1, struct net_device *VAR_2)
{
 struct bonding *VAR_3 = FUNC_12(VAR_2);

 if (FUNC_4(VAR_3) &&
     !FUNC_5(VAR_3, VAR_1))
  return VAR_0;

 switch (FUNC_0(VAR_3)) {
 case 130:
  return FUNC_10(VAR_1, VAR_2);
 case 133:
  return FUNC_8(VAR_1, VAR_2);
 case 134:
 case 128:
  return FUNC_2(VAR_1, VAR_2);
 case 131:
  return FUNC_9(VAR_1, VAR_2);
 case 132:
  return FUNC_3(VAR_1, VAR_2);
 case 129:
  return FUNC_6(VAR_1, VAR_2);
 default:

  FUNC_11(VAR_2, "Unknown bonding mode %d\n", FUNC_0(VAR_3));
  FUNC_1(1);
  FUNC_7(VAR_2, VAR_1);
  return VAR_0;
 }
}
