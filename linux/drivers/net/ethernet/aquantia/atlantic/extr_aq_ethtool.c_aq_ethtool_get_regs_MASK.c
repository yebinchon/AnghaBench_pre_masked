
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_regs {int dummy; } ;
struct aq_nic_s {int dummy; } ;


 int FUNC_0 (struct aq_nic_s*,struct ethtool_regs*,void*) ;
 int FUNC_1 (struct aq_nic_s*) ;
 int FUNC_2 (void*,int ,int) ;
 struct aq_nic_s* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0,
    struct ethtool_regs *VAR_1, void *VAR_2)
{
 struct aq_nic_s *VAR_3 = FUNC_3(VAR_0);
 u32 VAR_4 = FUNC_1(VAR_3);

 FUNC_2(VAR_2, 0, VAR_4 * sizeof(u32));
 FUNC_0(VAR_3, VAR_1, VAR_2);
}
