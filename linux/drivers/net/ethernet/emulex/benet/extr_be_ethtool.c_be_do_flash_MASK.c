
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_flash {int data; } ;
struct be_adapter {int dummy; } ;


 int FUNC_0 (struct be_adapter*,int ) ;
 struct be_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, struct ethtool_flash *VAR_1)
{
 struct be_adapter *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2, VAR_1->data);
}
