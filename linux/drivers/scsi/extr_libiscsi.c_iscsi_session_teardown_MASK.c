
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct module {int dummy; } ;
struct iscsi_session {int discovery_parent_type; int portal_type; int ifacename; int boot_target; int boot_nic; int boot_root; int initiatorname; int targetalias; int targetname; int username_in; int username; int password_in; int password; int cmdpool; struct Scsi_Host* host; } ;
struct iscsi_cls_session {TYPE_1__* transport; struct iscsi_session* dd_data; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {struct module* owner; } ;


 int FUNC_0 (struct iscsi_cls_session*) ;
 int FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct iscsi_cls_session*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct module*) ;

void FUNC_6(struct iscsi_cls_session *VAR_0)
{
 struct iscsi_session *VAR_1 = VAR_0->dd_data;
 struct module *VAR_2 = VAR_0->transport->owner;
 struct Scsi_Host *VAR_3 = VAR_1->host;

 FUNC_2(&VAR_1->cmdpool);

 FUNC_3(VAR_0);

 FUNC_4(VAR_1->password);
 FUNC_4(VAR_1->password_in);
 FUNC_4(VAR_1->username);
 FUNC_4(VAR_1->username_in);
 FUNC_4(VAR_1->targetname);
 FUNC_4(VAR_1->targetalias);
 FUNC_4(VAR_1->initiatorname);
 FUNC_4(VAR_1->boot_root);
 FUNC_4(VAR_1->boot_nic);
 FUNC_4(VAR_1->boot_target);
 FUNC_4(VAR_1->ifacename);
 FUNC_4(VAR_1->portal_type);
 FUNC_4(VAR_1->discovery_parent_type);

 FUNC_0(VAR_0);

 FUNC_1(VAR_3);
 FUNC_5(VAR_2);
}
