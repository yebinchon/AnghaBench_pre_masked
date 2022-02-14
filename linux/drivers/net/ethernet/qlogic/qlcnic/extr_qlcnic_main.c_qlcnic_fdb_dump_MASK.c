
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct qlcnic_adapter {int flags; int fdb_mac_learn; } ;
struct netlink_callback {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,struct netlink_callback*,struct net_device*,struct net_device*,int*) ;
 struct qlcnic_adapter* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct qlcnic_adapter*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_1, struct netlink_callback *VAR_2,
   struct net_device *VAR_3,
   struct net_device *VAR_4, int *VAR_5)
{
 struct qlcnic_adapter *VAR_6 = FUNC_1(VAR_3);
 int VAR_7 = 0;

 if (!VAR_6->fdb_mac_learn)
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

 if ((VAR_6->flags & VAR_0) ||
     FUNC_2(VAR_6))
  VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

 return VAR_7;
}
