
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int * ethtool_ops; int * netdev_ops; } ;
struct aq_nic_s {struct net_device* ndev; } ;


 int VAR_0 ;
 struct net_device* FUNC_0 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct aq_nic_s* FUNC_1 (struct net_device*) ;

struct net_device *FUNC_2(void)
{
 struct net_device *VAR_3 = ((void*)0);
 struct aq_nic_s *VAR_4 = ((void*)0);

 VAR_3 = FUNC_0(sizeof(struct aq_nic_s), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_4 = FUNC_1(VAR_3);
 VAR_4->ndev = VAR_3;
 VAR_3->netdev_ops = &VAR_2;
 VAR_3->ethtool_ops = &VAR_1;

 return VAR_3;
}
