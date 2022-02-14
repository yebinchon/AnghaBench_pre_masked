
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ird; int ord; } ;
struct qed_iwarp_ep {scalar_t__ connect_mode; int mpa_reply_processed; int cb_context; int (* event_cb ) (int ,struct qed_iwarp_cm_event_params*) ;TYPE_1__ cm_info; int mpa_rev; } ;
struct qed_iwarp_cm_event_params {scalar_t__ status; struct qed_iwarp_ep* ep_context; TYPE_1__* cm_info; int event; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct qed_hwfn*,struct qed_iwarp_ep*) ;
 int FUNC_3 (int ,struct qed_iwarp_cm_event_params*) ;

__attribute__((used)) static void
FUNC_4(struct qed_hwfn *VAR_3, struct qed_iwarp_ep *VAR_4)
{
 struct qed_iwarp_cm_event_params VAR_5;

 if (VAR_4->connect_mode == VAR_2) {
  FUNC_0(VAR_3,
     "MPA reply event not expected on passive side!\n");
  return;
 }

 VAR_5.event = VAR_0;

 FUNC_2(VAR_3, VAR_4);

 FUNC_1(VAR_3, VAR_1,
     "MPA_NEGOTIATE (v%d): ORD: 0x%x IRD: 0x%x\n",
     VAR_4->mpa_rev, VAR_4->cm_info.ord, VAR_4->cm_info.ird);

 VAR_5.cm_info = &VAR_4->cm_info;
 VAR_5.ep_context = VAR_4;
 VAR_5.status = 0;

 VAR_4->mpa_reply_processed = 1;

 VAR_4->event_cb(VAR_4->cb_context, &VAR_5);
}
