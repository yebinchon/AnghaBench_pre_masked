
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct lpfc_vport {int fc_myDID; int cfg_log_verbose; int fc_flag; int port_state; } ;
struct TYPE_14__ {int bdeSize; } ;
struct TYPE_15__ {TYPE_2__ f; } ;
struct TYPE_16__ {TYPE_3__ tus; } ;
struct lpfc_mbx_read_top {TYPE_4__ lilpBde64; } ;
struct TYPE_13__ {int fcf_flag; } ;
struct lpfc_hba {int fc_linkspeed; int hba_flag; int fc_topology; int fc_topology_changed; int sli3_options; int* alpa_map; scalar_t__ sli_rev; int fc_pref_DID; int hbalock; TYPE_1__ fcf; int mbox_mem_pool; scalar_t__ cfg_enable_npiv; scalar_t__ max_vpi; int link_flag; struct lpfc_vport* pport; } ;
struct lpfc_dmabuf {int phys; int virt; } ;
struct fcf_record {int phys; int virt; } ;
struct Scsi_Host {int * host_lock; } ;
struct TYPE_17__ {int mbox_cmpl; struct lpfc_vport* vport; scalar_t__ ctx_buf; } ;
typedef TYPE_5__ LPFC_MBOXQ_t ;


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
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (int ,struct lpfc_mbx_read_top*) ;
 int FUNC_1 (struct lpfc_dmabuf*) ;
 struct lpfc_dmabuf* FUNC_2 (int,int ) ;
 int FUNC_3 (struct lpfc_hba*,TYPE_5__*) ;
 int FUNC_4 (struct lpfc_hba*,struct lpfc_vport*) ;
 int FUNC_5 (struct lpfc_hba*) ;
 int FUNC_6 (struct lpfc_hba*,int ,int ) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_7 (struct lpfc_hba*,int ,int,char*,...) ;
 int FUNC_8 (struct lpfc_vport*,int ,int,char*,int ,TYPE_5__*,TYPE_5__*) ;
 int FUNC_9 (struct lpfc_hba*,TYPE_5__*,int ) ;
 struct Scsi_Host* FUNC_10 (struct lpfc_vport*) ;
 int FUNC_11 (struct lpfc_hba*,struct lpfc_dmabuf*) ;
 int FUNC_12 (struct lpfc_hba*,struct lpfc_dmabuf*,int ) ;
 int FUNC_13 (struct lpfc_hba*) ;
 int FUNC_14 (struct lpfc_hba*,int ) ;
 int FUNC_15 (struct lpfc_hba*,TYPE_5__*,int ) ;
 int FUNC_16 (struct lpfc_vport*,int ) ;
 TYPE_5__* FUNC_17 (int ,int ) ;
 int FUNC_18 (TYPE_5__*,int ) ;
 int FUNC_19 (int*,int ,int) ;
 int FUNC_20 (int *,unsigned long) ;
 int FUNC_21 (int *,unsigned long) ;
 scalar_t__ FUNC_22 (int) ;

