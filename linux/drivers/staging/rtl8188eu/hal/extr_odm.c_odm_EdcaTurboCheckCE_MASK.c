
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef size_t u32 ;
struct xmit_priv {int tx_bytes; int last_tx_bytes; } ;
struct registry_priv {int wifi_spec; } ;
struct recv_priv {int bIsAnyNonBEPkts; int rx_bytes; int last_rx_bytes; } ;
struct TYPE_4__ {size_t prv_traffic_idx; int bCurrentTurboEDCA; } ;
struct odm_dm_struct {TYPE_2__ DM_EDCA_Table; struct adapter* Adapter; } ;
struct mlme_ext_info {size_t assoc_AP_vendor; } ;
struct mlme_ext_priv {int cur_wireless_mode; struct mlme_ext_info mlmext_info; } ;
struct adapter {TYPE_1__* HalData; struct mlme_ext_priv mlmeextpriv; struct registry_priv registrypriv; struct recv_priv recvpriv; struct xmit_priv xmitpriv; } ;
struct TYPE_3__ {size_t AcParam_BE; } ;


 size_t VAR_0 ;
 size_t** VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct adapter*,int ,size_t) ;

void FUNC_1(struct odm_dm_struct *VAR_10)
{
 struct adapter *VAR_11 = VAR_10->Adapter;
 u32 VAR_12;
 u32 VAR_13;
 u64 VAR_14 = 0;
 u64 VAR_15 = 0;
 u8 VAR_16 = 0;
 struct xmit_priv *VAR_17 = &(VAR_11->xmitpriv);
 struct recv_priv *VAR_18 = &(VAR_11->recvpriv);
 struct registry_priv *VAR_19 = &VAR_11->registrypriv;
 struct mlme_ext_priv *VAR_20 = &(VAR_11->mlmeextpriv);
 struct mlme_ext_info *VAR_21 = &(VAR_20->mlmext_info);

 if (VAR_19->wifi_spec == 1)
  goto dm_CheckEdcaTurbo_EXIT;

 if (VAR_21->assoc_AP_vendor >= VAR_4)
  goto dm_CheckEdcaTurbo_EXIT;


 if ((VAR_16) || (!VAR_18->bIsAnyNonBEPkts)) {
  VAR_14 = VAR_17->tx_bytes - VAR_17->last_tx_bytes;
  VAR_15 = VAR_18->rx_bytes - VAR_18->last_rx_bytes;


  if ((VAR_21->assoc_AP_vendor == VAR_5) ||
      (VAR_21->assoc_AP_vendor == VAR_2)) {
   if (VAR_14 > (VAR_15 << 2)) {

    VAR_12 = VAR_8;
   } else {

    VAR_12 = VAR_0;
   }
  } else {
   if (VAR_15 > (VAR_14 << 2)) {

    VAR_12 = VAR_0;
   } else {

    VAR_12 = VAR_8;
   }
  }

  if ((VAR_10->DM_EDCA_Table.prv_traffic_idx != VAR_12) || (!VAR_10->DM_EDCA_Table.bCurrentTurboEDCA)) {
   if ((VAR_21->assoc_AP_vendor == VAR_3) && (VAR_20->cur_wireless_mode & VAR_9))
    VAR_13 = VAR_1[VAR_21->assoc_AP_vendor][VAR_12];
   else
    VAR_13 = VAR_1[VAR_6][VAR_12];

   FUNC_0(VAR_11, VAR_7, VAR_13);

   VAR_10->DM_EDCA_Table.prv_traffic_idx = VAR_12;
  }

  VAR_10->DM_EDCA_Table.bCurrentTurboEDCA = 1;
 } else {


  if (VAR_10->DM_EDCA_Table.bCurrentTurboEDCA) {
   FUNC_0(VAR_11, VAR_7,
        VAR_11->HalData->AcParam_BE);
   VAR_10->DM_EDCA_Table.bCurrentTurboEDCA = 0;
  }
 }

dm_CheckEdcaTurbo_EXIT:

 VAR_18->bIsAnyNonBEPkts = 0;
 VAR_17->last_tx_bytes = VAR_17->tx_bytes;
 VAR_18->last_rx_bytes = VAR_18->rx_bytes;
}
