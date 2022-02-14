
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ef4_nic {int phy_mode; TYPE_1__* type; int mac_lock; } ;
typedef enum ef4_phy_mode { ____Placeholder_ef4_phy_mode } ef4_phy_mode ;
struct TYPE_2__ {int (* reconfigure_port ) (struct ef4_nic*) ;} ;


 scalar_t__ FUNC_0 (struct ef4_nic*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ef4_nic*) ;

int FUNC_4(struct ef4_nic *VAR_1)
{
 enum ef4_phy_mode VAR_2;
 int VAR_3;

 FUNC_1(!FUNC_2(&VAR_1->mac_lock));


 VAR_2 = VAR_1->phy_mode;
 if (FUNC_0(VAR_1))
  VAR_1->phy_mode |= VAR_0;
 else
  VAR_1->phy_mode &= ~VAR_0;

 VAR_3 = VAR_1->type->reconfigure_port(VAR_1);

 if (VAR_3)
  VAR_1->phy_mode = VAR_2;

 return VAR_3;
}
