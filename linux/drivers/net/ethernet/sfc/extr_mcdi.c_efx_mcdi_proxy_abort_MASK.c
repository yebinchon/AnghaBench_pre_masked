
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_mcdi_iface {scalar_t__ state; int proxy_rx_wq; int proxy_rx_status; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct efx_mcdi_iface *VAR_2)
{
 if (VAR_2->state == VAR_1) {

  VAR_2->proxy_rx_status = -VAR_0;
  FUNC_0(&VAR_2->proxy_rx_wq);
 }
}
