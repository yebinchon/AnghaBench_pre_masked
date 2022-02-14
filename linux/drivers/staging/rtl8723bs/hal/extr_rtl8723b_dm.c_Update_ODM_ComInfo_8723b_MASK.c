
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct pwrctrl_priv {int bpower_saving; } ;
struct mlme_priv {int bScanInProcess; } ;
struct mlme_ext_priv {int cur_wireless_mode; } ;
struct dm_priv {int InitODMFlag; } ;
struct hal_com_data {int ForcedDataRate; int u1ForcedIgiLb; int CurrentBandType; int CurrentChannel; int CurrentChannelBW; int nCur40MhzPrimeSC; struct dm_priv dmpriv; int odmpriv; } ;
struct TYPE_3__ {int rx_bytes; int tx_bytes; } ;
struct dvobj_priv {TYPE_1__ traffic_stat; } ;
struct TYPE_4__ {int dot11PrivacyAlgrthm; } ;
struct adapter {int net_closed; TYPE_2__ securitypriv; struct mlme_priv mlmepriv; struct mlme_ext_priv mlmeextpriv; } ;
typedef int * PDM_ODM_T ;


 struct hal_com_data* FUNC_0 (struct adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int ,int,int *) ;
 int FUNC_3 (int *,int ,int) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 struct dvobj_priv* FUNC_4 (struct adapter*) ;
 struct pwrctrl_priv* FUNC_5 (struct adapter*) ;

__attribute__((used)) static void FUNC_6(struct adapter *VAR_29)
{
 struct mlme_ext_priv *VAR_30 = &VAR_29->mlmeextpriv;
 struct mlme_priv *VAR_31 = &VAR_29->mlmepriv;
 struct dvobj_priv *VAR_32 = FUNC_4(VAR_29);
 struct pwrctrl_priv *VAR_33 = FUNC_5(VAR_29);
 struct hal_com_data *VAR_34 = FUNC_0(VAR_29);
 PDM_ODM_T VAR_35 = &(VAR_34->odmpriv);
 struct dm_priv *VAR_36 = &VAR_34->dmpriv;
 int VAR_37;
 u8 VAR_38 = 0;

 VAR_36->InitODMFlag = 0
  | VAR_4
  | VAR_8
  | VAR_5
  | VAR_6
  | VAR_9
  | VAR_2
  | VAR_7
  | VAR_3
  | VAR_26
  | VAR_28
  | VAR_27



  ;







 FUNC_3(VAR_35, VAR_10, VAR_36->InitODMFlag);

 FUNC_1(VAR_35, VAR_24, &(VAR_32->traffic_stat.tx_bytes));
 FUNC_1(VAR_35, VAR_19, &(VAR_32->traffic_stat.rx_bytes));
 FUNC_1(VAR_35, VAR_25, &(VAR_30->cur_wireless_mode));
 FUNC_1(VAR_35, VAR_21, &(VAR_34->nCur40MhzPrimeSC));
 FUNC_1(VAR_35, VAR_22, &(VAR_29->securitypriv.dot11PrivacyAlgrthm));
 FUNC_1(VAR_35, VAR_12, &(VAR_34->CurrentChannelBW));
 FUNC_1(VAR_35, VAR_13, &(VAR_34->CurrentChannel));
 FUNC_1(VAR_35, VAR_17, &(VAR_29->net_closed));
 FUNC_1(VAR_35, VAR_16, &VAR_38);
 FUNC_1(VAR_35, VAR_11, &(VAR_34->CurrentBandType));
 FUNC_1(VAR_35, VAR_14, &(VAR_34->u1ForcedIgiLb));
 FUNC_1(VAR_35, VAR_15, &(VAR_34->ForcedDataRate));

 FUNC_1(VAR_35, VAR_20, &(VAR_31->bScanInProcess));
 FUNC_1(VAR_35, VAR_18, &(VAR_33->bpower_saving));


 for (VAR_37 = 0; VAR_37 < VAR_0; VAR_37++)
  FUNC_2(VAR_35, VAR_23, VAR_37, ((void*)0));
}
