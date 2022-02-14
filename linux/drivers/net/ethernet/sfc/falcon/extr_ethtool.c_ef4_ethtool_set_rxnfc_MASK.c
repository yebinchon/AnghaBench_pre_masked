
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int location; } ;
struct ethtool_rxnfc {int cmd; TYPE_1__ fs; } ;
struct ef4_nic {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct ef4_nic*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (struct ef4_nic*) ;
 int FUNC_2 (struct ef4_nic*,int ,int ) ;
 struct ef4_nic* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2,
     struct ethtool_rxnfc *VAR_3)
{
 struct ef4_nic *VAR_4 = FUNC_3(VAR_2);

 if (FUNC_1(VAR_4) == 0)
  return -VAR_1;

 switch (VAR_3->cmd) {
 case 128:
  return FUNC_0(VAR_4, &VAR_3->fs);

 case 129:
  return FUNC_2(VAR_4, VAR_0,
       VAR_3->fs.location);

 default:
  return -VAR_1;
 }
}
