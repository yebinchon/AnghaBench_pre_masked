
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbg_tpg {int tpg_mutex; struct tcm_usbg_nexus* tpg_nexus; int tpg_port_count; } ;
struct tcm_usbg_nexus {struct se_session* tvn_se_sess; } ;
struct se_session {TYPE_1__* se_node_acl; } ;
struct TYPE_2__ {int initiatorname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct tcm_usbg_nexus*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (struct se_session*) ;

__attribute__((used)) static int FUNC_7(struct usbg_tpg *VAR_3)
{
 struct se_session *VAR_4;
 struct tcm_usbg_nexus *VAR_5;
 int VAR_6 = -VAR_0;

 FUNC_2(&VAR_3->tpg_mutex);
 VAR_5 = VAR_3->tpg_nexus;
 if (!VAR_5)
  goto out;

 VAR_4 = VAR_5->tvn_se_sess;
 if (!VAR_4)
  goto out;

 if (FUNC_0(&VAR_3->tpg_port_count)) {
  VAR_6 = -VAR_1;

  FUNC_5("Unable to remove Host I_T Nexus with active TPG port count: %d\n", FUNC_0(&VAR_3->tpg_port_count));

  goto out;
 }

 FUNC_4("Removing I_T Nexus to Initiator Port: %s\n",
   VAR_5->tvn_se_sess->se_node_acl->initiatorname);



 FUNC_6(VAR_4);
 VAR_3->tpg_nexus = ((void*)0);

 FUNC_1(VAR_5);
 VAR_6 = 0;
out:
 FUNC_3(&VAR_3->tpg_mutex);
 return VAR_6;
}
