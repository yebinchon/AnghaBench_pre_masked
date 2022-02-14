
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int location; } ;
struct ethtool_rxnfc {int cmd; TYPE_1__ fs; int rss_context; } ;
struct efx_nic {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct efx_nic*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (struct efx_nic*,int ,int ) ;
 struct efx_nic* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2,
     struct ethtool_rxnfc *VAR_3)
{
 struct efx_nic *VAR_4 = FUNC_3(VAR_2);

 if (FUNC_1(VAR_4) == 0)
  return -VAR_1;

 switch (VAR_3->cmd) {
 case 128:
  return FUNC_0(VAR_4, &VAR_3->fs,
        VAR_3->rss_context);

 case 129:
  return FUNC_2(VAR_4, VAR_0,
       VAR_3->fs.location);

 default:
  return -VAR_1;
 }
}
