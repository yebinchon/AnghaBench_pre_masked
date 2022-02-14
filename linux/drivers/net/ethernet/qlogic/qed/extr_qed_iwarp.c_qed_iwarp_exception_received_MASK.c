
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_iwarp_ep {int cb_context; int (* event_cb ) (int ,struct qed_iwarp_cm_event_params*) ;int cm_info; int cid; } ;
struct qed_iwarp_cm_event_params {int * cm_info; struct qed_iwarp_ep* ep_context; void* event; int status; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int,...) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,struct qed_iwarp_cm_event_params*) ;

__attribute__((used)) static void FUNC_2(struct qed_hwfn *VAR_12,
      struct qed_iwarp_ep *VAR_13,
      int VAR_14)
{
 struct qed_iwarp_cm_event_params VAR_15;
 bool VAR_16 = 0;

 FUNC_0(VAR_12, VAR_11, "EP(0x%x) fw_ret_code=%d\n",
     VAR_13->cid, VAR_14);

 switch (VAR_14) {
 case 136:
  VAR_15.status = 0;
  VAR_15.event = VAR_2;
  VAR_16 = 1;
  break;
 case 135:
  VAR_15.status = -VAR_0;
  VAR_15.event = VAR_2;
  VAR_16 = 1;
  break;
 case 129:
  VAR_15.event = VAR_9;
  VAR_16 = 1;
  break;
 case 137:
  VAR_15.event = VAR_3;
  VAR_16 = 1;
  break;
 case 134:
  VAR_15.event = VAR_4;
  VAR_16 = 1;
  break;
 case 130:
  VAR_15.event = VAR_8;
  VAR_16 = 1;
  break;
 case 138:
  VAR_15.event = VAR_1;
  VAR_16 = 1;
  break;
 case 132:
  VAR_15.event = VAR_6;
  VAR_16 = 1;
  break;
 case 133:
  VAR_15.event = VAR_5;
  VAR_16 = 1;
  break;
 case 131:
  VAR_15.event = VAR_7;
  VAR_16 = 1;
  break;
 case 128:
  VAR_15.event = VAR_10;
  VAR_16 = 1;
  break;
 default:
  FUNC_0(VAR_12, VAR_11,
      "Unhandled exception received...fw_ret_code=%d\n",
      VAR_14);
  break;
 }

 if (VAR_16) {
  VAR_15.ep_context = VAR_13;
  VAR_15.cm_info = &VAR_13->cm_info;
  VAR_13->event_cb(VAR_13->cb_context, &VAR_15);
 }
}
