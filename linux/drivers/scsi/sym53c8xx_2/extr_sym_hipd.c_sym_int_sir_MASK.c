
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_char ;
typedef int u32 ;
struct sym_tcb {int dummy; } ;
struct sym_hcb {int* msgout; int lastmsg; int* msgin; struct sym_tcb* target; } ;
struct sym_ccb {int host_flags; int cmd; int xerr_status; int extra_bytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct sym_hcb*,int ) ;
 int FUNC_1 (struct sym_hcb*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

 int VAR_12 ;

 void* VAR_13 ;
 int VAR_14 ;

 int VAR_15 ;




 int FUNC_2 (struct sym_hcb*,int ,int ) ;
 int FUNC_3 (struct sym_hcb*,int ) ;
 int FUNC_4 (struct sym_hcb*,int ,int ) ;
 int FUNC_5 (struct sym_hcb*,int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (struct sym_hcb*,int ) ;
 int FUNC_8 (struct sym_hcb*,int ) ;
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
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_9 (char*,size_t) ;
 int FUNC_10 (int) ;
 struct sym_ccb* FUNC_11 (struct sym_hcb*,int ) ;
 int FUNC_12 (struct sym_hcb*,struct sym_ccb*) ;
 int FUNC_13 (struct sym_hcb*,struct sym_tcb*,struct sym_ccb*,int) ;
 int FUNC_14 (struct sym_hcb*,struct sym_tcb*,struct sym_ccb*) ;
 int FUNC_15 (struct sym_hcb*,struct sym_tcb*,struct sym_ccb*) ;
 int FUNC_16 (struct sym_hcb*,struct sym_tcb*,struct sym_ccb*) ;
 int FUNC_17 (int ,char*,int ,int) ;
 int FUNC_18 (struct sym_ccb*,char*,int*) ;
 int FUNC_19 (int ,struct sym_tcb*,struct sym_ccb*,char*,...) ;
 int FUNC_20 (struct sym_hcb*,size_t,struct sym_ccb*) ;
 int FUNC_21 (struct sym_hcb*,size_t) ;
 int FUNC_22 (struct sym_hcb*,struct sym_tcb*,struct sym_ccb*) ;
 int FUNC_23 (struct sym_hcb*) ;
 int FUNC_24 (struct sym_hcb*,struct sym_tcb*,struct sym_ccb*) ;

__attribute__((used)) static void FUNC_25(struct sym_hcb *VAR_28)
{
 u_char VAR_29 = FUNC_0(VAR_28, VAR_25);
 u32 VAR_30 = FUNC_1(VAR_28, VAR_24);
 struct sym_ccb *VAR_31 = FUNC_11(VAR_28, VAR_30);
 u_char VAR_32 = FUNC_0(VAR_28, VAR_27) & 0x0f;
 struct sym_tcb *VAR_33 = &VAR_28->target[VAR_32];
 int VAR_34;

 if (VAR_0 & VAR_2) FUNC_9 ("I#%d", VAR_29);

 switch (VAR_29) {
 case 147:
  FUNC_12(VAR_28, VAR_31);
  return;




 case 132:
 case 128:
 case 150:
  FUNC_21(VAR_28, VAR_29);
  return;




 case 131:
  FUNC_19(VAR_9, VAR_33, VAR_31,
    "No MSG OUT phase after selection with ATN\n");
  goto out_stuck;




 case 133:
  FUNC_19(VAR_9, VAR_33, VAR_31,
    "No MSG IN phase after reselection\n");
  goto out_stuck;




 case 134:
  FUNC_19(VAR_9, VAR_33, VAR_31,
    "No IDENTIFY after reselection\n");
  goto out_stuck;



 case 135:
  VAR_28->msgout[0] = VAR_15;
  goto out;




 case 137:
  VAR_28->msgout[0] = VAR_10;
  goto out;



 case 136:
  VAR_28->msgout[0] = VAR_11;
  goto out;




 case 138:
  VAR_28->lastmsg = VAR_28->msgout[0];
  VAR_28->msgout[0] = VAR_13;
  FUNC_19(VAR_9, VAR_33, VAR_31,
   "message %x sent on bad reselection\n", VAR_28->lastmsg);
  goto out;




 case 144:
  VAR_28->lastmsg = VAR_28->msgout[0];
  VAR_28->msgout[0] = VAR_13;

  if (VAR_28->lastmsg == VAR_14 || VAR_28->lastmsg == VAR_12) {
   if (VAR_31) {
    VAR_31->xerr_status &= ~VAR_18;
    if (!VAR_31->xerr_status)
     FUNC_4(VAR_28, VAR_4, VAR_3);
   }
  }
  goto out;





 case 148:
  if (!VAR_31)
   goto out;
  FUNC_20(VAR_28, VAR_29, VAR_31);
  return;




 case 139:
  FUNC_18(VAR_31, "M_REJECT to send for ", VAR_28->msgin);
  VAR_28->msgout[0] = 155;
  goto out;






 case 129:
  if (VAR_31) {
   FUNC_5(VAR_28, VAR_4, VAR_3);
   VAR_31->xerr_status |= VAR_20;
  }
  goto out;





 case 130:
  if (VAR_31) {
   FUNC_5(VAR_28, VAR_4, VAR_3);
   VAR_31->xerr_status |= VAR_19;
  }
  goto out;






 case 146:
  if (VAR_31) {
   FUNC_5(VAR_28, VAR_4, VAR_3);
   VAR_31->xerr_status |= VAR_17;
   VAR_31->extra_bytes += FUNC_1(VAR_28, VAR_26);
  }
  goto out;



 case 149:
  if (VAR_31) {
   FUNC_5(VAR_28, VAR_4, VAR_3);
   VAR_31->xerr_status |= VAR_16;
  }
  goto out;



 case 143:
  if (!VAR_31)
   goto out_stuck;
  switch (VAR_28->msgin [0]) {





  case 157:
   switch (VAR_28->msgin [2]) {
   case 154:
    if (VAR_0 & VAR_1)
     FUNC_18(VAR_31, "extended msg ",
            VAR_28->msgin);
    VAR_34 = (VAR_28->msgin[3]<<24) + (VAR_28->msgin[4]<<16) +
          (VAR_28->msgin[5]<<8) + (VAR_28->msgin[6]);
    FUNC_13(VAR_28, VAR_33, VAR_31, VAR_34);
    return;
   case 152:
    FUNC_22(VAR_28, VAR_33, VAR_31);
    return;
   case 153:
    FUNC_16(VAR_28, VAR_33, VAR_31);
    return;
   case 151:
    FUNC_24(VAR_28, VAR_33, VAR_31);
    return;
   default:
    goto out_reject;
   }
   break;







  case 156:
   if (VAR_0 & VAR_1)
    FUNC_18(VAR_31, "1 or 2 byte ", VAR_28->msgin);
   if (VAR_31->host_flags & VAR_5)
    FUNC_3(VAR_28, FUNC_7(VAR_28, VAR_21));
   else
    FUNC_13(VAR_28, VAR_33, VAR_31, -1);
   return;
  case 155:
   if (FUNC_0(VAR_28, VAR_8) == VAR_7)
    FUNC_15(VAR_28, VAR_33, VAR_31);
   else {
    FUNC_17(VAR_31->cmd,
     "M_REJECT received (%x:%x).\n",
     FUNC_10(VAR_28->lastmsg), VAR_28->msgout[0]);
   }
   goto out_clrack;
   break;
  default:
   goto out_reject;
  }
  break;




 case 142:
  FUNC_18(VAR_31, "WEIRD message received", VAR_28->msgin);
  FUNC_3(VAR_28, FUNC_8(VAR_28, VAR_23));
  return;





 case 141:
  FUNC_2(VAR_28, VAR_8, VAR_6);





 case 140:
  FUNC_14(VAR_28, VAR_33, VAR_31);
  goto out;
 }

out:
 FUNC_6();
 return;
out_reject:
 FUNC_3(VAR_28, FUNC_8(VAR_28, VAR_22));
 return;
out_clrack:
 FUNC_3(VAR_28, FUNC_7(VAR_28, VAR_21));
 return;
out_stuck:
 return;
}
