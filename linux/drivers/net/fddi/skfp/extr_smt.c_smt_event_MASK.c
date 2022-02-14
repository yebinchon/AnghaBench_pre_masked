
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_4__ {scalar_t__ please_reconnect; int smt_last_lem; int smt_last_notify; int smt_tvu; int smt_tvd; int* last_tok_time; int smt_timer; scalar_t__* pend; } ;
struct TYPE_5__ {int fddiSMTTT_Notify; struct fddi_mib_m* m; } ;
struct s_smc {TYPE_1__ sm; TYPE_2__ mib; struct s_phy* y; } ;
struct s_phy {TYPE_3__* mib; scalar_t__ np; } ;
struct fddi_mib_m {int fddiMACLost_Ct; int fddiMACOld_Lost_Ct; int fddiMACError_Ct; int fddiMACOld_Error_Ct; int fddiMACFrame_Ct; int fddiMACOld_Frame_Ct; scalar_t__ fddiMACFrameErrorRatio; scalar_t__ fddiMACFrameErrorThreshold; int fddiMACFrameErrorFlag; int fddiMACNotCopied_Ct; int fddiMACOld_NotCopied_Ct; int fddiMACCopied_Ct; int fddiMACOld_Copied_Ct; scalar_t__ fddiMACNotCopiedRatio; scalar_t__ fddiMACNotCopiedThreshold; int fddiMACNotCopiedFlag; void* fddiMACDownstreamNbr; void* fddiMACOldDownstreamNbr; int fddiMACUNDA_Flag; void* fddiMACUpstreamNbr; void* fddiMACOldUpstreamNbr; } ;
struct TYPE_6__ {int fddiPORTEBError_Ct; int fddiPORTOldEBError_Ct; int fddiPORTHardwarePresent; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 void* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 void* FUNC_2 (int,int) ;
 int FUNC_3 (struct s_smc*) ;
 int VAR_20 ;
 int FUNC_4 (void**,void**) ;
 int FUNC_5 (struct s_smc*) ;
 int FUNC_6 (struct s_smc*,int ,int ) ;
 int FUNC_7 (struct s_smc*) ;
 int FUNC_8 (struct s_smc*) ;
 int FUNC_9 (struct s_smc*,int) ;
 scalar_t__ FUNC_10 (struct s_smc*) ;
 int FUNC_11 () ;
 int FUNC_12 (struct s_smc*,int *,int ,scalar_t__,int ,int ) ;
 int FUNC_13 (struct s_smc*,int ,int,int) ;
 int FUNC_14 (struct s_smc*) ;
 int FUNC_15 (struct s_smc*) ;
 int FUNC_16 (struct s_smc*,int *,int,int ) ;
 int FUNC_17 (struct s_smc*,int ) ;

void FUNC_18(struct s_smc *VAR_21, int VAR_22)
{
 u_long VAR_23 ;

 int VAR_24 ;



 if (VAR_21->sm.please_reconnect) {
  VAR_21->sm.please_reconnect -- ;
  if (VAR_21->sm.please_reconnect == 0) {

   FUNC_6(VAR_21,VAR_1,VAR_0) ;
  }
 }

 if (VAR_22 == VAR_17)
  return ;







 FUNC_15(VAR_21) ;
 FUNC_14(VAR_21) ;
 FUNC_13(VAR_21,0,0,0) ;



 VAR_23 = FUNC_11() ;

 if (VAR_23 - VAR_21->sm.smt_last_lem >= VAR_19*8) {




  struct fddi_mib_m *VAR_25 ;
  u_long VAR_26 ;
  u_long VAR_27 ;
  int VAR_28 ;
  int VAR_29;
  struct s_phy *VAR_30 ;



  FUNC_8(VAR_21) ;
  VAR_21->sm.smt_last_lem = VAR_23 ;





  FUNC_5(VAR_21) ;
  VAR_25 = VAR_21->mib.m ;
  VAR_26 =
  (VAR_25->fddiMACLost_Ct - VAR_25->fddiMACOld_Lost_Ct) +
  (VAR_25->fddiMACError_Ct - VAR_25->fddiMACOld_Error_Ct) ;
  VAR_27 =
  (VAR_25->fddiMACFrame_Ct - VAR_25->fddiMACOld_Frame_Ct) +
  (VAR_25->fddiMACLost_Ct - VAR_25->fddiMACOld_Lost_Ct) ;
  VAR_25->fddiMACFrameErrorRatio = FUNC_2(VAR_26,VAR_27) ;

  VAR_28 =
   ((!VAR_25->fddiMACFrameErrorThreshold &&
   VAR_25->fddiMACError_Ct != VAR_25->fddiMACOld_Error_Ct) ||
   (VAR_25->fddiMACFrameErrorRatio >
   VAR_25->fddiMACFrameErrorThreshold)) ;

  if (VAR_28 != VAR_25->fddiMACFrameErrorFlag)
   FUNC_13(VAR_21,VAR_10,
    VAR_5,VAR_28) ;

  VAR_26 =
  (VAR_25->fddiMACNotCopied_Ct - VAR_25->fddiMACOld_NotCopied_Ct) ;
  VAR_27 =
  VAR_26 +
  (VAR_25->fddiMACCopied_Ct - VAR_25->fddiMACOld_Copied_Ct) ;
  VAR_25->fddiMACNotCopiedRatio = FUNC_2(VAR_26,VAR_27) ;

  VAR_28 =
   ((!VAR_25->fddiMACNotCopiedThreshold &&
   VAR_25->fddiMACNotCopied_Ct !=
    VAR_25->fddiMACOld_NotCopied_Ct)||
   (VAR_25->fddiMACNotCopiedRatio >
   VAR_25->fddiMACNotCopiedThreshold)) ;

  if (VAR_28 != VAR_25->fddiMACNotCopiedFlag)
   FUNC_13(VAR_21,VAR_11,
    VAR_5,VAR_28) ;




  VAR_25->fddiMACOld_Frame_Ct = VAR_25->fddiMACFrame_Ct ;
  VAR_25->fddiMACOld_Copied_Ct = VAR_25->fddiMACCopied_Ct ;
  VAR_25->fddiMACOld_Error_Ct = VAR_25->fddiMACError_Ct ;
  VAR_25->fddiMACOld_Lost_Ct = VAR_25->fddiMACLost_Ct ;
  VAR_25->fddiMACOld_NotCopied_Ct = VAR_25->fddiMACNotCopied_Ct ;




  for (VAR_29 = 0; VAR_29 < VAR_9; VAR_29 ++) {
   VAR_30 = &VAR_21->y[VAR_29] ;

   if (!VAR_30->mib->fddiPORTHardwarePresent) {
    continue;
   }

   VAR_28 = (VAR_30->mib->fddiPORTEBError_Ct -
    VAR_30->mib->fddiPORTOldEBError_Ct > 5) ;




   FUNC_13(VAR_21,VAR_12,
    (int) (VAR_6+ VAR_30->np) ,VAR_28) ;




   VAR_30->mib->fddiPORTOldEBError_Ct =
    VAR_30->mib->fddiPORTEBError_Ct ;
  }


 }



 if (VAR_23 - VAR_21->sm.smt_last_notify >= (u_long)
  (VAR_21->mib.fddiSMTTT_Notify * VAR_19) ) {






  if (!VAR_21->sm.pend[VAR_15])
   VAR_21->sm.pend[VAR_15] = FUNC_10(VAR_21) ;
  FUNC_12(VAR_21,&VAR_20, VAR_4,
   VAR_21->sm.pend[VAR_15], VAR_14,0) ;
  VAR_21->sm.smt_last_notify = VAR_23 ;
 }




 if (VAR_21->sm.smt_tvu &&
     VAR_23 - VAR_21->sm.smt_tvu > 228*VAR_19) {
  FUNC_0("SMT : UNA expired");
  VAR_21->sm.smt_tvu = 0 ;

  if (!FUNC_4(&VAR_21->mib.m[VAR_7].fddiMACUpstreamNbr,
   &VAR_16)){

   VAR_21->mib.m[VAR_7].fddiMACOldUpstreamNbr=
    VAR_21->mib.m[VAR_7].fddiMACUpstreamNbr ;
  }
  VAR_21->mib.m[VAR_7].fddiMACUpstreamNbr = VAR_16 ;
  VAR_21->mib.m[VAR_7].fddiMACUNDA_Flag = VAR_3 ;






  FUNC_17(VAR_21,0) ;
  FUNC_13(VAR_21, VAR_13,
   VAR_5,0) ;
 }
 if (VAR_21->sm.smt_tvd &&
     VAR_23 - VAR_21->sm.smt_tvd > 228*VAR_19) {
  FUNC_0("SMT : DNA expired");
  VAR_21->sm.smt_tvd = 0 ;
  if (!FUNC_4(&VAR_21->mib.m[VAR_7].fddiMACDownstreamNbr,
   &VAR_16)){

   VAR_21->mib.m[VAR_7].fddiMACOldDownstreamNbr=
    VAR_21->mib.m[VAR_7].fddiMACDownstreamNbr ;
  }
  VAR_21->mib.m[VAR_7].fddiMACDownstreamNbr = VAR_16 ;
  FUNC_13(VAR_21, VAR_13,
   VAR_5,0) ;
 }
 for (VAR_24 = VAR_7; VAR_24 < VAR_8; VAR_24++ ){
  if (VAR_23 - VAR_21->sm.last_tok_time[VAR_24] > 2*VAR_19 ){
   FUNC_9( VAR_21, VAR_24 );
  }
 }


 FUNC_16(VAR_21,&VAR_21->sm.smt_timer, (u_long)1000000L,
  FUNC_1(VAR_2,VAR_18)) ;
}
