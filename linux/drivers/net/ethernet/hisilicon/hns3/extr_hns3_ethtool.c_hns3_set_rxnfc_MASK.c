
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hnae3_handle {TYPE_2__* ae_algo; } ;
struct ethtool_rxnfc {int cmd; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_rss_tuple ) (struct hnae3_handle*,struct ethtool_rxnfc*) ;int (* add_fd_entry ) (struct hnae3_handle*,struct ethtool_rxnfc*) ;int (* del_fd_entry ) (struct hnae3_handle*,struct ethtool_rxnfc*) ;} ;


 int VAR_0 ;



 struct hnae3_handle* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct hnae3_handle*,struct ethtool_rxnfc*) ;
 int FUNC_2 (struct hnae3_handle*,struct ethtool_rxnfc*) ;
 int FUNC_3 (struct hnae3_handle*,struct ethtool_rxnfc*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, struct ethtool_rxnfc *VAR_2)
{
 struct hnae3_handle *VAR_3 = FUNC_0(VAR_1);

 switch (VAR_2->cmd) {
 case 128:
  if (VAR_3->ae_algo->ops->set_rss_tuple)
   return VAR_3->ae_algo->ops->set_rss_tuple(VAR_3, VAR_2);
  return -VAR_0;
 case 129:
  if (VAR_3->ae_algo->ops->add_fd_entry)
   return VAR_3->ae_algo->ops->add_fd_entry(VAR_3, VAR_2);
  return -VAR_0;
 case 130:
  if (VAR_3->ae_algo->ops->del_fd_entry)
   return VAR_3->ae_algo->ops->del_fd_entry(VAR_3, VAR_2);
  return -VAR_0;
 default:
  return -VAR_0;
 }
}
