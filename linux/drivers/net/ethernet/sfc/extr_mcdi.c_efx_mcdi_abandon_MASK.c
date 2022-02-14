
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int net_dev; } ;
struct efx_mcdi_iface {int mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct efx_mcdi_iface* FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_nic*,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct efx_nic*,int ,int ,char*) ;
 scalar_t__ FUNC_3 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct efx_nic *VAR_3)
{
 struct efx_mcdi_iface *VAR_4 = FUNC_0(VAR_3);

 if (FUNC_3(&VAR_4->mode, VAR_0) == VAR_0)
  return;
 FUNC_2(VAR_3, VAR_2, VAR_3->net_dev, "MCDI is timing out; trying to recover\n");
 FUNC_1(VAR_3, VAR_1);
}
