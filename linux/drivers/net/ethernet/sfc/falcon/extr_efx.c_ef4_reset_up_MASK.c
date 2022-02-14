
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ef4_nic {int port_initialized; int mac_lock; int filter_sem; int net_dev; TYPE_2__* phy_op; TYPE_1__* type; } ;
typedef enum reset_type { ____Placeholder_reset_type } reset_type ;
struct TYPE_4__ {int (* init ) (struct ef4_nic*) ;int (* reconfigure ) (struct ef4_nic*) ;} ;
struct TYPE_3__ {int (* init ) (struct ef4_nic*) ;} ;


 int FUNC_0 (struct ef4_nic*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (struct ef4_nic*) ;
 int FUNC_3 (struct ef4_nic*) ;
 int FUNC_4 (struct ef4_nic*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ef4_nic*,int ,int ,char*) ;
 int FUNC_7 (struct ef4_nic*) ;
 int FUNC_8 (struct ef4_nic*) ;
 int FUNC_9 (struct ef4_nic*) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct ef4_nic *VAR_4, enum reset_type VAR_5, bool VAR_6)
{
 int VAR_7;

 FUNC_0(VAR_4);


 VAR_7 = VAR_4->type->init(VAR_4);
 if (VAR_7) {
  FUNC_6(VAR_4, VAR_3, VAR_4->net_dev, "failed to initialise NIC\n");
  goto fail;
 }

 if (!VAR_6)
  goto fail;

 if (VAR_4->port_initialized && VAR_5 != VAR_2 &&
     VAR_5 != VAR_1) {
  VAR_7 = VAR_4->phy_op->init(VAR_4);
  if (VAR_7)
   goto fail;
  VAR_7 = VAR_4->phy_op->reconfigure(VAR_4);
  if (VAR_7 && VAR_7 != -VAR_0)
   FUNC_6(VAR_4, VAR_3, VAR_4->net_dev,
      "could not restore PHY settings\n");
 }

 VAR_7 = FUNC_2(VAR_4);
 if (VAR_7)
  goto fail;

 FUNC_1(&VAR_4->filter_sem);
 FUNC_3(VAR_4);
 FUNC_10(&VAR_4->filter_sem);

 FUNC_5(&VAR_4->mac_lock);

 FUNC_4(VAR_4);

 return 0;

fail:
 VAR_4->port_initialized = 0;

 FUNC_5(&VAR_4->mac_lock);

 return VAR_7;
}
