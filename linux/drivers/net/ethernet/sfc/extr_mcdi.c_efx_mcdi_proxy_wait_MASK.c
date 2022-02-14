
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct efx_nic {int net_dev; } ;
struct efx_mcdi_iface {scalar_t__ proxy_rx_handle; int proxy_rx_status; int proxy_rx_wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct efx_mcdi_iface* FUNC_0 (struct efx_nic*) ;
 int VAR_4 ;
 int FUNC_1 (struct efx_nic*,int ,int ,char*,scalar_t__) ;
 int FUNC_2 (struct efx_nic*,int ,int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,int,int ) ;

__attribute__((used)) static int FUNC_4(struct efx_nic *VAR_5, u32 VAR_6, bool VAR_7)
{
 struct efx_mcdi_iface *VAR_8 = FUNC_0(VAR_5);
 int VAR_9;


 VAR_9 = FUNC_3(VAR_8->proxy_rx_wq,
    VAR_8->proxy_rx_handle != 0 ||
    VAR_8->proxy_rx_status == -VAR_0,
    VAR_3);

 if (VAR_9 <= 0) {
  FUNC_1(VAR_5, VAR_4, VAR_5->net_dev,
     "MCDI proxy timeout %d\n", VAR_6);
  return -VAR_2;
 } else if (VAR_8->proxy_rx_handle != VAR_6) {
  FUNC_2(VAR_5, VAR_4, VAR_5->net_dev,
      "MCDI proxy unexpected handle %d (expected %d)\n",
      VAR_8->proxy_rx_handle, VAR_6);
  return -VAR_1;
 }

 return VAR_8->proxy_rx_status;
}
