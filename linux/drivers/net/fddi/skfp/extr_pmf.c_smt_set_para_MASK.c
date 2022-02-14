
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smt_para {int p_len; int p_type; } ;
struct TYPE_4__ {int please_reconnect; } ;
struct fddi_mib {int fddiSMTConfigPolicy; int fddiSMTConnectionPolicy; int fddiSMTTT_Notify; int fddiSMTStatRptPolicy; int fddiSMTTrace_MaxExpiration; long fddiESSPayload; long fddiESSOverhead; int fddiESSMaxTNeg; int fddiESSMinSegmentSize; int fddiESSCategory; int fddiESSSynchTxMode; int fddiSBACommand; int fddiSBAAvailable; struct fddi_mib_p* p; struct fddi_mib_a* a; struct fddi_mib_m* m; } ;
struct TYPE_3__ {void* raf_act_timer_poll; } ;
struct s_smc {TYPE_2__ sm; struct fddi_mib mib; TYPE_1__ ess; } ;
struct s_p_tab {int p_access; int p_offset; char* p_swap; } ;
struct fddi_mib_p {int fddiPORTConnectionPolicies; int fddiPORTMaint_LS; int fddiPORTLer_Cutoff; int fddiPORTLer_Alarm; scalar_t__ fddiPORTRequestedPaths; } ;
struct fddi_mib_m {int fddiMACRequestedPaths; int fddiMACFrameErrorThreshold; int fddiMACNotCopiedThreshold; int fddiMACMA_UnitdataEnable; int fddiMACT_Min; } ;
struct fddi_mib_a {int fddiPATHSbaPayload; int fddiPATHSbaOverhead; long fddiPATHT_Rmode; int fddiPATHSbaAvailable; int fddiPATHTVXLowerBound; int fddiPATHT_MaxLowerBound; int fddiPATHMaxT_Req; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 long FUNC_1 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct s_smc*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (int ,long) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (struct s_smc*,int ,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 void* VAR_24 ;
 int VAR_25 ;
 int FUNC_5 (struct s_smc*) ;
 long VAR_26 ;
 int FUNC_6 (char*,char*,int) ;
 size_t FUNC_7 (struct s_smc*,int) ;
 int FUNC_8 (struct s_smc*,int ,int ) ;
 int FUNC_9 (struct s_smc*) ;
 int FUNC_10 (struct s_smc*,int ,int,size_t) ;
 struct s_p_tab* FUNC_11 (int) ;
 int FUNC_12 (struct s_smc*) ;
 int FUNC_13 (struct s_smc*) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;

__attribute__((used)) static int FUNC_14(struct s_smc *VAR_31, struct smt_para *VAR_32, int VAR_33,
   int VAR_34, int VAR_35)
{


 const struct s_p_tab *VAR_36 ;
 int VAR_37 ;
 char *VAR_38 ;
 char *VAR_39 ;
 const char *VAR_40 ;
 char VAR_41 ;
 char *VAR_42 ;
 struct fddi_mib *VAR_43 ;
 struct fddi_mib_m *VAR_44 = ((void*)0);
 struct fddi_mib_a *VAR_45 = ((void*)0);
 struct fddi_mib_p *VAR_46 = ((void*)0);
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 FUNC_3(VAR_27,VAR_25) ;
 FUNC_3(VAR_29,VAR_30) ;
 FUNC_3(VAR_28,VAR_26) ;

 VAR_47 = VAR_33 - VAR_3 ;
 VAR_48 = VAR_33 - VAR_4 ;
 VAR_49 = VAR_33 - VAR_5 ;
 VAR_37 = VAR_32->p_len ;
 VAR_38 = (char *) (VAR_32 + 1 ) ;

 VAR_43 = &VAR_31->mib ;
 switch (VAR_32->p_type & 0xf000) {
 case 0x1000 :
 default :
  VAR_42 = (char *) VAR_43 ;
  break ;
 case 0x2000 :
  if (VAR_47 < 0 || VAR_47 >= VAR_8) {
   return VAR_21;
  }
  VAR_44 = &VAR_31->mib.m[VAR_47] ;
  VAR_42 = (char *) VAR_44 ;
  VAR_38 += 4 ;
  VAR_37 -= 4 ;
  break ;
 case 0x3000 :
  if (VAR_48 < 0 || VAR_48 >= VAR_9) {
   return VAR_21;
  }
  VAR_45 = &VAR_31->mib.a[VAR_48] ;
  VAR_42 = (char *) VAR_45 ;
  VAR_38 += 4 ;
  VAR_37 -= 4 ;
  break ;
 case 0x4000 :
  if (VAR_49 < 0 || VAR_49 >= FUNC_12(VAR_31)) {
   return VAR_21;
  }
  VAR_46 = &VAR_31->mib.p[FUNC_7(VAR_31,VAR_49)] ;
  VAR_42 = (char *) VAR_46 ;
  VAR_38 += 4 ;
  VAR_37 -= 4 ;
  break ;
 }
 switch (VAR_32->p_type) {
 case 155 :
 case 154 :
 case 141 :
  if (!VAR_34)
   return VAR_21;
  break ;
 }
 VAR_36 = FUNC_11(VAR_32->p_type) ;
 if (!VAR_36)
  return (VAR_32->p_type & 0xff00) ? VAR_21 :
            VAR_19;
 switch (VAR_36->p_access) {
 case 163 :
 case 162 :
  break ;
 default :
  return VAR_19;
 }
 VAR_39 = VAR_42 + VAR_36->p_offset ;
 VAR_40 = VAR_36->p_swap ;

 while (VAR_40 && (VAR_41 = *VAR_40++)) {
  switch(VAR_41) {
  case 'b' :
   VAR_39 = (char *) &VAR_25 ;
   break ;
  case 'w' :
   VAR_39 = (char *) &VAR_30 ;
   break ;
  case 'l' :
   VAR_39 = (char *) &VAR_26 ;
   break ;
  case 'S' :
  case 'E' :
  case 'R' :
  case 'r' :
   if (VAR_37 < 4) {
    goto len_error ;
   }
   if (VAR_38[0] | VAR_38[1])
    goto val_error ;
   VAR_39[0] = VAR_38[2] ;
   VAR_39[1] = VAR_38[3] ;

   VAR_38 += 4 ;
   VAR_39 += 2 ;
   VAR_37 -= 4 ;
   break ;
  case 'F' :
  case 'B' :
   if (VAR_37 < 4) {
    goto len_error ;
   }
   if (VAR_38[0] | VAR_38[1] | VAR_38[2])
    goto val_error ;
   VAR_39[0] = VAR_38[3] ;
   VAR_37 -= 4 ;
   VAR_38 += 4 ;
   VAR_39 += 4 ;
   break ;
  case 'C' :
  case 'T' :
  case 'L' :
   if (VAR_37 < 4) {
    goto len_error ;
   }






   VAR_39[0] = *VAR_38++ ;
   VAR_39[1] = *VAR_38++ ;
   VAR_39[2] = *VAR_38++ ;
   VAR_39[3] = *VAR_38++ ;

   VAR_37 -= 4 ;
   VAR_39 += 4 ;
   break ;
  case 'A' :
   if (VAR_37 < 8)
    goto len_error ;
   if (VAR_35)
    FUNC_6(VAR_39,VAR_38+2,6) ;
   VAR_39 += 8 ;
   VAR_38 += 8 ;
   VAR_37 -= 8 ;
   break ;
  case '4' :
   if (VAR_37 < 4)
    goto len_error ;
   if (VAR_35)
    FUNC_6(VAR_39,VAR_38,4) ;
   VAR_39 += 4 ;
   VAR_38 += 4 ;
   VAR_37 -= 4 ;
   break ;
  case '8' :
   if (VAR_37 < 8)
    goto len_error ;
   if (VAR_35)
    FUNC_6(VAR_39,VAR_38,8) ;
   VAR_39 += 8 ;
   VAR_38 += 8 ;
   VAR_37 -= 8 ;
   break ;
  case 'D' :
   if (VAR_37 < 32)
    goto len_error ;
   if (VAR_35)
    FUNC_6(VAR_39,VAR_38,32) ;
   VAR_39 += 32 ;
   VAR_38 += 32 ;
   VAR_37 -= 32 ;
   break ;
  case 'P' :
   if (VAR_35) {
    VAR_39[0] = *VAR_38++ ;
    VAR_39[1] = *VAR_38++ ;
    VAR_39[2] = *VAR_38++ ;
    VAR_39[3] = *VAR_38++ ;
    VAR_39[4] = *VAR_38++ ;
    VAR_39[5] = *VAR_38++ ;
    VAR_39[6] = *VAR_38++ ;
    VAR_39[7] = *VAR_38++ ;
   }
   VAR_39 += 8 ;
   VAR_37 -= 8 ;
   break ;
  default :
   FUNC_4(VAR_31,VAR_15, VAR_16) ;
   return VAR_19;
  }
 }



 switch (VAR_32->p_type) {
 case 161:
  if (VAR_30 & ~1)
   goto val_error ;
  if (VAR_35) (VAR_43->fddiSMTConfigPolicy = VAR_30) ;
  break ;
 case 160 :
  if (!(VAR_30 & VAR_10))
   goto val_error ;
  if (VAR_35) (VAR_43->fddiSMTConnectionPolicy = VAR_30) ;
  break ;
 case 159 :
  if (VAR_30 < 2 || VAR_30 > 30)
   goto val_error ;
  if (VAR_35) (VAR_43->fddiSMTTT_Notify = VAR_30) ;
  break ;
 case 158 :
  if (VAR_25 & ~1)
   goto val_error ;
  if (VAR_35) (VAR_43->fddiSMTStatRptPolicy = VAR_25) ;
  break ;
 case 157 :




  if (VAR_26 < (long)0x478bf51L)
   goto val_error ;
  if (VAR_35) (VAR_43->fddiSMTTrace_MaxExpiration = VAR_26) ;
  break ;
 case 145 :
  if ((VAR_30 & (VAR_7 |
   VAR_6)) == 0 )
   goto val_error ;
  if (VAR_35) (VAR_44->fddiMACRequestedPaths = VAR_30) ;
  break ;
 case 144 :

  if (VAR_35) (VAR_44->fddiMACFrameErrorThreshold = VAR_30) ;
  break ;
 case 143 :

  if (VAR_35) (VAR_44->fddiMACNotCopiedThreshold = VAR_30) ;
  break ;
 case 142:
  if (VAR_25 & ~1)
   goto val_error ;
  if (VAR_35) {
   VAR_44->fddiMACMA_UnitdataEnable = VAR_25 ;
   FUNC_8(VAR_31,VAR_2,VAR_11) ;
  }
  break ;
 case 141 :
  if (VAR_35) (VAR_44->fddiMACT_Min = VAR_26) ;
  break ;
 case 140 :
  if (VAR_26 > 1562)
   goto val_error ;
  if (VAR_35) (VAR_45->fddiPATHSbaPayload = VAR_26) ;




  break ;
 case 139 :
  if (VAR_26 > 5000)
   goto val_error ;

  if (VAR_26 != 0 && VAR_45->fddiPATHSbaPayload == 0)
   goto val_error ;

  if (VAR_35) (VAR_45->fddiPATHSbaOverhead = VAR_26) ;




  break ;
 case 138:



  if (VAR_35) {
   VAR_45->fddiPATHT_Rmode = VAR_26 ;
   FUNC_9(VAR_31) ;
  }
  break ;
 case 137 :
  if (VAR_26 > 0x00BEBC20L)
   goto val_error ;




  if (VAR_35) (VAR_45->fddiPATHSbaAvailable = VAR_26) ;
  break ;
 case 136 :
  if (VAR_35) (VAR_45->fddiPATHTVXLowerBound = VAR_26) ;
  goto change_mac_para ;
 case 135 :
  if (VAR_35) (VAR_45->fddiPATHT_MaxLowerBound = VAR_26) ;
  goto change_mac_para ;
 case 134 :
  if (VAR_35) (VAR_45->fddiPATHMaxT_Req = VAR_26) ;

change_mac_para:
  if (VAR_35 && FUNC_13(VAR_31)) {
   FUNC_2(VAR_31,VAR_12) ;
   VAR_31->sm.please_reconnect = 1 ;
   FUNC_8(VAR_31,VAR_1,VAR_0) ;
  }
  break ;
 case 133 :
  if (VAR_25 > 1)
   goto val_error ;
  if (VAR_35) (VAR_46->fddiPORTConnectionPolicies = VAR_25) ;
  break ;
 case 132 :

  if (VAR_35) (FUNC_6((char *)VAR_46->fddiPORTRequestedPaths, (char *)&VAR_26,4)) ;

  break ;
 case 131:
  if (VAR_30 > 4)
   goto val_error ;
  if (VAR_35) (VAR_46->fddiPORTMaint_LS = VAR_30) ;
  break ;
 case 130 :
  if (VAR_25 < 4 || VAR_25 > 15)
   goto val_error ;
  if (VAR_35) (VAR_46->fddiPORTLer_Cutoff = VAR_25) ;
  break ;
 case 129 :
  if (VAR_25 < 4 || VAR_25 > 15)
   goto val_error ;
  if (VAR_35) (VAR_46->fddiPORTLer_Alarm = VAR_25) ;
  break ;




 case 156 :
  if (FUNC_10(VAR_31,VAR_23, (int) VAR_30, 0))
   goto val_error ;
  break ;
 case 128:
  if (FUNC_10(VAR_31,VAR_17, (int) VAR_30,
   FUNC_7(VAR_31,VAR_49)))
   goto val_error ;
  break ;
 default :
  break ;
 }
 return 0;

val_error:

 return VAR_22;

len_error:

 return VAR_20;
}
