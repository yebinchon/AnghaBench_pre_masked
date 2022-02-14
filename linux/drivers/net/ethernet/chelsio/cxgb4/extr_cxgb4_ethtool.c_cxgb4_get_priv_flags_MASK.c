
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct port_info {int eth_flags; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct adapter {int eth_flags; } ;


 struct port_info* FUNC_0 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_1(struct net_device *VAR_0)
{
 struct port_info *VAR_1 = FUNC_0(VAR_0);
 struct adapter *VAR_2 = VAR_1->adapter;

 return (VAR_2->eth_flags | VAR_1->eth_flags);
}
