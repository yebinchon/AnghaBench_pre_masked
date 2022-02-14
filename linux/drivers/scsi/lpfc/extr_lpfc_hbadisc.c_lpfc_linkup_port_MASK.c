
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int load_flag; scalar_t__ cfg_enable_fc4_type; int fc_flag; scalar_t__ fc_ns_retry; struct lpfc_hba* phba; } ;
struct lpfc_hba {int sli3_options; struct lpfc_vport* pport; int link_flag; int fc_linkspeed; int fc_topology; } ;
struct Scsi_Host {int host_lock; } ;


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
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_0 () ;
 int FUNC_1 (struct Scsi_Host*,int ,int ,int ) ;
 int FUNC_2 (struct lpfc_vport*,int ,char*,int ,int ,int ) ;
 int FUNC_3 (struct lpfc_vport*) ;
 struct Scsi_Host* FUNC_4 (struct lpfc_vport*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct lpfc_vport *VAR_13)
{
 struct Scsi_Host *VAR_14 = FUNC_4(VAR_13);
 struct lpfc_hba *VAR_15 = VAR_13->phba;

 if ((VAR_13->load_flag & VAR_9) != 0)
  return;

 FUNC_2(VAR_13, VAR_10,
  "Link Up:         top:x%x speed:x%x flg:x%x",
  VAR_15->fc_topology, VAR_15->fc_linkspeed, VAR_15->link_flag);


 if (!(VAR_15->sli3_options & VAR_12) &&
  (VAR_13 != VAR_15->pport))
  return;

 if (VAR_13->cfg_enable_fc4_type != VAR_11)
  FUNC_1(VAR_14, FUNC_0(),
       VAR_0, 0);

 FUNC_5(VAR_14->host_lock);
 VAR_13->fc_flag &= ~(VAR_5 | VAR_6 | VAR_1 |
       VAR_8 | VAR_4 | VAR_7);
 VAR_13->fc_flag |= VAR_3;
 VAR_13->fc_ns_retry = 0;
 FUNC_6(VAR_14->host_lock);

 if (VAR_13->fc_flag & VAR_2)
  FUNC_3(VAR_13);

}
