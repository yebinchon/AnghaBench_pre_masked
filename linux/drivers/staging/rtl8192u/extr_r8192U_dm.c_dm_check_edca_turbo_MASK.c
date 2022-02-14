
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_9__ {unsigned long txbytesunicast; unsigned long rxbytesunicast; } ;
struct r8192_priv {int bis_cur_rdlstate; int bcurrent_turbo_EDCA; TYPE_4__ stats; TYPE_3__* ieee80211; } ;
struct net_device {int dummy; } ;
struct ieee80211_qos_parameters {int* aifs; int * cw_min; int * cw_max; int * tx_op_limit; } ;
struct aci_aifsn {scalar_t__ acm; } ;
struct TYPE_10__ {int IOTAction; size_t IOTPeer; } ;
struct TYPE_6__ {struct ieee80211_qos_parameters parameters; } ;
struct TYPE_7__ {TYPE_1__ qos_data; } ;
struct TYPE_8__ {scalar_t__ state; int bis_any_nonbepkts; int mode; TYPE_2__ current_network; TYPE_5__* pHTInfo; } ;
typedef TYPE_5__* PRT_HIGH_THROUGHPUT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_12 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (struct net_device*) ;
 int* VAR_13 ;
 int* VAR_14 ;
 struct r8192_priv* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct net_device*,int ,int*) ;
 int FUNC_6 (struct net_device*,int ,int) ;
 int FUNC_7 (struct net_device*,int ,int) ;

__attribute__((used)) static void FUNC_8(
 struct net_device *VAR_15)
{
 struct r8192_priv *VAR_16 = FUNC_3(VAR_15);
 PRT_HIGH_THROUGHPUT VAR_17 = VAR_16->ieee80211->pHTInfo;



 static unsigned long VAR_18;
 static unsigned long VAR_19;
 unsigned long VAR_20 = 0;
 unsigned long VAR_21 = 0;




 if (VAR_16->ieee80211->state != VAR_9)
  goto dm_CheckEdcaTurbo_EXIT;

 if (VAR_16->ieee80211->pHTInfo->IOTAction & VAR_8)
  goto dm_CheckEdcaTurbo_EXIT;



 if (!VAR_16->ieee80211->bis_any_nonbepkts) {
  VAR_20 = VAR_16->stats.txbytesunicast - VAR_18;
  VAR_21 = VAR_16->stats.rxbytesunicast - VAR_19;

  if (VAR_21 > 4*VAR_20) {

   if (!VAR_16->bis_cur_rdlstate || !VAR_16->bcurrent_turbo_EDCA) {
    FUNC_7(VAR_15, VAR_7, VAR_13[VAR_17->IOTPeer]);
    VAR_16->bis_cur_rdlstate = 1;
   }
  } else {

   if (VAR_16->bis_cur_rdlstate || !VAR_16->bcurrent_turbo_EDCA) {
    FUNC_7(VAR_15, VAR_7, VAR_14[VAR_17->IOTPeer]);
    VAR_16->bis_cur_rdlstate = 0;
   }

  }

  VAR_16->bcurrent_turbo_EDCA = 1;
 } else {



  if (VAR_16->bcurrent_turbo_EDCA) {
   u8 VAR_22;
   u32 VAR_23, VAR_24, VAR_25, VAR_26;

   struct ieee80211_qos_parameters *VAR_27 = &VAR_16->ieee80211->current_network.qos_data.parameters;
   u8 VAR_28 = VAR_16->ieee80211->mode;


   FUNC_2(VAR_15);

   VAR_22 = VAR_27->aifs[0] * ((VAR_28 & (VAR_10 | VAR_11)) ? 9 : 20) + VAR_12;

   VAR_24 = (u32)FUNC_4(VAR_27->tx_op_limit[0]);
   VAR_25 = (u32)FUNC_4(VAR_27->cw_max[0]);
   VAR_26 = (u32)FUNC_4(VAR_27->cw_min[0]);

   VAR_24 <<= VAR_3;
   VAR_25 <<= VAR_1;
   VAR_26 <<= VAR_2;
   VAR_22 <<= VAR_0;

   VAR_23 = VAR_24 | VAR_25 | VAR_26 | VAR_22;
   FUNC_1(&VAR_23);

   FUNC_7(VAR_15, VAR_7, VAR_23);





   {


    struct aci_aifsn *VAR_29 = (struct aci_aifsn *)&(VAR_27->aifs[0]);
    u8 VAR_30;

    FUNC_5(VAR_15, VAR_4, &VAR_30);

    if (VAR_29->acm) {
     VAR_30 |= VAR_5;
    } else {
     VAR_30 &= (~VAR_5);
    }

    FUNC_0(VAR_6, "SetHwReg8190pci(): [HW_VAR_ACM_CTRL] Write 0x%X\n", VAR_30);
    FUNC_6(VAR_15, VAR_4, VAR_30);
   }
   VAR_16->bcurrent_turbo_EDCA = 0;
  }
 }

dm_CheckEdcaTurbo_EXIT:

 VAR_16->ieee80211->bis_any_nonbepkts = 0;
 VAR_18 = VAR_16->stats.txbytesunicast;
 VAR_19 = VAR_16->stats.rxbytesunicast;
}
