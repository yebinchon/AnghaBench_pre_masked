
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhost_scsi_tpg {scalar_t__ tv_tpg_port_count; scalar_t__ tv_tpg_vhost_count; int tv_tpg_mutex; struct vhost_scsi_nexus* tpg_nexus; int tport; } ;
struct vhost_scsi_nexus {struct se_session* tvn_se_sess; } ;
struct se_session {TYPE_1__* se_node_acl; } ;
struct TYPE_2__ {int initiatorname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vhost_scsi_nexus*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (char*,scalar_t__) ;
 int FUNC_5 (struct se_session*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct se_session*) ;

__attribute__((used)) static int FUNC_8(struct vhost_scsi_tpg *VAR_2)
{
 struct se_session *VAR_3;
 struct vhost_scsi_nexus *VAR_4;

 FUNC_1(&VAR_2->tv_tpg_mutex);
 VAR_4 = VAR_2->tpg_nexus;
 if (!VAR_4) {
  FUNC_2(&VAR_2->tv_tpg_mutex);
  return -VAR_1;
 }

 VAR_3 = VAR_4->tvn_se_sess;
 if (!VAR_3) {
  FUNC_2(&VAR_2->tv_tpg_mutex);
  return -VAR_1;
 }

 if (VAR_2->tv_tpg_port_count != 0) {
  FUNC_2(&VAR_2->tv_tpg_mutex);
  FUNC_4("Unable to remove TCM_vhost I_T Nexus with"
   " active TPG port count: %d\n",
   VAR_2->tv_tpg_port_count);
  return -VAR_0;
 }

 if (VAR_2->tv_tpg_vhost_count != 0) {
  FUNC_2(&VAR_2->tv_tpg_mutex);
  FUNC_4("Unable to remove TCM_vhost I_T Nexus with"
   " active TPG vhost count: %d\n",
   VAR_2->tv_tpg_vhost_count);
  return -VAR_0;
 }

 FUNC_3("TCM_vhost_ConfigFS: Removing I_T Nexus to emulated"
  " %s Initiator Port: %s\n", FUNC_6(VAR_2->tport),
  VAR_4->tvn_se_sess->se_node_acl->initiatorname);

 FUNC_7(VAR_3);



 FUNC_5(VAR_3);
 VAR_2->tpg_nexus = ((void*)0);
 FUNC_2(&VAR_2->tv_tpg_mutex);

 FUNC_0(VAR_4);
 return 0;
}
