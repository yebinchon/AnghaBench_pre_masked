
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {int fcf_flag; } ;
struct lpfc_hba {scalar_t__ link_state; scalar_t__ fcoe_eventtag; scalar_t__ fcoe_eventtag_at_fcf_scan; int hba_flag; int hbalock; TYPE_1__ fcf; } ;


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
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct lpfc_hba*,int ,int,char*,scalar_t__,...) ;
 int FUNC_1 (struct lpfc_hba*,int ) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(struct lpfc_hba *VAR_11, uint8_t VAR_12)
{




 if ((VAR_11->link_state >= VAR_10) &&
     (VAR_11->fcoe_eventtag == VAR_11->fcoe_eventtag_at_fcf_scan))
  return 0;

 FUNC_0(VAR_11, VAR_6, VAR_8,
   "2768 Pending link or FCF event during current "
   "handling of the previous event: link_state:x%x, "
   "evt_tag_at_scan:x%x, evt_tag_current:x%x\n",
   VAR_11->link_state, VAR_11->fcoe_eventtag_at_fcf_scan,
   VAR_11->fcoe_eventtag);

 FUNC_3(&VAR_11->hbalock);
 VAR_11->fcf.fcf_flag &= ~VAR_0;
 FUNC_4(&VAR_11->hbalock);

 if (VAR_11->link_state >= VAR_10) {
  FUNC_0(VAR_11, VAR_6, VAR_8 | VAR_7,
    "2780 Restart FCF table scan due to "
    "pending FCF event:evt_tag_at_scan:x%x, "
    "evt_tag_current:x%x\n",
    VAR_11->fcoe_eventtag_at_fcf_scan,
    VAR_11->fcoe_eventtag);
  FUNC_1(VAR_11, VAR_9);
 } else {




  FUNC_0(VAR_11, VAR_6, VAR_8 | VAR_7,
    "2833 Stop FCF discovery process due to link "
    "state change (x%x)\n", VAR_11->link_state);
  FUNC_3(&VAR_11->hbalock);
  VAR_11->hba_flag &= ~(VAR_5 | VAR_4);
  VAR_11->fcf.fcf_flag &= ~(VAR_2 | VAR_1);
  FUNC_4(&VAR_11->hbalock);
 }


 if (VAR_12) {
  FUNC_3(&VAR_11->hbalock);
  VAR_11->fcf.fcf_flag &= ~VAR_3;
  FUNC_4(&VAR_11->hbalock);
  FUNC_2(VAR_11);
 }
 return 1;
}
