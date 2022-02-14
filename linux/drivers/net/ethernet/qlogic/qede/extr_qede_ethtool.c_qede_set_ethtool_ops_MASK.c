
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qede_dev {int dummy; } ;
struct net_device {int * ethtool_ops; } ;


 scalar_t__ FUNC_0 (struct qede_dev*) ;
 struct qede_dev* FUNC_1 (struct net_device*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_2(struct net_device *VAR_2)
{
 struct qede_dev *VAR_3 = FUNC_1(VAR_2);

 if (FUNC_0(VAR_3))
  VAR_2->ethtool_ops = &VAR_1;
 else
  VAR_2->ethtool_ops = &VAR_0;
}
