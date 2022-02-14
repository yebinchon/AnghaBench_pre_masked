
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct lpfc_vport {int fc_flag; int load_flag; int port_state; } ;
struct lpfc_nodelist {int nlp_last_elscmd; int nlp_flag; int nlp_delayfunc; } ;
struct TYPE_3__ {int fcf_indx; } ;
struct TYPE_4__ {int fcf_flag; TYPE_1__ current_rec; } ;
struct lpfc_hba {int fc_eventTag; int fcoe_eventtag; int hba_flag; int fcoe_cvl_eventtag; int max_vports; int hbalock; TYPE_2__ fcf; } ;
struct lpfc_acqe_fip {int event_tag; int index; } ;
struct Scsi_Host {int * host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;





 int VAR_18 ;
 int FUNC_0 (int ,struct lpfc_acqe_fip*) ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 struct lpfc_vport** FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_vport**) ;
 struct lpfc_vport* FUNC_3 (struct lpfc_hba*,int) ;
 int FUNC_4 (struct lpfc_hba*,int ,int,char*,...) ;
 int FUNC_5 (struct lpfc_hba*) ;
 struct Scsi_Host* FUNC_6 (struct lpfc_vport*) ;
 int FUNC_7 (struct lpfc_hba*) ;
 int FUNC_8 (struct lpfc_hba*) ;
 int FUNC_9 (struct lpfc_hba*,int) ;
 int FUNC_10 (struct lpfc_hba*,int ) ;
 int FUNC_11 (struct lpfc_hba*) ;
 struct lpfc_nodelist* FUNC_12 (struct lpfc_vport*) ;
 int FUNC_13 (struct lpfc_hba*,int) ;
 int FUNC_14 (struct lpfc_hba*) ;
 int VAR_21 ;
 int FUNC_15 (int *,scalar_t__) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static void
FUNC_19(struct lpfc_hba *VAR_22,
   struct lpfc_acqe_fip *VAR_23)
{
 uint8_t VAR_24 = FUNC_0(VAR_21, VAR_23);
 int VAR_25;
 struct lpfc_vport *VAR_26;
 struct lpfc_nodelist *VAR_27;
 struct Scsi_Host *VAR_28;
 int VAR_29;
 struct lpfc_vport **VAR_30;
 int VAR_31;

