
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ef4_nic {int port_initialized; int mac_lock; TYPE_1__* phy_op; int net_dev; } ;
struct TYPE_2__ {int (* init ) (struct ef4_nic*) ;int (* reconfigure ) (struct ef4_nic*) ;int (* fini ) (struct ef4_nic*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ef4_nic*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ef4_nic*,int ,int ,char*) ;
 int FUNC_4 (struct ef4_nic*) ;
 int FUNC_5 (struct ef4_nic*) ;
 int FUNC_6 (struct ef4_nic*) ;

__attribute__((used)) static int FUNC_7(struct ef4_nic *VAR_2)
{
 int VAR_3;

 FUNC_3(VAR_2, VAR_1, VAR_2->net_dev, "init port\n");

 FUNC_1(&VAR_2->mac_lock);

 VAR_3 = VAR_2->phy_op->init(VAR_2);
 if (VAR_3)
  goto fail1;

 VAR_2->port_initialized = 1;



 FUNC_0(VAR_2);


 VAR_3 = VAR_2->phy_op->reconfigure(VAR_2);
 if (VAR_3 && VAR_3 != -VAR_0)
  goto fail2;

 FUNC_2(&VAR_2->mac_lock);
 return 0;

fail2:
 VAR_2->phy_op->fini(VAR_2);
fail1:
 FUNC_2(&VAR_2->mac_lock);
 return VAR_3;
}
