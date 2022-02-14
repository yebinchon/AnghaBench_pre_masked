
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct se_portal_group {TYPE_1__* se_tpg_tfo; } ;
struct se_lun_acl {int mapped_lun; TYPE_2__* se_lun_nacl; } ;
struct TYPE_4__ {int initiatorname; } ;
struct TYPE_3__ {int fabric_name; int (* tpg_get_tag ) (struct se_portal_group*) ;} ;


 int FUNC_0 (struct se_lun_acl*) ;
 int FUNC_1 (char*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct se_portal_group*) ;

void FUNC_3(
 struct se_portal_group *VAR_0,
 struct se_lun_acl *VAR_1)
{
 FUNC_1("%s_TPG[%hu] - Freeing ACL for %s InitiatorNode: %s"
  " Mapped LUN: %llu\n", VAR_0->se_tpg_tfo->fabric_name,
  VAR_0->se_tpg_tfo->tpg_get_tag(VAR_0),
  VAR_0->se_tpg_tfo->fabric_name,
  VAR_1->se_lun_nacl->initiatorname, VAR_1->mapped_lun);

 FUNC_0(VAR_1);
}
