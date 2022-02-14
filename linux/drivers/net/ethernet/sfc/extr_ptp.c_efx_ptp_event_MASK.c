
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_ptp_data {scalar_t__ evt_frag_idx; int evt_code; int * evt_frags; int enabled; } ;
struct efx_nic {int ptp_warned; int net_dev; struct efx_ptp_data* ptp_data; } ;
typedef int efx_qword_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;



 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct efx_nic*,int ,int ,char*,...) ;
 int FUNC_3 (struct efx_nic*,int ,int ,char*) ;
 int FUNC_4 (struct efx_nic*,struct efx_ptp_data*) ;
 int FUNC_5 (struct efx_nic*,struct efx_ptp_data*) ;
 int FUNC_6 (struct efx_nic*,struct efx_ptp_data*) ;

void FUNC_7(struct efx_nic *VAR_5, efx_qword_t *VAR_6)
{
 struct efx_ptp_data *VAR_7 = VAR_5->ptp_data;
 int VAR_8 = FUNC_0(*VAR_6, VAR_2);

 if (!VAR_7) {
  if (!VAR_5->ptp_warned) {
   FUNC_3(VAR_5, VAR_3, VAR_5->net_dev,
       "Received PTP event but PTP not set up\n");
   VAR_5->ptp_warned = 1;
  }
  return;
 }

 if (!VAR_7->enabled)
  return;

 if (VAR_7->evt_frag_idx == 0) {
  VAR_7->evt_code = VAR_8;
 } else if (VAR_7->evt_code != VAR_8) {
  FUNC_2(VAR_5, VAR_4, VAR_5->net_dev,
     "PTP out of sequence event %d\n", VAR_8);
  VAR_7->evt_frag_idx = 0;
 }

 VAR_7->evt_frags[VAR_7->evt_frag_idx++] = *VAR_6;
 if (!FUNC_1(*VAR_6, VAR_0)) {

  switch (VAR_8) {
  case 128:
   FUNC_6(VAR_5, VAR_7);
   break;
  case 130:
   FUNC_4(VAR_5, VAR_7);
   break;
  case 129:
   FUNC_5(VAR_5, VAR_7);
   break;
  default:
   FUNC_2(VAR_5, VAR_4, VAR_5->net_dev,
      "PTP unknown event %d\n", VAR_8);
   break;
  }
  VAR_7->evt_frag_idx = 0;
 } else if (VAR_1 == VAR_7->evt_frag_idx) {
  FUNC_2(VAR_5, VAR_4, VAR_5->net_dev,
     "PTP too many event fragments\n");
  VAR_7->evt_frag_idx = 0;
 }
}
