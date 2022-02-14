
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int num_tqps; int int_rl_setting; } ;
struct hnae3_handle {TYPE_1__ kinfo; } ;
struct ethtool_coalesce {int rx_coalesce_usecs_high; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,struct ethtool_coalesce*) ;
 struct hnae3_handle* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct net_device*,struct ethtool_coalesce*,int) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1,
        struct ethtool_coalesce *VAR_2)
{
 struct hnae3_handle *VAR_3 = FUNC_1(VAR_1);
 u16 VAR_4 = VAR_3->kinfo.num_tqps;
 int VAR_5;
 int VAR_6;

 if (FUNC_2(VAR_1))
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_1, VAR_2);
 if (VAR_5)
  return VAR_5;

 VAR_3->kinfo.int_rl_setting =
  FUNC_3(VAR_2->rx_coalesce_usecs_high);

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
  FUNC_4(VAR_1, VAR_2, VAR_6);

 return 0;
}
