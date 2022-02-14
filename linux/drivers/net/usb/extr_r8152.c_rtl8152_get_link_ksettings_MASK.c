
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mdio_read; } ;
struct r8152 {int intf; int control; TYPE_1__ mii; } ;
struct net_device {int dummy; } ;
struct ethtool_link_ksettings {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct ethtool_link_ksettings*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct r8152* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static
int FUNC_6(struct net_device *VAR_1,
          struct ethtool_link_ksettings *VAR_2)
{
 struct r8152 *VAR_3 = FUNC_3(VAR_1);
 int VAR_4;

 if (!VAR_3->mii.mdio_read)
  return -VAR_0;

 VAR_4 = FUNC_4(VAR_3->intf);
 if (VAR_4 < 0)
  goto out;

 FUNC_1(&VAR_3->control);

 FUNC_0(&VAR_3->mii, VAR_2);

 FUNC_2(&VAR_3->control);

 FUNC_5(VAR_3->intf);

out:
 return VAR_4;
}
