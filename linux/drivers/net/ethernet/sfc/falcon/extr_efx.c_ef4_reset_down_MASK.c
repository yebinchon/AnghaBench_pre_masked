
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ef4_nic {TYPE_2__* type; TYPE_1__* phy_op; scalar_t__ port_initialized; int mac_lock; } ;
typedef enum reset_type { ____Placeholder_reset_type } reset_type ;
struct TYPE_4__ {int (* fini ) (struct ef4_nic*) ;} ;
struct TYPE_3__ {int (* fini ) (struct ef4_nic*) ;} ;


 int FUNC_0 (struct ef4_nic*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ef4_nic*) ;
 int FUNC_2 (struct ef4_nic*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ef4_nic*) ;
 int FUNC_5 (struct ef4_nic*) ;

void FUNC_6(struct ef4_nic *VAR_2, enum reset_type VAR_3)
{
 FUNC_0(VAR_2);

 FUNC_2(VAR_2);
 FUNC_1(VAR_2);

 FUNC_3(&VAR_2->mac_lock);
 if (VAR_2->port_initialized && VAR_3 != VAR_1 &&
     VAR_3 != VAR_0)
  VAR_2->phy_op->fini(VAR_2);
 VAR_2->type->fini(VAR_2);
}
