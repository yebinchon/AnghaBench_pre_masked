
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct efx_nic {scalar_t__ state; int reset_work; TYPE_1__* type; int mac_lock; TYPE_2__* phy_op; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int (* reconfigure ) (struct efx_nic*) ;} ;
struct TYPE_3__ {int (* resume_wol ) (struct efx_nic*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct efx_nic* FUNC_0 (struct device*) ;
 int FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (struct efx_nic*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int VAR_2 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct efx_nic*) ;
 int FUNC_10 (struct efx_nic*) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_3)
{
 int VAR_4;
 struct efx_nic *VAR_5 = FUNC_0(VAR_3);

 FUNC_7();

 if (VAR_5->state != VAR_0) {
  VAR_4 = FUNC_2(VAR_5);
  if (VAR_4)
   goto fail;

  FUNC_4(&VAR_5->mac_lock);
  VAR_5->phy_op->reconfigure(VAR_5);
  FUNC_5(&VAR_5->mac_lock);

  FUNC_3(VAR_5);

  FUNC_1(VAR_5);

  VAR_5->state = VAR_1;

  VAR_5->type->resume_wol(VAR_5);
 }

 FUNC_8();


 FUNC_6(VAR_2, &VAR_5->reset_work);

 return 0;

fail:
 FUNC_8();

 return VAR_4;
}
