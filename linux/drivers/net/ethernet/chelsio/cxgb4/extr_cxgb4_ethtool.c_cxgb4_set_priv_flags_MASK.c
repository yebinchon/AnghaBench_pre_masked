
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct port_info {int eth_flags; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct adapter {int eth_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct port_info* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, u32 VAR_3)
{
 struct port_info *VAR_4 = FUNC_0(VAR_2);
 struct adapter *VAR_5 = VAR_4->adapter;

 FUNC_1(&VAR_5->eth_flags, VAR_3, VAR_0);
 FUNC_1(&VAR_4->eth_flags, VAR_3, VAR_1);

 return 0;
}
