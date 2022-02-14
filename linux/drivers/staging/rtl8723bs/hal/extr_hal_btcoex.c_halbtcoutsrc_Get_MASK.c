
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlme_ext_priv {int cur_channel; int cur_wireless_mode; } ;
struct hal_com_data {int CurrentBandType; int FirmwareVersion; int FirmwareSubVersion; int CurrentChannel; int CurrentChannelBW; } ;
struct TYPE_13__ {int NumRxOkInPeriod; int NumTxOkInPeriod; } ;
struct TYPE_15__ {TYPE_4__ LinkDetectInfo; } ;
struct TYPE_10__ {int dot11PrivacyAlgrthm; } ;
struct adapter {TYPE_3__* dvobj; struct mlme_ext_priv mlmeextpriv; TYPE_9__ mlmepriv; TYPE_1__ securitypriv; } ;
typedef int s32 ;
struct TYPE_14__ {struct adapter* Adapter; } ;
struct TYPE_11__ {int pwr_mode; } ;
struct TYPE_12__ {TYPE_2__ pwrctl_priv; } ;
typedef TYPE_4__* PRT_LINK_DETECT_T ;
typedef TYPE_5__* PBTC_COEXIST ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct hal_com_data* FUNC_0 (struct adapter*) ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (TYPE_9__*,int ) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (struct adapter*) ;
 int FUNC_6 (struct adapter*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (struct adapter*) ;

__attribute__((used)) static u8 FUNC_9(void *VAR_12, u8 VAR_13, void *VAR_14)
{
 PBTC_COEXIST VAR_15;
 struct adapter *VAR_16;
 struct hal_com_data *VAR_17;
 struct mlme_ext_priv *VAR_18;
 u8 *VAR_19;
 s32 *VAR_20;
 u32 *VAR_21;
 u8 VAR_22;


 VAR_15 = (PBTC_COEXIST)VAR_12;
 if (!FUNC_7(VAR_15))
  return 0;

 VAR_16 = VAR_15->Adapter;
 VAR_17 = FUNC_0(VAR_16);
 VAR_18 = &VAR_16->mlmeextpriv;
 VAR_19 = VAR_14;
 VAR_20 = VAR_14;
 VAR_21 = VAR_14;
 VAR_22 = 1;

 switch (VAR_13) {
 case 152:
  *VAR_19 = 0;
  VAR_22 = 0;
  break;

 case 153:
  *VAR_19 = 0;
  VAR_22 = 0;
  break;

 case 148:
  *VAR_19 = FUNC_2(&VAR_16->mlmepriv, VAR_9);
  break;

 case 149:
  *VAR_19 = FUNC_8(VAR_16);
  break;

 case 143:


  *VAR_19 = VAR_7;
  break;

 case 145:
  *VAR_19 = FUNC_2(&VAR_16->mlmepriv, VAR_10);
  break;

 case 144:
  *VAR_19 = FUNC_2(&VAR_16->mlmepriv, VAR_10);
  break;

 case 151:
  *VAR_19 = 0;
  break;

 case 142:
  *VAR_19 = VAR_17->CurrentBandType == 1;
  break;

 case 150:
  *VAR_19 = FUNC_2(&VAR_16->mlmepriv, VAR_8);
  break;

 case 147:
  *VAR_19 = VAR_16->securitypriv.dot11PrivacyAlgrthm == 0 ? 0 : 1;
  break;

 case 141:
  if (VAR_18->cur_wireless_mode == VAR_11)
   *VAR_19 = 1;
  else
   *VAR_19 = 0;
  break;

 case 146:
  *VAR_19 = 0;
  break;

 case 154:
  *VAR_19 = 0;
  break;

 case 139:
  *VAR_20 = FUNC_5(VAR_16);
  break;

 case 140:
  *VAR_20 = 0;
  VAR_22 = 0;
  break;

 case 131:
  if (FUNC_1(VAR_18->cur_wireless_mode))
   *VAR_21 = VAR_3;
  else if (VAR_17->CurrentChannelBW == VAR_6)
   *VAR_21 = VAR_1;
  else
   *VAR_21 = VAR_2;
  break;

 case 128:
  {
   PRT_LINK_DETECT_T VAR_23;
   VAR_23 = &VAR_16->mlmepriv.LinkDetectInfo;

   if (VAR_23->NumTxOkInPeriod > VAR_23->NumRxOkInPeriod)
    *VAR_21 = VAR_5;
   else
    *VAR_21 = VAR_4;
  }
  break;

 case 130:
  *VAR_21 = VAR_17->FirmwareVersion << 16;
  *VAR_21 |= VAR_17->FirmwareSubVersion;
  break;

 case 129:
  *VAR_21 = FUNC_4(VAR_15);
  break;

 case 132:
  *VAR_21 = FUNC_3(VAR_15);
  break;

 case 134:
  *VAR_19 = VAR_16->mlmeextpriv.cur_channel;
  break;

 case 135:
  *VAR_19 = VAR_17->CurrentChannel;
  break;

 case 133:
  *VAR_19 = 0;
  VAR_22 = 0;
  break;

 case 136:
  *VAR_19 = VAR_0;



  break;

 case 138:
  *VAR_19 = FUNC_6(VAR_16);
  break;


 case 137:
  *VAR_19 = VAR_16->dvobj->pwrctl_priv.pwr_mode;
  break;

 default:
  VAR_22 = 0;
  break;
 }

 return VAR_22;
}
