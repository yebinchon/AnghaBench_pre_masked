
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int flags; } ;
struct TYPE_6__ {struct net_device* netdev; } ;
struct hnae3_handle {TYPE_2__* ae_algo; int netdev_flags; TYPE_3__ kinfo; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* restore_vlan_table ) (struct hnae3_handle*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (struct hnae3_handle*) ;

__attribute__((used)) static int FUNC_6(struct hnae3_handle *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->kinfo.netdev;
 bool VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, 0);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_4(VAR_2, VAR_1->netdev_flags);
 if (VAR_4)
  return VAR_4;

 VAR_3 = VAR_2->flags & VAR_0 ? 0 : 1;
 FUNC_0(VAR_2, VAR_3);

 if (VAR_1->ae_algo->ops->restore_vlan_table)
  VAR_1->ae_algo->ops->restore_vlan_table(VAR_1);

 return FUNC_3(VAR_2);
}
