
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* eee_set ) (struct r8152*,struct ethtool_eee*) ;} ;
struct r8152 {int intf; int control; int mii; TYPE_1__ rtl_ops; } ;
struct net_device {int dummy; } ;
struct ethtool_eee {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct r8152* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct r8152*,struct ethtool_eee*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct net_device *VAR_0, struct ethtool_eee *VAR_1)
{
 struct r8152 *VAR_2 = FUNC_3(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_5(VAR_2->intf);
 if (VAR_3 < 0)
  goto out;

 FUNC_1(&VAR_2->control);

 VAR_3 = VAR_2->rtl_ops.eee_set(VAR_2, VAR_1);
 if (!VAR_3)
  VAR_3 = FUNC_0(&VAR_2->mii);

 FUNC_2(&VAR_2->control);

 FUNC_6(VAR_2->intf);

out:
 return VAR_3;
}
