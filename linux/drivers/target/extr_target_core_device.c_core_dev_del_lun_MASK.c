
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_portal_group {TYPE_1__* se_tpg_tfo; } ;
struct se_lun {int unpacked_lun; } ;
struct TYPE_2__ {int fabric_name; int (* tpg_get_tag ) (struct se_portal_group*) ;} ;


 int FUNC_0 (struct se_portal_group*,struct se_lun*) ;
 int FUNC_1 (char*,int ,int ,int ,int ) ;
 int FUNC_2 (struct se_portal_group*) ;

void FUNC_3(
 struct se_portal_group *VAR_0,
 struct se_lun *VAR_1)
{
 FUNC_1("%s_TPG[%u]_LUN[%llu] - Deactivating %s Logical Unit from"
  " device object\n", VAR_0->se_tpg_tfo->fabric_name,
  VAR_0->se_tpg_tfo->tpg_get_tag(VAR_0), VAR_1->unpacked_lun,
  VAR_0->se_tpg_tfo->fabric_name);

 FUNC_0(VAR_0, VAR_1);
}
