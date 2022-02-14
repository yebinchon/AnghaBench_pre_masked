
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct macb {int num_queues; int max_tuples; } ;
struct TYPE_2__ {int ring_cookie; int location; } ;
struct ethtool_rxnfc {int cmd; TYPE_1__ fs; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct net_device*,struct ethtool_rxnfc*) ;
 int FUNC_1 (struct net_device*,struct ethtool_rxnfc*) ;
 int FUNC_2 (struct net_device*,char*,int) ;
 struct macb* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2, struct ethtool_rxnfc *VAR_3)
{
 struct macb *VAR_4 = FUNC_3(VAR_2);
 int VAR_5;

 switch (VAR_3->cmd) {
 case 128:
  if ((VAR_3->fs.location >= VAR_4->max_tuples)
    || (VAR_3->fs.ring_cookie >= VAR_4->num_queues)) {
   VAR_5 = -VAR_0;
   break;
  }
  VAR_5 = FUNC_0(VAR_2, VAR_3);
  break;
 case 129:
  VAR_5 = FUNC_1(VAR_2, VAR_3);
  break;
 default:
  FUNC_2(VAR_2,
     "Command parameter %d is not supported\n", VAR_3->cmd);
  VAR_5 = -VAR_1;
 }

 return VAR_5;
}
