
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct sta_priv {int dummy; } ;
struct TYPE_7__ {int UndecoratedSmoothedPWDB; } ;
struct sta_info {TYPE_3__ rssi_stat; } ;
struct odm_dm_struct {int DebugComponents; TYPE_4__* RAInfo; scalar_t__ SupportAbility; } ;
struct TYPE_5__ {int MacAddress; } ;
struct TYPE_6__ {TYPE_1__ network; } ;
struct mlme_priv {TYPE_2__ cur_network; } ;
struct hal_data_8188e {size_t CurAntenna; size_t bDumpRxPkt; size_t bDumpTxPkt; struct odm_dm_struct odmpriv; int AntDivCfg; } ;
struct adapter {struct mlme_priv mlmepriv; struct sta_priv stapriv; struct hal_data_8188e* HalData; } ;
typedef enum hal_def_variable { ____Placeholder_hal_def_variable } hal_def_variable ;
struct TYPE_8__ {int PTStage; int DecisionRate; int RateSGI; int RAUseRate; int RateID; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t FUNC_1 (struct odm_dm_struct*,size_t) ;
 size_t FUNC_2 (struct odm_dm_struct*,size_t) ;
 size_t FUNC_3 (struct odm_dm_struct*,size_t) ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_4 (struct mlme_priv*,int ) ;
 int FUNC_5 (char*,int ) ;
 struct sta_info* FUNC_6 (struct sta_priv*,int ) ;

u8 FUNC_7(struct adapter *VAR_7, enum hal_def_variable VAR_8,
         void *VAR_9)
{
 struct hal_data_8188e *VAR_10 = VAR_7->HalData;
 u8 VAR_11 = VAR_6;

 switch (VAR_8) {
 case 131:
  {
   struct mlme_priv *VAR_12 = &VAR_7->mlmepriv;
   struct sta_priv *VAR_13 = &VAR_7->stapriv;
   struct sta_info *VAR_14;

   VAR_14 = FUNC_6(VAR_13, VAR_12->cur_network.network.MacAddress);
   if (VAR_14)
    *((int *)VAR_9) = VAR_14->rssi_stat.UndecoratedSmoothedPWDB;
  }
  break;
 case 137:
  *((u8 *)VAR_9) = (VAR_10->AntDivCfg == 0) ? 0 : 1;
  break;
 case 142:
  *((u8 *)VAR_9) = VAR_10->CurAntenna;
  break;
 case 138:
  *((u32 *)VAR_9) = VAR_0;
  break;
 case 136:
  *((u32 *)VAR_9) = VAR_2;
  break;
 case 132:
  *((u32 *)VAR_9) = VAR_3 + VAR_0;
  break;
 case 141:
  *((u32 *)VAR_9) = VAR_10->odmpriv.SupportAbility;
  break;
 case 134:
  {
   u8 VAR_15 = *((u8 *)VAR_9);

   *((u8 *)VAR_9) = FUNC_1(&VAR_10->odmpriv, VAR_15);
  }
  break;
 case 133:
  {
   u8 VAR_16 = *((u8 *)VAR_9);

   *((u8 *)VAR_9) = FUNC_3(&VAR_10->odmpriv, VAR_16);
  }
  break;
 case 135:
  {
   u8 VAR_17 = *((u8 *)VAR_9);

   *((u8 *)VAR_9) = FUNC_2(&VAR_10->odmpriv, VAR_17);
  }
  break;
 case 128:
  *((u32 *)VAR_9) = VAR_1;
  break;
 case 129:
  {
   u8 VAR_18 = *((u8 *)VAR_9);

   if (FUNC_4(&VAR_7->mlmepriv, VAR_5)) {
    FUNC_0("============ RA status check ===================\n");
    FUNC_0("Mac_id:%d , RateID = %d, RAUseRate = 0x%08x, RateSGI = %d, DecisionRate = 0x%02x ,PTStage = %d\n",
     VAR_18,
     VAR_10->odmpriv.RAInfo[VAR_18].RateID,
     VAR_10->odmpriv.RAInfo[VAR_18].RAUseRate,
     VAR_10->odmpriv.RAInfo[VAR_18].RateSGI,
     VAR_10->odmpriv.RAInfo[VAR_18].DecisionRate,
     VAR_10->odmpriv.RAInfo[VAR_18].PTStage);
   }
  }
  break;
 case 130:
  {
   struct odm_dm_struct *VAR_19 = &VAR_10->odmpriv;

   FUNC_5("dm_ocm->DebugComponents = 0x%llx\n", VAR_19->DebugComponents);
  }
  break;
 case 140:
  *((u8 *)VAR_9) = VAR_10->bDumpRxPkt;
  break;
 case 139:
  *((u8 *)VAR_9) = VAR_10->bDumpTxPkt;
  break;
 default:
  VAR_11 = VAR_4;
  break;
 }

 return VAR_11;
}
