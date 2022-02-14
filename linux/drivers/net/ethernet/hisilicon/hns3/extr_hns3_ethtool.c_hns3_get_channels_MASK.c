
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hnae3_handle {TYPE_2__* ae_algo; } ;
struct ethtool_channels {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* get_channels ) (struct hnae3_handle*,struct ethtool_channels*) ;} ;


 struct hnae3_handle* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct hnae3_handle*,struct ethtool_channels*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
         struct ethtool_channels *VAR_1)
{
 struct hnae3_handle *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->ae_algo->ops->get_channels)
  VAR_2->ae_algo->ops->get_channels(VAR_2, VAR_1);
}
