
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; } ;
struct ef4_nic {TYPE_1__* type; } ;
struct TYPE_2__ {int (* set_wol ) (struct ef4_nic*,int ) ;} ;


 struct ef4_nic* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ef4_nic*,int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
          struct ethtool_wolinfo *VAR_1)
{
 struct ef4_nic *VAR_2 = FUNC_0(VAR_0);
 return VAR_2->type->set_wol(VAR_2, VAR_1->wolopts);
}
