
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qede_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_ts_info {int dummy; } ;


 struct qede_dev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct qede_dev*,struct ethtool_ts_info*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
       struct ethtool_ts_info *VAR_1)
{
 struct qede_dev *VAR_2 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2, VAR_1);
}