__attribute__((used)) static void
FUNC_23(struct lpfc_hba *VAR_33, struct lpfc_mbx_read_top *VAR_34)
{
 struct lpfc_vport *VAR_35 = VAR_33->pport;
 LPFC_MBOXQ_t *VAR_36, *VAR_37 = ((void*)0);
 struct Scsi_Host *VAR_38;
 int VAR_39;
 struct lpfc_dmabuf *VAR_40;
 int VAR_41;
 struct fcf_record *VAR_42;
 uint32_t VAR_43 = 0;
 unsigned long VAR_44;

 FUNC_20(&VAR_33->hbalock, VAR_44);
 VAR_33->fc_linkspeed = FUNC_0(VAR_31, VAR_34);

 if (!(VAR_33->hba_flag & VAR_6)) {
  switch (FUNC_0(VAR_31, VAR_34)) {
  case 133:
  case 132:
  case 130:
  case 128:
  case 136:
  case 134:
  case 131:
  case 129:
  case 135:
   break;
  default:
   VAR_33->fc_linkspeed = VAR_18;
   break;
  }
 }

 if (VAR_33->fc_topology &&
     VAR_33->fc_topology != FUNC_0(VAR_32, VAR_34)) {
  FUNC_7(VAR_33, VAR_10, VAR_15,
    "3314 Toplogy changed was 0x%x is 0x%x\n",
    VAR_33->fc_topology,
    FUNC_0(VAR_32, VAR_34));
  VAR_33->fc_topology_changed = 1;
 }

 VAR_33->fc_topology = FUNC_0(VAR_32, VAR_34);
 VAR_33->link_flag &= ~VAR_24;

 VAR_38 = FUNC_10(VAR_35);
 if (VAR_33->fc_topology == VAR_22) {
  VAR_33->sli3_options &= ~VAR_20;




  if (VAR_33->cfg_enable_npiv && VAR_33->max_vpi)
   FUNC_7(VAR_33, VAR_8, VAR_13,
    "1309 Link Up Event npiv not supported in loop "
    "topology\n");

  if (FUNC_0(VAR_30, VAR_34))
   VAR_43 |= VAR_3;

  VAR_35->fc_myDID = FUNC_0(VAR_29, VAR_34);
  VAR_39 = VAR_34->lilpBde64.tus.f.bdeSize;

  if (VAR_39 == 0) {
   VAR_33->alpa_map[0] = 0;
  } else {
   if (VAR_35->cfg_log_verbose & VAR_13) {
    int VAR_45, VAR_46, VAR_47;
    union {
     uint8_t pamap[16];
     struct {
      uint32_t wd1;
      uint32_t wd2;
      uint32_t wd3;
      uint32_t wd4;
     } pa;
    } VAR_48;
    VAR_45 = VAR_33->alpa_map[0];
    VAR_46 = 0;
    while (VAR_46 < VAR_45) {
     FUNC_19(VAR_48.pamap, 0, 16);
     for (VAR_47 = 1; VAR_46 < VAR_45; VAR_47++) {
      VAR_48.pamap[VAR_47 - 1] =
       VAR_33->alpa_map[VAR_46 + 1];
      VAR_46++;
      if (VAR_47 == 16)
       break;
     }

     FUNC_7(VAR_33,
       VAR_10,
       VAR_13,
       "1304 Link Up Event "
       "ALPA map Data: x%x "
       "x%x x%x x%x\n",
       VAR_48.pa.wd1, VAR_48.pa.wd2,
       VAR_48.pa.wd3, VAR_48.pa.wd4);
    }
   }
  }
 } else {
  if (!(VAR_33->sli3_options & VAR_20)) {
   if (VAR_33->max_vpi && VAR_33->cfg_enable_npiv &&
      (VAR_33->sli_rev >= VAR_21))
    VAR_33->sli3_options |= VAR_20;
  }
  VAR_35->fc_myDID = VAR_33->fc_pref_DID;
  VAR_43 |= VAR_3;
 }
 FUNC_21(&VAR_33->hbalock, VAR_44);

 if (VAR_43) {
  FUNC_20(VAR_38->host_lock, VAR_44);
  VAR_35->fc_flag |= VAR_43;
  FUNC_21(VAR_38->host_lock, VAR_44);
 }

 FUNC_5(VAR_33);
 VAR_36 = FUNC_17(VAR_33->mbox_mem_pool, VAR_5);
 if (!VAR_36)
  goto out;

 VAR_41 = FUNC_9(VAR_33, VAR_36, 0);
 if (VAR_41) {
  FUNC_18(VAR_36, VAR_33->mbox_mem_pool);
  goto out;
 }
 VAR_36->vport = VAR_35;
 VAR_36->mbox_cmpl = VAR_28;
 VAR_41 = FUNC_15(VAR_33, VAR_36, VAR_26);
 if (VAR_41 == VAR_25) {
  VAR_40 = (struct lpfc_dmabuf *)VAR_36->ctx_buf;
  FUNC_6(VAR_33, VAR_40->virt, VAR_40->phys);
  FUNC_1(VAR_40);
  FUNC_18(VAR_36, VAR_33->mbox_mem_pool);
  goto out;
 }

 if (!(VAR_33->hba_flag & VAR_6)) {
  VAR_37 = FUNC_17(VAR_33->mbox_mem_pool, VAR_5);
  if (!VAR_37)
   goto out;
  VAR_35->port_state = VAR_19;
  FUNC_3(VAR_33, VAR_37);
  VAR_37->vport = VAR_35;
  VAR_37->mbox_cmpl = VAR_27;
  VAR_41 = FUNC_15(VAR_33, VAR_37, VAR_26);
  if (VAR_41 == VAR_25) {
   FUNC_18(VAR_37, VAR_33->mbox_mem_pool);
   goto out;
  }
 } else {
  VAR_35->port_state = VAR_23;





  if (!(VAR_33->hba_flag & VAR_7)) {
   VAR_42 = FUNC_2(sizeof(struct fcf_record),
     VAR_5);
   if (FUNC_22(!VAR_42)) {
    FUNC_7(VAR_33, VAR_8,
     VAR_14 | VAR_15,
     "2554 Could not allocate memory for "
     "fcf record\n");
    VAR_41 = -VAR_0;
    goto out;
   }

   FUNC_12(VAR_33, VAR_42,
      VAR_16);
   VAR_41 = FUNC_11(VAR_33, VAR_42);
   if (FUNC_22(VAR_41)) {
    FUNC_7(VAR_33, VAR_8,
     VAR_14 | VAR_15,
     "2013 Could not manually add FCF "
     "record 0, status %d\n", VAR_41);
    VAR_41 = -VAR_0;
    FUNC_1(VAR_42);
    goto out;
   }
   FUNC_1(VAR_42);
  }




  FUNC_20(&VAR_33->hbalock, VAR_44);
  if (VAR_33->hba_flag & VAR_2) {
   FUNC_21(&VAR_33->hbalock, VAR_44);
   return;
  }

  VAR_33->fcf.fcf_flag |= VAR_1;
  FUNC_21(&VAR_33->hbalock, VAR_44);
  FUNC_7(VAR_33, VAR_9, VAR_12 | VAR_11,
    "2778 Start FCF table scan at linkup\n");
  VAR_41 = FUNC_14(VAR_33,
           VAR_17);
  if (VAR_41) {
   FUNC_20(&VAR_33->hbalock, VAR_44);
   VAR_33->fcf.fcf_flag &= ~VAR_1;
   FUNC_21(&VAR_33->hbalock, VAR_44);
   goto out;
  }

  FUNC_13(VAR_33);
 }

 return;
out:
 FUNC_16(VAR_35, VAR_4);
 FUNC_8(VAR_35, VAR_8, VAR_14,
    "0263 Discovery Mailbox error: state: 0x%x : x%px x%px\n",
    VAR_35->port_state, VAR_36, VAR_37);
 FUNC_4(VAR_33, VAR_35);
 return;
}
