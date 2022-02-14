
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_device {int dummy; } ;
struct net_device {int * ethtool_ops; } ;
struct lio {struct octeon_device* oct_dev; } ;


 struct lio* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct octeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_2(struct net_device *VAR_2)
{
 struct lio *VAR_3 = FUNC_0(VAR_2);
 struct octeon_device *VAR_4 = VAR_3->oct_dev;

 if (FUNC_1(VAR_4))
  VAR_2->ethtool_ops = &VAR_1;
 else
  VAR_2->ethtool_ops = &VAR_0;
}
