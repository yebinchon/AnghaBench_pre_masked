
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct aq_nic_s {int dummy; } ;
struct aq_nic_cfg_s {int vecs; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct aq_nic_cfg_s* FUNC_1 (struct aq_nic_s*) ;
 int FUNC_2 (struct aq_nic_s*,int *) ;
 int FUNC_3 (int *,int ,int) ;
 struct aq_nic_s* FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_2,
        struct ethtool_stats *VAR_3, u64 *VAR_4)
{
 struct aq_nic_s *VAR_5 = FUNC_4(VAR_2);
 struct aq_nic_cfg_s *VAR_6 = FUNC_1(VAR_5);

 FUNC_3(VAR_4, 0, (FUNC_0(VAR_1) +
    FUNC_0(VAR_0) *
    VAR_6->vecs) * sizeof(u64));
 FUNC_2(VAR_5, VAR_4);
}
