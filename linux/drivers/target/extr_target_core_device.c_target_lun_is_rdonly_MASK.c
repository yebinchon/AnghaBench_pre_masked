
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_session {int se_node_acl; } ;
struct se_dev_entry {scalar_t__ lun_access_ro; } ;
struct se_cmd {int orig_fe_lun; struct se_session* se_sess; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 struct se_dev_entry* FUNC_2 (int ,int ) ;

bool FUNC_3(struct se_cmd *VAR_0)
{
 struct se_session *VAR_1 = VAR_0->se_sess;
 struct se_dev_entry *VAR_2;
 bool VAR_3;

 FUNC_0();
 VAR_2 = FUNC_2(VAR_1->se_node_acl, VAR_0->orig_fe_lun);
 VAR_3 = VAR_2 && VAR_2->lun_access_ro;
 FUNC_1();

 return VAR_3;
}
