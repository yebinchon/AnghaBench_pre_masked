
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_rxnfc {int cmd; int data; int rule_cnt; } ;
struct bnxt {int ntp_fltr_count; int rx_nr_rings; } ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (struct bnxt*,struct ethtool_rxnfc*,int *) ;
 int FUNC_1 (struct bnxt*,struct ethtool_rxnfc*) ;
 int FUNC_2 (struct bnxt*,struct ethtool_rxnfc*) ;
 struct bnxt* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2, struct ethtool_rxnfc *VAR_3,
     u32 *VAR_4)
{
 struct bnxt *VAR_5 = FUNC_3(VAR_2);
 int VAR_6 = 0;

 switch (VAR_3->cmd) {
 case 129:
  VAR_6 = FUNC_2(VAR_5, VAR_3);
  break;

 default:
  VAR_6 = -VAR_1;
  break;
 }

 return VAR_6;
}
