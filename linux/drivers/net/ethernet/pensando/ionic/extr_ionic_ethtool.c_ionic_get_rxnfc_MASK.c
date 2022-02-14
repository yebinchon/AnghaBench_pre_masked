
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ionic_lif {int nxqs; } ;
struct ethtool_rxnfc {int cmd; int data; } ;


 int VAR_0 ;

 int FUNC_0 (struct net_device*,char*,int) ;
 struct ionic_lif* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
      struct ethtool_rxnfc *VAR_2, u32 *VAR_3)
{
 struct ionic_lif *VAR_4 = FUNC_1(VAR_1);
 int VAR_5 = 0;

 switch (VAR_2->cmd) {
 case 128:
  VAR_2->data = VAR_4->nxqs;
  break;
 default:
  FUNC_0(VAR_1, "Command parameter %d is not supported\n",
      VAR_2->cmd);
  VAR_5 = -VAR_0;
 }

 return VAR_5;
}
