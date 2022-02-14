
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct macb {TYPE_1__* ptp_info; } ;
struct ethtool_ts_info {int dummy; } ;
struct TYPE_2__ {int (* get_ts_info ) (struct net_device*,struct ethtool_ts_info*) ;} ;


 int FUNC_0 (struct net_device*,struct ethtool_ts_info*) ;
 struct macb* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,struct ethtool_ts_info*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0,
       struct ethtool_ts_info *VAR_1)
{
 struct macb *VAR_2 = FUNC_1(VAR_0);

 if (VAR_2->ptp_info)
  return VAR_2->ptp_info->get_ts_info(VAR_0, VAR_1);

 return FUNC_0(VAR_0, VAR_1);
}
