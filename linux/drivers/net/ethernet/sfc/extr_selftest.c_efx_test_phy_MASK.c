
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_self_tests {int phy_ext; } ;
struct efx_nic {int net_dev; int mac_lock; TYPE_1__* phy_op; } ;
struct TYPE_2__ {int (* run_tests ) (struct efx_nic*,int ,unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct efx_nic*,int ,int ,char*,char*) ;
 int FUNC_3 (struct efx_nic*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct efx_nic *VAR_2, struct efx_self_tests *VAR_3,
   unsigned VAR_4)
{
 int VAR_5;

 if (!VAR_2->phy_op->run_tests)
  return 0;

 FUNC_0(&VAR_2->mac_lock);
 VAR_5 = VAR_2->phy_op->run_tests(VAR_2, VAR_3->phy_ext, VAR_4);
 FUNC_1(&VAR_2->mac_lock);
 if (VAR_5 == -VAR_0)
  VAR_5 = 0;
 else
  FUNC_2(VAR_2, VAR_1, VAR_2->net_dev,
      "%s phy selftest\n", VAR_5 ? "Failed" : "Passed");

 return VAR_5;
}
