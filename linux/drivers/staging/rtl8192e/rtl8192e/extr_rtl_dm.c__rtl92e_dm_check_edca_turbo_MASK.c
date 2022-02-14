
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct rt_hi_throughput {int IOTAction; size_t IOTPeer; } ;
struct TYPE_4__ {unsigned long txbytesunicast; unsigned long rxbytesunicast; } ;
struct r8192_priv {int bis_cur_rdlstate; int bcurrent_turbo_EDCA; TYPE_2__ stats; TYPE_1__* rtllib; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ iw_mode; scalar_t__ state; int bis_any_nonbepkts; scalar_t__ mode; int (* SetHwRegHandler ) (struct net_device*,int ,int *) ;struct rt_hi_throughput* pHTInfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int FUNC_0 (struct net_device*,int ,int ) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int ,int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_11)
{
 struct r8192_priv *VAR_12 = FUNC_1(VAR_11);
 struct rt_hi_throughput *VAR_13 = VAR_12->rtllib->pHTInfo;

 static unsigned long VAR_14;
 static unsigned long VAR_15;
 unsigned long VAR_16 = 0;
 unsigned long VAR_17 = 0;

 if (VAR_12->rtllib->iw_mode == VAR_5)
  goto dm_CheckEdcaTurbo_EXIT;
 if (VAR_12->rtllib->state != VAR_6)
  goto dm_CheckEdcaTurbo_EXIT;
 if (VAR_12->rtllib->pHTInfo->IOTAction & VAR_2)
  goto dm_CheckEdcaTurbo_EXIT;

 if (!VAR_12->rtllib->bis_any_nonbepkts) {
  VAR_16 = VAR_12->stats.txbytesunicast - VAR_14;
  VAR_17 = VAR_12->stats.rxbytesunicast - VAR_15;
  if (VAR_13->IOTAction & VAR_3) {
   if (VAR_16 > 4*VAR_17) {
    if (VAR_12->bis_cur_rdlstate ||
        !VAR_12->bcurrent_turbo_EDCA) {
     FUNC_0(VAR_11, VAR_1,
            VAR_10[VAR_13->IOTPeer]);
     VAR_12->bis_cur_rdlstate = 0;
    }
   } else {
    if (!VAR_12->bis_cur_rdlstate ||
        !VAR_12->bcurrent_turbo_EDCA) {
     if (VAR_12->rtllib->mode == VAR_7)
      FUNC_0(VAR_11, VAR_1,
             VAR_9[VAR_13->IOTPeer]);
     else
      FUNC_0(VAR_11, VAR_1,
             VAR_8[VAR_13->IOTPeer]);
     VAR_12->bis_cur_rdlstate = 1;
    }
   }
   VAR_12->bcurrent_turbo_EDCA = 1;
  } else {
   if (VAR_17 > 4*VAR_16) {
    if (!VAR_12->bis_cur_rdlstate ||
        !VAR_12->bcurrent_turbo_EDCA) {
     if (VAR_12->rtllib->mode == VAR_7)
      FUNC_0(VAR_11, VAR_1,
             VAR_9[VAR_13->IOTPeer]);
     else
      FUNC_0(VAR_11, VAR_1,
             VAR_8[VAR_13->IOTPeer]);
     VAR_12->bis_cur_rdlstate = 1;
    }
   } else {
    if (VAR_12->bis_cur_rdlstate ||
        !VAR_12->bcurrent_turbo_EDCA) {
     FUNC_0(VAR_11, VAR_1,
            VAR_10[VAR_13->IOTPeer]);
     VAR_12->bis_cur_rdlstate = 0;
    }

   }

   VAR_12->bcurrent_turbo_EDCA = 1;
  }
 } else {
   if (VAR_12->bcurrent_turbo_EDCA) {
   u8 VAR_18 = VAR_0;

   VAR_12->rtllib->SetHwRegHandler(VAR_11, VAR_4,
            (u8 *)(&VAR_18));
   VAR_12->bcurrent_turbo_EDCA = 0;
  }
 }


dm_CheckEdcaTurbo_EXIT:
 VAR_12->rtllib->bis_any_nonbepkts = 0;
 VAR_14 = VAR_12->stats.txbytesunicast;
 VAR_15 = VAR_12->stats.rxbytesunicast;
}
