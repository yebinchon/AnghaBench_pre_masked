
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct efx_nic {int dummy; } ;
struct efx_mcdi_iface {scalar_t__ state; int proxy_rx_wq; int proxy_rx_handle; int proxy_rx_status; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 struct efx_mcdi_iface* FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct efx_nic *VAR_1,
           u32 VAR_2, int VAR_3)
{
 struct efx_mcdi_iface *VAR_4 = FUNC_1(VAR_1);

 FUNC_0(VAR_4->state != VAR_0);

 VAR_4->proxy_rx_status = FUNC_2(VAR_3);



 FUNC_4();
 VAR_4->proxy_rx_handle = VAR_2;
 FUNC_3(&VAR_4->proxy_rx_wq);
}
