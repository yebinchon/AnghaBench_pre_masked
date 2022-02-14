
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbg_tpg {int tpg_mutex; int se_tpg; scalar_t__ tpg_nexus; } ;
struct usbg_cmd {int dummy; } ;
struct tcm_usbg_nexus {int tvn_se_sess; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct tcm_usbg_nexus*) ;
 struct tcm_usbg_nexus* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int *,int ,int,int ,char*,struct tcm_usbg_nexus*,int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_8(struct usbg_tpg *VAR_7, char *VAR_8)
{
 struct tcm_usbg_nexus *VAR_9;
 int VAR_10 = 0;

 FUNC_4(&VAR_7->tpg_mutex);
 if (VAR_7->tpg_nexus) {
  VAR_10 = -VAR_0;
  FUNC_6("tpg->tpg_nexus already exists\n");
  goto out_unlock;
 }

 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_2);
 if (!VAR_9) {
  VAR_10 = -VAR_1;
  goto out_unlock;
 }

 VAR_9->tvn_se_sess = FUNC_7(&VAR_7->se_tpg,
           VAR_5,
           sizeof(struct usbg_cmd),
           VAR_4, VAR_8,
           VAR_9, VAR_6);
 if (FUNC_0(VAR_9->tvn_se_sess)) {

  FUNC_6("core_tpg_check_initiator_node_acl() failed for %s\n", VAR_8);

  VAR_10 = FUNC_1(VAR_9->tvn_se_sess);
  FUNC_2(VAR_9);
 }

out_unlock:
 FUNC_5(&VAR_7->tpg_mutex);
 return VAR_10;
}
