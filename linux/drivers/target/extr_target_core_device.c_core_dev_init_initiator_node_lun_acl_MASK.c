
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct se_portal_group {TYPE_1__* se_tpg_tfo; } ;
struct se_node_acl {int initiatorname; } ;
struct se_lun_acl {struct se_node_acl* se_lun_nacl; int mapped_lun; } ;
struct TYPE_2__ {int fabric_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct se_lun_acl* FUNC_0 (int,int ) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (int ) ;

struct se_lun_acl *FUNC_3(
 struct se_portal_group *VAR_4,
 struct se_node_acl *VAR_5,
 u64 VAR_6,
 int *VAR_7)
{
 struct se_lun_acl *VAR_8;

 if (FUNC_2(VAR_5->initiatorname) >= VAR_3) {
  FUNC_1("%s InitiatorName exceeds maximum size.\n",
   VAR_4->se_tpg_tfo->fabric_name);
  *VAR_7 = -VAR_1;
  return ((void*)0);
 }
 VAR_8 = FUNC_0(sizeof(struct se_lun_acl), VAR_2);
 if (!VAR_8) {
  FUNC_1("Unable to allocate memory for struct se_lun_acl.\n");
  *VAR_7 = -VAR_0;
  return ((void*)0);
 }

 VAR_8->mapped_lun = VAR_6;
 VAR_8->se_lun_nacl = VAR_5;

 return VAR_8;
}
