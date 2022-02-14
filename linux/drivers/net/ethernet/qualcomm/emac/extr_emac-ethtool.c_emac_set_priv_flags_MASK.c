
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct emac_adapter {int single_pause_mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct emac_adapter*) ;
 struct emac_adapter* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, u32 VAR_2)
{
 struct emac_adapter *VAR_3 = FUNC_1(VAR_1);

 VAR_3->single_pause_mode = !!(VAR_2 & VAR_0);

 if (FUNC_2(VAR_1))
  return FUNC_0(VAR_3);

 return 0;
}
