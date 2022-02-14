
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_rxnfc {int cmd; } ;
struct bnxt {int dummy; } ;


 int VAR_0 ;

 int FUNC_0 (struct bnxt*,struct ethtool_rxnfc*) ;
 struct bnxt* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, struct ethtool_rxnfc *VAR_2)
{
 struct bnxt *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;

 switch (VAR_2->cmd) {
 case 128:
  VAR_4 = FUNC_0(VAR_3, VAR_2);
  break;

 default:
  VAR_4 = -VAR_0;
  break;
 }
 return VAR_4;
}
