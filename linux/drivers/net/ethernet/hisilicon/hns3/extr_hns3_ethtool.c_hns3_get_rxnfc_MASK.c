
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int num_tqps; } ;
struct hnae3_handle {TYPE_3__* ae_algo; TYPE_1__ kinfo; } ;
struct ethtool_rxnfc {int cmd; int data; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {int (* get_rss_tuple ) (struct hnae3_handle*,struct ethtool_rxnfc*) ;int (* get_fd_rule_cnt ) (struct hnae3_handle*,struct ethtool_rxnfc*) ;int (* get_fd_rule_info ) (struct hnae3_handle*,struct ethtool_rxnfc*) ;int (* get_fd_all_rules ) (struct hnae3_handle*,struct ethtool_rxnfc*,int *) ;} ;


 int VAR_0 ;





 struct hnae3_handle* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct hnae3_handle*,struct ethtool_rxnfc*) ;
 int FUNC_2 (struct hnae3_handle*,struct ethtool_rxnfc*) ;
 int FUNC_3 (struct hnae3_handle*,struct ethtool_rxnfc*) ;
 int FUNC_4 (struct hnae3_handle*,struct ethtool_rxnfc*,int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1,
     struct ethtool_rxnfc *VAR_2,
     u32 *VAR_3)
{
 struct hnae3_handle *VAR_4 = FUNC_0(VAR_1);

 switch (VAR_2->cmd) {
 case 128:
  VAR_2->data = VAR_4->kinfo.num_tqps;
  return 0;
 case 129:
  if (VAR_4->ae_algo->ops->get_rss_tuple)
   return VAR_4->ae_algo->ops->get_rss_tuple(VAR_4, VAR_2);
  return -VAR_0;
 case 131:
  if (VAR_4->ae_algo->ops->get_fd_rule_cnt)
   return VAR_4->ae_algo->ops->get_fd_rule_cnt(VAR_4, VAR_2);
  return -VAR_0;
 case 130:
  if (VAR_4->ae_algo->ops->get_fd_rule_info)
   return VAR_4->ae_algo->ops->get_fd_rule_info(VAR_4, VAR_2);
  return -VAR_0;
 case 132:
  if (VAR_4->ae_algo->ops->get_fd_all_rules)
   return VAR_4->ae_algo->ops->get_fd_all_rules(VAR_4, VAR_2,
         VAR_3);
  return -VAR_0;
 default:
  return -VAR_0;
 }
}
