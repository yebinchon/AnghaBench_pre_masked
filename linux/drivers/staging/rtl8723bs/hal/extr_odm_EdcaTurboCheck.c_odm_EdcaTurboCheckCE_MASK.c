
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef size_t u32 ;
struct registry_priv {int wifi_spec; } ;
struct recv_priv {int bIsAnyNonBEPkts; } ;
struct mlme_ext_info {size_t assoc_AP_vendor; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct hal_com_data {size_t AcParam_BE; } ;
struct TYPE_4__ {int cur_tx_bytes; int cur_rx_bytes; } ;
struct dvobj_priv {TYPE_1__ traffic_stat; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; struct registry_priv registrypriv; struct recv_priv recvpriv; } ;
struct TYPE_5__ {size_t prv_traffic_idx; int bCurrentTurboEDCA; } ;
struct TYPE_6__ {int* pwirelessmode; TYPE_2__ DM_EDCA_Table; int bLinked; struct adapter* Adapter; } ;
typedef TYPE_3__* PDM_ODM_T ;


 size_t VAR_0 ;
 struct hal_com_data* FUNC_0 (struct adapter*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 struct dvobj_priv* FUNC_1 (struct adapter*) ;
 size_t* VAR_12 ;
 size_t* VAR_13 ;
 size_t* VAR_14 ;
 int FUNC_2 (struct adapter*,int ,size_t) ;

void FUNC_3(void *VAR_15)
{
 PDM_ODM_T VAR_16 = (PDM_ODM_T)VAR_15;
 struct adapter *VAR_17 = VAR_16->Adapter;
 struct dvobj_priv *VAR_18 = FUNC_1(VAR_17);
 struct recv_priv *VAR_19 = &(VAR_17->recvpriv);
 struct registry_priv *VAR_20 = &VAR_17->registrypriv;
 struct mlme_ext_priv *VAR_21 = &(VAR_17->mlmeextpriv);
 struct mlme_ext_info *VAR_22 = &(VAR_21->mlmext_info);
 u32 VAR_23 = 0x5ea42b;
 u32 VAR_24 = 0x5ea42b;
 u32 VAR_25 = 0;
 u8 VAR_26 = 0xFF;
 u32 VAR_27;
 u32 VAR_28;
 u64 VAR_29 = 0;
 u64 VAR_30 = 0;
 u8 VAR_31 = 0;
 u8 VAR_32 = 0;
 struct hal_com_data *VAR_33 = FUNC_0(VAR_17);

 if (!VAR_16->bLinked) {
  VAR_19->bIsAnyNonBEPkts = 0;
  return;
 }

 if (VAR_20->wifi_spec == 1) {
  VAR_19->bIsAnyNonBEPkts = 0;
  return;
 }

 if (VAR_16->pwirelessmode)
  VAR_26 = *(VAR_16->pwirelessmode);

 VAR_25 = VAR_22->assoc_AP_vendor;

 if (VAR_25 >= VAR_5) {
  VAR_19->bIsAnyNonBEPkts = 0;
  return;
 }


 if ((VAR_31) || (!VAR_19->bIsAnyNonBEPkts)) {
  VAR_29 = VAR_18->traffic_stat.cur_tx_bytes;
  VAR_30 = VAR_18->traffic_stat.cur_rx_bytes;


  if (VAR_32) {
   if (VAR_29 > (VAR_30 << 2)) {

    VAR_27 = VAR_11;
   } else {
    VAR_27 = VAR_0;
   }
  } else {
   if (VAR_30 > (VAR_29 << 2)) {

    VAR_27 = VAR_0;
   } else {
    VAR_27 = VAR_11;
   }
  }


  if ((VAR_25 == VAR_3) &&
      (VAR_26 == VAR_9)) {
   VAR_24 = VAR_12[VAR_25];
   VAR_23 = VAR_14[VAR_25];
  } else if ((VAR_25 == VAR_3) &&
      ((VAR_26 == VAR_8) ||
       (VAR_26 == (VAR_7 | VAR_8)) ||
       (VAR_26 == VAR_6) ||
       (VAR_26 == VAR_7))) {
   VAR_24 = VAR_13[VAR_25];
  } else if ((VAR_25 == VAR_1) &&
      ((VAR_26 == VAR_8) ||
       (VAR_26 == VAR_6))) {
   VAR_24 = 0xa630;
  } else if (VAR_25 == VAR_4) {
   VAR_24 = VAR_12[VAR_25];
   VAR_23 = VAR_14[VAR_25];
  } else if (VAR_25 == VAR_2) {

   VAR_24 = VAR_12[VAR_25];
  }

  if (VAR_27 == VAR_0)
   VAR_28 = VAR_24;
  else
   VAR_28 = VAR_23;

  FUNC_2(VAR_17, VAR_10, VAR_28);

  VAR_16->DM_EDCA_Table.prv_traffic_idx = VAR_27;

  VAR_16->DM_EDCA_Table.bCurrentTurboEDCA = 1;
 } else {


   if (VAR_16->DM_EDCA_Table.bCurrentTurboEDCA) {
   FUNC_2(VAR_17, VAR_10, VAR_33->AcParam_BE);
   VAR_16->DM_EDCA_Table.bCurrentTurboEDCA = 0;
  }
 }
}
