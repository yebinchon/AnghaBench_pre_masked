
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmxnet3_adapter {int wol; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int supported; int wolopts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vmxnet3_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void
FUNC_1(struct net_device *VAR_3, struct ethtool_wolinfo *VAR_4)
{
 struct vmxnet3_adapter *VAR_5 = FUNC_0(VAR_3);

 VAR_4->supported = VAR_2 | VAR_0 | VAR_1;
 VAR_4->wolopts = VAR_5->wol;
}
