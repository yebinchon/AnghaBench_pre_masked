
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* eee_get ) (struct r8152*,struct ethtool_eee*) ;} ;
struct r8152 {int intf; int control; TYPE_1__ rtl_ops; } ;
struct net_device {int dummy; } ;
struct ethtool_eee {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct r8152* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct r8152*,struct ethtool_eee*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_0, struct ethtool_eee *VAR_1)
{
 struct r8152 *VAR_2 = FUNC_2(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_4(VAR_2->intf);
 if (VAR_3 < 0)
  goto out;

 FUNC_0(&VAR_2->control);

 VAR_3 = VAR_2->rtl_ops.eee_get(VAR_2, VAR_1);

 FUNC_1(&VAR_2->control);

 FUNC_5(VAR_2->intf);

out:
 return VAR_3;
}
