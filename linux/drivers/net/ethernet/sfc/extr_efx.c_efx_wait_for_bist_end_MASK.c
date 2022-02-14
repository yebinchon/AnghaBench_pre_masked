
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int mc_bist_for_other_fn; int net_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct efx_nic*,int ,int ,char*) ;

__attribute__((used)) static void FUNC_3(struct efx_nic *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  if (FUNC_0(VAR_3))
   goto out;
  FUNC_1(VAR_1);
 }

 FUNC_2(VAR_3, VAR_2, VAR_3->net_dev, "Warning: No MC reboot after BIST mode\n");
out:



 VAR_3->mc_bist_for_other_fn = 0;
}
