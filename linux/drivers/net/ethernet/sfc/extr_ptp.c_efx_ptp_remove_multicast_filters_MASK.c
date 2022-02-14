
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_ptp_data {int rxfilter_installed; int rxfilter_event; int rxfilter_general; } ;
struct efx_nic {struct efx_ptp_data* ptp_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct efx_nic*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct efx_nic *VAR_1)
{
 struct efx_ptp_data *VAR_2 = VAR_1->ptp_data;

 if (VAR_2->rxfilter_installed) {
  FUNC_0(VAR_1, VAR_0,
       VAR_2->rxfilter_general);
  FUNC_0(VAR_1, VAR_0,
       VAR_2->rxfilter_event);
  VAR_2->rxfilter_installed = 0;
 }
}
