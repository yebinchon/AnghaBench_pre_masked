
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_regs {int len; int version; } ;
struct emac_adapter {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 struct emac_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_3,
     struct ethtool_regs *VAR_4, void *VAR_5)
{
 struct emac_adapter *VAR_6 = FUNC_0(VAR_3);
 u32 *VAR_7 = VAR_5;
 unsigned int VAR_8;

 VAR_4->version = VAR_1;
 VAR_4->len = VAR_0 * sizeof(u32);

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
  VAR_7[VAR_8] = FUNC_1(VAR_6->base + VAR_2[VAR_8]);
}
