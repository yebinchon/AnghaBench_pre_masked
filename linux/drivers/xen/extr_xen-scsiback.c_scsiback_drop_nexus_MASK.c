
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_session {TYPE_1__* se_node_acl; } ;
struct scsiback_tpg {scalar_t__ tv_tpg_port_count; scalar_t__ tv_tpg_fe_count; int tv_tpg_mutex; struct scsiback_nexus* tpg_nexus; int tport; } ;
struct scsiback_nexus {struct se_session* tvn_se_sess; } ;
struct TYPE_2__ {int initiatorname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scsiback_nexus*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (char*,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct se_session*) ;

__attribute__((used)) static int FUNC_7(struct scsiback_tpg *VAR_2)
{
 struct se_session *VAR_3;
 struct scsiback_nexus *VAR_4;

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
  FUNC_4("Unable to remove xen-pvscsi I_T Nexus with active TPG port count: %d\n",
   VAR_2->tv_tpg_port_count);
  return -VAR_0;
 }

 if (VAR_2->tv_tpg_fe_count != 0) {
  FUNC_2(&VAR_2->tv_tpg_mutex);
  FUNC_4("Unable to remove xen-pvscsi I_T Nexus with active TPG frontend count: %d\n",
   VAR_2->tv_tpg_fe_count);
  return -VAR_0;
 }

 FUNC_3("Removing I_T Nexus to emulated %s Initiator Port: %s\n",
  FUNC_5(VAR_2->tport),
  VAR_4->tvn_se_sess->se_node_acl->initiatorname);




 FUNC_6(VAR_3);
 VAR_2->tpg_nexus = ((void*)0);
 FUNC_2(&VAR_2->tv_tpg_mutex);

 FUNC_0(VAR_4);
 return 0;
}
