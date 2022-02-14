
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct lpfc_vport {int fc_flag; struct lpfc_hba* phba; } ;
struct TYPE_9__ {int sli_flag; } ;
struct lpfc_hba {int hba_flag; int fc_ratov; int mbox_mem_pool; int cfg_link_speed; int cfg_topology; TYPE_1__ sli; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
struct TYPE_10__ {scalar_t__ mbxStatus; int mbxOwner; int mbxCommand; } ;
struct TYPE_11__ {TYPE_2__ mb; } ;
struct TYPE_12__ {TYPE_3__ u; } ;
typedef TYPE_4__ LPFC_MBOXQ_t ;


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
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct lpfc_hba*,TYPE_4__*,int ,int ) ;
 int FUNC_1 (struct lpfc_hba*,int ,int,char*) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_hba*,TYPE_4__*,int) ;
 TYPE_4__* FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (void*,int ,int) ;

__attribute__((used)) static int
FUNC_7(struct Scsi_Host *VAR_18)
{
 struct lpfc_vport *VAR_19 = (struct lpfc_vport *) VAR_18->hostdata;
 struct lpfc_hba *VAR_20 = VAR_19->phba;
 LPFC_MBOXQ_t *VAR_21;
 int VAR_22 = VAR_11;





 if ((VAR_19->fc_flag & VAR_3) ||
     (VAR_20->hba_flag & VAR_6) ||
     (VAR_20->sli.sli_flag & VAR_9))
  return -VAR_2;

 VAR_21 = FUNC_4(VAR_20->mbox_mem_pool,VAR_4);

 if (!VAR_21)
  return -VAR_1;

 FUNC_6((void *)VAR_21, 0, sizeof (LPFC_MBOXQ_t));
 VAR_21->u.mb.mbxCommand = VAR_14;
 VAR_21->u.mb.mbxOwner = VAR_17;

 VAR_22 = FUNC_3(VAR_20, VAR_21, VAR_10 * 2);

 if ((VAR_22 == VAR_15) &&
     (VAR_21->u.mb.mbxStatus == 0 ||
      VAR_21->u.mb.mbxStatus == VAR_12)) {
  FUNC_6((void *)VAR_21, 0, sizeof (LPFC_MBOXQ_t));
  FUNC_0(VAR_20, VAR_21, VAR_20->cfg_topology,
          VAR_20->cfg_link_speed);
  VAR_22 = FUNC_3(VAR_20, VAR_21,
           VAR_20->fc_ratov * 2);
  if ((VAR_22 == VAR_15) &&
      (VAR_21->u.mb.mbxStatus == VAR_13))
   FUNC_1(VAR_20, VAR_5, VAR_7 | VAR_8,
     "2859 SLI authentication is required "
     "for INIT_LINK but has not done yet\n");
 }

 FUNC_2(VAR_20);
 if (VAR_22 != VAR_16)
  FUNC_5(VAR_21, VAR_20->mbox_mem_pool);

 if (VAR_22 == VAR_11)
  return -VAR_0;

 return 0;
}
