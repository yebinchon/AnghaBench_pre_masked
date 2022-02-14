
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct slave {int dev; } ;
struct sk_buff {scalar_t__ protocol; } ;
struct net_device {int dummy; } ;
struct iphdr {scalar_t__ protocol; } ;
struct bonding {int slave_cnt; int curr_active_slave; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bonding*,struct sk_buff*,int ) ;
 int FUNC_2 (struct bonding*) ;
 int FUNC_3 (struct net_device*,struct sk_buff*) ;
 int FUNC_4 (struct bonding*,struct sk_buff*,int) ;
 scalar_t__ FUNC_5 (int ) ;
 struct iphdr* FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int) ;
 struct bonding* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct sk_buff*,int) ;
 struct slave* FUNC_10 (int ) ;
 int FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static netdev_tx_t FUNC_13(struct sk_buff *VAR_3,
     struct net_device *VAR_4)
{
 struct bonding *VAR_5 = FUNC_8(VAR_4);
 struct slave *VAR_6;
 int VAR_7;
 u32 VAR_8;







 if (VAR_3->protocol == FUNC_5(VAR_0)) {
  int VAR_9 = FUNC_11(VAR_3);
  struct iphdr *VAR_10;

  if (FUNC_12(!FUNC_9(VAR_3, VAR_9 + sizeof(*VAR_10))))
   goto non_igmp;

  VAR_10 = FUNC_6(VAR_3);
  if (VAR_10->protocol == VAR_1) {
   VAR_6 = FUNC_10(VAR_5->curr_active_slave);
   if (VAR_6)
    FUNC_1(VAR_5, VAR_3, VAR_6->dev);
   else
    FUNC_4(VAR_5, VAR_3, 0);
   return VAR_2;
  }
 }

non_igmp:
 VAR_7 = FUNC_0(VAR_5->slave_cnt);
 if (FUNC_7(VAR_7)) {
  VAR_8 = FUNC_2(VAR_5);
  FUNC_4(VAR_5, VAR_3, VAR_8 % VAR_7);
 } else {
  FUNC_3(VAR_4, VAR_3);
 }
 return VAR_2;
}
