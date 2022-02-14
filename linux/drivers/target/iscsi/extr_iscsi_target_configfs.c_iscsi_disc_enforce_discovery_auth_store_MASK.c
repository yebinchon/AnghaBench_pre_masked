
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int authentication; } ;
struct iscsi_portal_group {TYPE_1__ tpg_attrib; int param_list; } ;
struct iscsi_param {int dummy; } ;
struct config_item {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_6__ {int enforce_discovery_auth; } ;
struct TYPE_7__ {TYPE_2__ node_auth; } ;
struct TYPE_8__ {TYPE_3__ discovery_acl; struct iscsi_portal_group* discovery_tpg; } ;


 int VAR_0 ;
 char* VAR_1 ;
 size_t VAR_2 ;
 struct iscsi_param* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct iscsi_param*,char*) ;
 TYPE_4__* VAR_3 ;
 int FUNC_2 (char const*,int ,int*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static ssize_t FUNC_5(struct config_item *VAR_4,
  const char *VAR_5, size_t VAR_6)
{
 struct iscsi_param *VAR_7;
 struct iscsi_portal_group *VAR_8 = VAR_3->discovery_tpg;
 u32 VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_5, 0, &VAR_9);
 if (VAR_10)
  return -VAR_2;
 if ((VAR_9 != 1) && (VAR_9 != 0)) {
  FUNC_4("Illegal value for enforce_discovery_auth:"
    " %u\n", VAR_9);
  return -VAR_2;
 }

 if (!VAR_8) {
  FUNC_4("iscsit_global->discovery_tpg is NULL\n");
  return -VAR_2;
 }

 VAR_7 = FUNC_0(VAR_0,
    VAR_8->param_list);
 if (!VAR_7)
  return -VAR_2;

 if (VAR_9) {



  if (FUNC_1(VAR_7, VAR_1) < 0)
   return -VAR_2;

  VAR_8->tpg_attrib.authentication = 1;
  VAR_3->discovery_acl.node_auth.enforce_discovery_auth = 1;
  FUNC_3("LIO-CORE[0] Successfully enabled"
   " authentication enforcement for iSCSI"
   " Discovery TPG\n");
 } else {



  if (FUNC_1(VAR_7, "CHAP,None") < 0)
   return -VAR_2;

  VAR_8->tpg_attrib.authentication = 0;
  VAR_3->discovery_acl.node_auth.enforce_discovery_auth = 0;
  FUNC_3("LIO-CORE[0] Successfully disabled"
   " authentication enforcement for iSCSI"
   " Discovery TPG\n");
 }

 return VAR_6;
}
