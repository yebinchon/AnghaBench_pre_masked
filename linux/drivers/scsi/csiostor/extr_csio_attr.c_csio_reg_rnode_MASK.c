
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fc_rport_identifiers {int roles; int port_id; void* port_name; void* node_name; } ;
struct fc_rport {int maxframe_size; int scsi_target_id; int supported_classes; scalar_t__ dd_data; } ;
struct TYPE_3__ {int sp_bb_data; } ;
struct csio_service_parms {TYPE_2__* clsp; TYPE_1__ csp; } ;
struct csio_rnode {int role; int nport_id; int scsi_id; struct csio_service_parms rn_sparm; struct fc_rport* rport; } ;
struct csio_lnode {int num_reg_rnodes; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_4__ {int cp_class; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct csio_lnode*,char*,int ,int ) ;
 int FUNC_2 (struct csio_lnode*,char*,int ) ;
 struct Scsi_Host* FUNC_3 (struct csio_lnode*) ;
 int FUNC_4 (struct csio_rnode*) ;
 int FUNC_5 (struct csio_rnode*) ;
 struct csio_lnode* FUNC_6 (struct csio_rnode*) ;
 struct fc_rport* FUNC_7 (struct Scsi_Host*,int ,struct fc_rport_identifiers*) ;
 int FUNC_8 (struct fc_rport*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 void* FUNC_12 (int ) ;

void
FUNC_13(struct csio_rnode *VAR_8)
{
 struct csio_lnode *VAR_9 = FUNC_6(VAR_8);
 struct Scsi_Host *VAR_10 = FUNC_3(VAR_9);
 struct fc_rport_identifiers VAR_11;
 struct fc_rport *VAR_12;
 struct csio_service_parms *VAR_13;

 VAR_11.node_name = FUNC_12(FUNC_4(VAR_8));
 VAR_11.port_name = FUNC_12(FUNC_5(VAR_8));
 VAR_11.port_id = VAR_8->nport_id;
 VAR_11.roles = VAR_7;

 if (VAR_8->role & VAR_0 || VAR_8->role & VAR_1) {
  VAR_12 = VAR_8->rport;
  FUNC_0(VAR_12 != ((void*)0));
  goto update_role;
 }

 VAR_8->rport = FUNC_7(VAR_10, 0, &VAR_11);
 if (!VAR_8->rport) {
  FUNC_2(VAR_9, "Failed to register rport = 0x%x.\n",
     VAR_8->nport_id);
  return;
 }

 VAR_9->num_reg_rnodes++;
 VAR_12 = VAR_8->rport;
 FUNC_10(VAR_10->host_lock);
 *((struct csio_rnode **)VAR_12->dd_data) = VAR_8;
 FUNC_11(VAR_10->host_lock);

 VAR_13 = &VAR_8->rn_sparm;
 VAR_12->maxframe_size = FUNC_9(VAR_13->csp.sp_bb_data);
 if (FUNC_9(VAR_13->clsp[2].cp_class) & VAR_4)
  VAR_12->supported_classes = VAR_2;
 else
  VAR_12->supported_classes = VAR_3;
update_role:
 if (VAR_8->role & VAR_0)
  VAR_11.roles |= VAR_5;
 if (VAR_8->role & VAR_1)
  VAR_11.roles |= VAR_6;

 if (VAR_11.roles != VAR_7)
  FUNC_8(VAR_12, VAR_11.roles);

 VAR_8->scsi_id = VAR_12->scsi_target_id;

 FUNC_1(VAR_9, "Remote port x%x role 0x%x registered\n",
  VAR_8->nport_id, VAR_11.roles);
}
