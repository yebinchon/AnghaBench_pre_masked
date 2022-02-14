
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {scalar_t__ cfg_enable_fc4_type; int delayed_disc_tmo; int fc_flag; int fc_ns_retry; int port_state; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (struct Scsi_Host*,int ,int ,int ) ;
 int FUNC_3 (struct lpfc_vport*,int ,char*,int ,int ,int ) ;
 int FUNC_4 (struct lpfc_vport*) ;
 struct Scsi_Host* FUNC_5 (struct lpfc_vport*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

void
FUNC_8(struct lpfc_vport *VAR_4)
{
 struct Scsi_Host *VAR_5 = FUNC_5(VAR_4);

 if (VAR_4->cfg_enable_fc4_type != VAR_3)
  FUNC_2(VAR_5, FUNC_1(),
       VAR_0, 0);

 FUNC_3(VAR_4, VAR_2,
  "Link Down:       state:x%x rtry:x%x flg:x%x",
  VAR_4->port_state, VAR_4->fc_ns_retry, VAR_4->fc_flag);

 FUNC_4(VAR_4);


 FUNC_6(VAR_5->host_lock);
 VAR_4->fc_flag &= ~VAR_1;
 FUNC_7(VAR_5->host_lock);
 FUNC_0(&VAR_4->delayed_disc_tmo);
}
