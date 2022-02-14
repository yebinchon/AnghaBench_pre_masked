
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_regs {int version; } ;
struct cpsw_common {int ale; int version; } ;


 int FUNC_0 (int ,int *) ;
 struct cpsw_common* FUNC_1 (struct net_device*) ;

void FUNC_2(struct net_device *VAR_0, struct ethtool_regs *VAR_1, void *VAR_2)
{
 u32 *VAR_3 = VAR_2;
 struct cpsw_common *VAR_4 = FUNC_1(VAR_0);


 VAR_1->version = VAR_4->version;

 FUNC_0(VAR_4->ale, VAR_3);
}
