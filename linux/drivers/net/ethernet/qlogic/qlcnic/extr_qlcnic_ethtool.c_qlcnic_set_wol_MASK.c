
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qlcnic_adapter {int portnum; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct qlcnic_adapter*,int ,int*) ;
 int FUNC_1 (struct qlcnic_adapter*,int ,int) ;
 int VAR_5 ;
 struct qlcnic_adapter* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_6, struct ethtool_wolinfo *VAR_7)
{
 struct qlcnic_adapter *VAR_8 = FUNC_2(VAR_6);
 u32 VAR_9;
 int VAR_10 = 0;

 if (FUNC_3(VAR_8))
  return -VAR_2;
 if (VAR_7->wolopts & ~VAR_5)
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_8, VAR_4, &VAR_10);
 if (VAR_10 == -VAR_1)
  return VAR_10;
 if (!(VAR_9 & (1 << VAR_8->portnum)))
  return -VAR_2;

 VAR_9 = FUNC_0(VAR_8, VAR_3, &VAR_10);
 if (VAR_10 == -VAR_1)
  return VAR_10;
 if (VAR_7->wolopts & VAR_5)
  VAR_9 |= 1UL << VAR_8->portnum;
 else
  VAR_9 &= ~(1UL << VAR_8->portnum);

 FUNC_1(VAR_8, VAR_3, VAR_9);

 return 0;
}
