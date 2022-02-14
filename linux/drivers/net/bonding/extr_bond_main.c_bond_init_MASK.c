
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ addr_assign_type; int dev_addr; int name; } ;
struct bonding {int bond_list; int stats_lock_key; int stats_lock; int wq; } ;
struct bond_net {int dev_list; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct bonding*) ;
 int VAR_3 ;
 int FUNC_2 (struct bonding*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 struct bond_net* FUNC_9 (int ,int ) ;
 int FUNC_10 (struct net_device*,char*) ;
 struct bonding* FUNC_11 (struct net_device*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_4)
{
 struct bonding *VAR_5 = FUNC_11(VAR_4);
 struct bond_net *VAR_6 = FUNC_9(FUNC_3(VAR_4), VAR_3);

 FUNC_10(VAR_4, "Begin bond_init\n");

 VAR_5->wq = FUNC_0(VAR_4->name, VAR_2);
 if (!VAR_5->wq)
  return -VAR_0;

 FUNC_12(&VAR_5->stats_lock);
 FUNC_7(&VAR_5->stats_lock_key);
 FUNC_8(&VAR_5->stats_lock, &VAR_5->stats_lock_key);

 FUNC_6(&VAR_5->bond_list, &VAR_6->dev_list);

 FUNC_2(VAR_5);

 FUNC_1(VAR_5);


 if (FUNC_5(VAR_4->dev_addr) &&
     VAR_4->addr_assign_type == VAR_1)
  FUNC_4(VAR_4);

 return 0;
}
