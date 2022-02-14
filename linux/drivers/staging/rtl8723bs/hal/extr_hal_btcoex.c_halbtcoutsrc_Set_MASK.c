
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct wlan_bssid_ex {int MacAddress; } ;
struct sta_info {int dummy; } ;
struct TYPE_12__ {struct wlan_bssid_ex network; } ;
struct TYPE_13__ {TYPE_2__ mlmext_info; } ;
struct adapter {int stapriv; TYPE_3__ mlmeextpriv; int mlmepriv; } ;
struct TYPE_11__ {int bBtDisabled; int bBtBusy; int bLimitedDig; int bForceToRoam; int bRejectAggPkt; int bBtCtrlAggBufSize; int bIncreaseScanDevNum; int bBtTxRxMask; int rssiAdjustForAgcTableOn; int aggBufSize; int rssiAdjustFor1AntCoexType; int lpsVal; int rpwmVal; int raMask; } ;
struct TYPE_14__ {TYPE_1__ btInfo; struct adapter* Adapter; } ;
typedef TYPE_4__* PBTC_COEXIST ;
 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 struct sta_info* FUNC_7 (int *,int ) ;
 int FUNC_8 (struct sta_info*,int ) ;

__attribute__((used)) static u8 FUNC_9(void *VAR_1, u8 VAR_2, void *VAR_3)
{
 PBTC_COEXIST VAR_4;
 struct adapter *VAR_5;
 u8 *VAR_6;
 u32 *VAR_7;
 u8 VAR_8;


 VAR_4 = (PBTC_COEXIST)VAR_1;
 VAR_5 = VAR_4->Adapter;
 VAR_6 = VAR_3;
 VAR_7 = VAR_3;
 VAR_8 = 1;

 if (!FUNC_4(VAR_4))
  return 0;

 switch (VAR_2) {

 case 139:
  VAR_4->btInfo.bBtDisabled = *VAR_6;
  break;

 case 137:
  VAR_4->btInfo.bBtBusy = *VAR_6;
  break;

 case 138:
  VAR_4->btInfo.bLimitedDig = *VAR_6;
  break;

 case 135:
  VAR_4->btInfo.bForceToRoam = *VAR_6;
  break;

 case 133:
  VAR_4->btInfo.bRejectAggPkt = *VAR_6;
  break;

 case 140:
  VAR_4->btInfo.bBtCtrlAggBufSize = *VAR_6;
  break;

 case 134:
  VAR_4->btInfo.bIncreaseScanDevNum = *VAR_6;
  break;

 case 136:
  VAR_4->btInfo.bBtTxRxMask = *VAR_6;
  break;


 case 128:
  VAR_4->btInfo.rssiAdjustForAgcTableOn = *VAR_6;
  break;

 case 132:
  VAR_4->btInfo.aggBufSize = *VAR_6;
  break;


 case 145:
  VAR_8 = 0;
  break;

 case 151:
  FUNC_1(VAR_4);
  break;



 case 129:
  VAR_4->btInfo.rssiAdjustFor1AntCoexType = *VAR_6;
  break;

 case 131:
  VAR_4->btInfo.lpsVal = *VAR_6;
  break;

 case 130:
  VAR_4->btInfo.rpwmVal = *VAR_6;
  break;


 case 144:
  FUNC_5(VAR_4);
  break;

 case 146:
  FUNC_3(VAR_4);
  break;

 case 143:
  FUNC_6(VAR_4);
  break;

 case 147:
  FUNC_2(VAR_4, *VAR_6);
  break;

 case 141:
  VAR_4->btInfo.raMask = *VAR_7;

  if (FUNC_0(&VAR_5->mlmepriv, VAR_0) == 1) {
   struct sta_info *VAR_9;
   struct wlan_bssid_ex *VAR_10;

   VAR_10 = &VAR_5->mlmeextpriv.mlmext_info.network;
   VAR_9 = FUNC_7(&VAR_5->stapriv, VAR_10->MacAddress);
   FUNC_8(VAR_9, 0);
  }
  break;

 case 142:
  VAR_8 = 0;
  break;

 case 148:
  VAR_8 = 0;
  break;

 case 149:
  VAR_8 = 0;
  break;
 case 150:
  VAR_8 = 0;
  break;

 default:
  VAR_8 = 0;
  break;
 }

 return VAR_8;
}
