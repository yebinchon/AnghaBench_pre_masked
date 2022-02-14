
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct emac_adapter {scalar_t__ single_pause_mode; } ;


 int VAR_0 ;
 struct emac_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_1(struct net_device *VAR_1)
{
 struct emac_adapter *VAR_2 = FUNC_0(VAR_1);

 return VAR_2->single_pause_mode ? VAR_0 : 0;
}
