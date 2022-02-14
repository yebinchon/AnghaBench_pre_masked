
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct se_session {struct se_node_acl* se_node_acl; } ;
struct se_node_acl {char* initiatorname; TYPE_1__* se_tpg; } ;
struct se_device {struct se_session* reservation_holder; } ;
typedef int ssize_t ;
struct TYPE_4__ {char* fabric_name; } ;
struct TYPE_3__ {TYPE_2__* se_tpg_tfo; } ;


 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_1(struct se_device *VAR_0,
  char *VAR_1)
{
 struct se_session *VAR_2 = VAR_0->reservation_holder;
 struct se_node_acl *VAR_3;
 ssize_t VAR_4;

 if (VAR_2) {
  VAR_3 = VAR_2->se_node_acl;
  VAR_4 = FUNC_0(VAR_1,
         "SPC-2 Reservation: %s Initiator: %s\n",
         VAR_3->se_tpg->se_tpg_tfo->fabric_name,
         VAR_3->initiatorname);
 } else {
  VAR_4 = FUNC_0(VAR_1, "No SPC-2 Reservation holder\n");
 }
 return VAR_4;
}