 VAR_22->fc_eventTag = VAR_23->event_tag;
 VAR_22->fcoe_eventtag = VAR_23->event_tag;
 switch (VAR_24) {
 case 128:
 case 130:
  if (VAR_24 == 128)
   FUNC_4(VAR_22, VAR_10, VAR_14 |
     VAR_13,
     "2546 New FCF event, evt_tag:x%x, "
     "index:x%x\n",
     VAR_23->event_tag,
     VAR_23->index);
  else
   FUNC_4(VAR_22, VAR_12, VAR_14 |
     VAR_13,
     "2788 FCF param modified event, "
     "evt_tag:x%x, index:x%x\n",
     VAR_23->event_tag,
     VAR_23->index);
  if (VAR_22->fcf.fcf_flag & VAR_3) {





   FUNC_4(VAR_22, VAR_11, VAR_14 |
     VAR_13,
     "2779 Read FCF (x%x) for updating "
     "roundrobin FCF failover bmask\n",
     VAR_23->index);
   VAR_25 = FUNC_13(VAR_22, VAR_23->index);
  }


  FUNC_17(&VAR_22->hbalock);
  if (VAR_22->hba_flag & VAR_7) {
   FUNC_18(&VAR_22->hbalock);
   break;
  }

  if (VAR_22->fcf.fcf_flag & (VAR_4 | VAR_5)) {
   FUNC_18(&VAR_22->hbalock);
   break;
  }


  if (VAR_22->fcf.fcf_flag & VAR_6) {
   FUNC_18(&VAR_22->hbalock);
   break;
  }
  FUNC_18(&VAR_22->hbalock);


  FUNC_4(VAR_22, VAR_11, VAR_14 | VAR_13,
    "2770 Start FCF table scan per async FCF "
    "event, evt_tag:x%x, index:x%x\n",
    VAR_23->event_tag, VAR_23->index);
  VAR_25 = FUNC_10(VAR_22,
           VAR_16);
  if (VAR_25)
   FUNC_4(VAR_22, VAR_10, VAR_14 | VAR_13,
     "2547 Issue FCF scan read FCF mailbox "
     "command failed (x%x)\n", VAR_25);
  break;

 case 129:
  FUNC_4(VAR_22, VAR_10, VAR_15,
   "2548 FCF Table full count 0x%x tag 0x%x\n",
   FUNC_0(VAR_20, VAR_23),
   VAR_23->event_tag);
  break;

 case 131:
  VAR_22->fcoe_cvl_eventtag = VAR_23->event_tag;
  FUNC_4(VAR_22, VAR_10, VAR_14 | VAR_13,
   "2549 FCF (x%x) disconnected from network, "
   "tag:x%x\n", VAR_23->index, VAR_23->event_tag);




  FUNC_17(&VAR_22->hbalock);
  if ((VAR_22->fcf.fcf_flag & VAR_3) &&
      (VAR_22->fcf.current_rec.fcf_indx != VAR_23->index)) {
   FUNC_18(&VAR_22->hbalock);

   FUNC_9(VAR_22, VAR_23->index);
   break;
  }
  FUNC_18(&VAR_22->hbalock);


  if (VAR_22->fcf.current_rec.fcf_indx != VAR_23->index)
   break;







  FUNC_17(&VAR_22->hbalock);

  VAR_22->fcf.fcf_flag |= VAR_2;
  FUNC_18(&VAR_22->hbalock);

  FUNC_4(VAR_22, VAR_11, VAR_14 | VAR_13,
    "2771 Start FCF fast failover process due to "
    "FCF DEAD event: evt_tag:x%x, fcf_index:x%x "
    "\n", VAR_23->event_tag, VAR_23->index);
  VAR_25 = FUNC_14(VAR_22);
  if (VAR_25) {
   FUNC_4(VAR_22, VAR_10, VAR_14 |
     VAR_13,
     "2772 Issue FCF rediscover mailbox "
     "command failed, fail through to FCF "
     "dead event\n");
   FUNC_17(&VAR_22->hbalock);
   VAR_22->fcf.fcf_flag &= ~VAR_2;
   FUNC_18(&VAR_22->hbalock);




   FUNC_8(VAR_22);
  } else {

   FUNC_7(VAR_22);




   FUNC_11(VAR_22);
  }
  break;
 case 132:
  VAR_22->fcoe_cvl_eventtag = VAR_23->event_tag;
  FUNC_4(VAR_22, VAR_10, VAR_14 | VAR_13,
   "2718 Clear Virtual Link Received for VPI 0x%x"
   " tag 0x%x\n", VAR_23->index, VAR_23->event_tag);

  VAR_26 = FUNC_3(VAR_22,
      VAR_23->index);
  VAR_27 = FUNC_12(VAR_26);
  if (!VAR_27)
   break;
  VAR_29 = 0;

  VAR_30 = FUNC_1(VAR_22);
  if (VAR_30) {
   for (VAR_31 = 0; VAR_31 <= VAR_22->max_vports && VAR_30[VAR_31] != ((void*)0);
     VAR_31++) {
    if ((!(VAR_30[VAR_31]->fc_flag &
     VAR_9)) &&
     (VAR_30[VAR_31]->port_state > VAR_17)) {
     VAR_29 = 1;
     break;
    }
   }
   FUNC_2(VAR_22, VAR_30);
  }






  if (!(VAR_26->load_flag & VAR_8) &&
     VAR_29) {




   FUNC_15(&VAR_27->nlp_delayfunc,
      VAR_19 + FUNC_16(1000));
   VAR_28 = FUNC_6(VAR_26);
   FUNC_17(VAR_28->host_lock);
   VAR_27->nlp_flag |= VAR_18;
   FUNC_18(VAR_28->host_lock);
   VAR_27->nlp_last_elscmd = VAR_0;
   VAR_26->port_state = VAR_17;
  } else {







   FUNC_17(&VAR_22->hbalock);
   if (VAR_22->fcf.fcf_flag & VAR_3) {
    FUNC_18(&VAR_22->hbalock);
    break;
   }

   VAR_22->fcf.fcf_flag |= VAR_1;
   FUNC_18(&VAR_22->hbalock);
   FUNC_4(VAR_22, VAR_11, VAR_14 |
     VAR_13,
     "2773 Start FCF failover per CVL, "
     "evt_tag:x%x\n", VAR_23->event_tag);
   VAR_25 = FUNC_14(VAR_22);
   if (VAR_25) {
    FUNC_4(VAR_22, VAR_10, VAR_14 |
      VAR_13,
      "2774 Issue FCF rediscover "
      "mailbox command failed, "
      "through to CVL event\n");
    FUNC_17(&VAR_22->hbalock);
    VAR_22->fcf.fcf_flag &= ~VAR_1;
    FUNC_18(&VAR_22->hbalock);




    FUNC_5(VAR_22);
   } else




    FUNC_7(VAR_22);
  }
  break;
 default:
  FUNC_4(VAR_22, VAR_10, VAR_15,
   "0288 Unknown FCoE event type 0x%x event tag "
   "0x%x\n", VAR_24, VAR_23->event_tag);
  break;
 }
}
