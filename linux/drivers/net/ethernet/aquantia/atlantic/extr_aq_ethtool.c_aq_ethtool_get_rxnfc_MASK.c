
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_rxnfc {int cmd; int rule_cnt; int data; } ;
struct aq_nic_s {int dummy; } ;
struct aq_nic_cfg_s {int vecs; } ;


 int VAR_0 ;




 int FUNC_0 (struct aq_nic_s*,struct ethtool_rxnfc*,int *) ;
 int FUNC_1 (struct aq_nic_s*) ;
 int FUNC_2 (struct aq_nic_s*,struct ethtool_rxnfc*) ;
 struct aq_nic_cfg_s* FUNC_3 (struct aq_nic_s*) ;
 struct aq_nic_s* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1,
    struct ethtool_rxnfc *VAR_2,
    u32 *VAR_3)
{
 struct aq_nic_s *VAR_4 = FUNC_4(VAR_1);
 struct aq_nic_cfg_s *VAR_5 = FUNC_3(VAR_4);
 int VAR_6 = 0;

 switch (VAR_2->cmd) {
 case 128:
  VAR_2->data = VAR_5->vecs;
  break;
 case 130:
  VAR_2->rule_cnt = FUNC_1(VAR_4);
  break;
 case 129:
  VAR_6 = FUNC_2(VAR_4, VAR_2);
  break;
 case 131:
  VAR_6 = FUNC_0(VAR_4, VAR_2, VAR_3);
  break;
 default:
  VAR_6 = -VAR_0;
  break;
 }

 return VAR_6;
}
