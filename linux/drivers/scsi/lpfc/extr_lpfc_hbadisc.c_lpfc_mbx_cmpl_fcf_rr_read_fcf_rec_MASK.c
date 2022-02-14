
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_7__ {scalar_t__ fcf_indx; } ;
struct TYPE_6__ {scalar_t__ fcf_indx; } ;
struct TYPE_5__ {scalar_t__ fcf_flag; TYPE_3__ failover_rec; TYPE_2__ current_rec; } ;
struct lpfc_hba {scalar_t__ link_state; scalar_t__ hba_flag; TYPE_1__ fcf; int hbalock; int pport; } ;
struct lpfc_fcf_rec {int dummy; } ;
struct fcf_record {int dummy; } ;
typedef int LPFC_MBOXQ_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct lpfc_hba*,TYPE_3__*,struct fcf_record*,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ,struct fcf_record*) ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct lpfc_hba*,struct fcf_record*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (struct lpfc_hba*,int ,int ,char*,scalar_t__,...) ;
 int FUNC_5 (struct lpfc_hba*) ;
 struct fcf_record* FUNC_6 (struct lpfc_hba*,int *,scalar_t__*) ;
 int FUNC_7 (struct lpfc_hba*,scalar_t__) ;
 scalar_t__ FUNC_8 (struct lpfc_hba*) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (struct lpfc_hba*,struct fcf_record*,scalar_t__,scalar_t__) ;
 int FUNC_11 (struct lpfc_hba*,int *) ;
 int FUNC_12 (struct lpfc_hba*) ;
 int FUNC_13 (struct lpfc_hba*) ;
 int FUNC_14 (TYPE_2__*,TYPE_3__*,int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

void
FUNC_18(struct lpfc_hba *VAR_8, LPFC_MBOXQ_t *VAR_9)
{
 struct fcf_record *VAR_10;
 uint32_t VAR_11, VAR_12;
 uint16_t VAR_13, VAR_14;
 uint16_t VAR_15;
 uint16_t VAR_16;
 int VAR_17;


 if (VAR_8->link_state < VAR_6) {
  FUNC_16(&VAR_8->hbalock);
  VAR_8->fcf.fcf_flag &= ~VAR_1;
  VAR_8->hba_flag &= ~VAR_2;
  FUNC_17(&VAR_8->hbalock);
  goto out;
 }


 VAR_10 = FUNC_6(VAR_8, VAR_9,
            &VAR_13);
 if (!VAR_10) {
  FUNC_4(VAR_8, VAR_4, VAR_5,
    "2766 Mailbox command READ_FCF_RECORD "
    "failed to retrieve a FCF record. "
    "hba_flg x%x fcf_flg x%x\n", VAR_8->hba_flag,
    VAR_8->fcf.fcf_flag);
  FUNC_13(VAR_8);
  goto out;
 }


 VAR_17 = FUNC_3(VAR_8, VAR_10, &VAR_11,
          &VAR_12, &VAR_16);


 FUNC_10(VAR_8, VAR_10, VAR_16,
          VAR_13);

 VAR_14 = FUNC_1(VAR_7, VAR_10);
 if (!VAR_17) {
  FUNC_4(VAR_8, VAR_3, VAR_5,
    "2848 Remove ineligible FCF (x%x) from "
    "from roundrobin bmask\n", VAR_14);

  FUNC_7(VAR_8, VAR_14);

  VAR_14 = FUNC_8(VAR_8);
  VAR_17 = FUNC_9(VAR_8->pport, VAR_14);
  if (VAR_17)
   goto out;
  goto error_out;
 }

 if (VAR_14 == VAR_8->fcf.current_rec.fcf_indx) {
  FUNC_4(VAR_8, VAR_3, VAR_5,
    "2760 Perform FLOGI roundrobin FCF failover: "
    "FCF (x%x) back to FCF (x%x)\n",
    VAR_8->fcf.current_rec.fcf_indx, VAR_14);

  FUNC_15(500);
  FUNC_2(VAR_8->pport);
  goto out;
 }


 FUNC_4(VAR_8, VAR_3, VAR_5,
   "2834 Update current FCF (x%x) with new FCF (x%x)\n",
   VAR_8->fcf.failover_rec.fcf_indx, VAR_14);
 FUNC_16(&VAR_8->hbalock);
 FUNC_0(VAR_8, &VAR_8->fcf.failover_rec,
     VAR_10, VAR_12, VAR_16,
     (VAR_11 ? VAR_0 : 0));
 FUNC_17(&VAR_8->hbalock);

 VAR_15 = VAR_8->fcf.current_rec.fcf_indx;


 FUNC_12(VAR_8);


 FUNC_14(&VAR_8->fcf.current_rec, &VAR_8->fcf.failover_rec,
        sizeof(struct lpfc_fcf_rec));

 FUNC_4(VAR_8, VAR_3, VAR_5,
   "2783 Perform FLOGI roundrobin FCF failover: FCF "
   "(x%x) to FCF (x%x)\n", VAR_15, VAR_14);

error_out:
 FUNC_5(VAR_8);
out:
 FUNC_11(VAR_8, VAR_9);
}
