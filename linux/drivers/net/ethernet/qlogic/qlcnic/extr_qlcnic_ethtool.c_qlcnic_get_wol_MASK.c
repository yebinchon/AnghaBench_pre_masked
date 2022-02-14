
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct qlcnic_adapter {unsigned long portnum; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; int supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (struct qlcnic_adapter*,int ,int*) ;
 int VAR_3 ;
 struct qlcnic_adapter* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct qlcnic_adapter*) ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_4, struct ethtool_wolinfo *VAR_5)
{
 struct qlcnic_adapter *VAR_6 = FUNC_1(VAR_4);
 u32 VAR_7;
 int VAR_8 = 0;

 if (FUNC_2(VAR_6))
  return;
 VAR_5->supported = 0;
 VAR_5->wolopts = 0;

 VAR_7 = FUNC_0(VAR_6, VAR_2, &VAR_8);
 if (VAR_8 == -VAR_0)
  return;
 if (VAR_7 & (1UL << VAR_6->portnum))
  VAR_5->supported |= VAR_3;

 VAR_7 = FUNC_0(VAR_6, VAR_1, &VAR_8);
 if (VAR_7 & (1UL << VAR_6->portnum))
  VAR_5->wolopts |= VAR_3;
}
