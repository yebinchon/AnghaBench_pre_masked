
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_tpg_np {TYPE_1__* tpg_np; } ;
struct iscsi_portal_group {int dummy; } ;
struct TYPE_2__ {int enabled; } ;


 int FUNC_0 (TYPE_1__*,struct iscsi_tpg_np*,struct iscsi_portal_group*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(
 struct iscsi_tpg_np *VAR_0,
 struct iscsi_portal_group *VAR_1,
 bool VAR_2)
{
 if (!VAR_0->tpg_np) {
  FUNC_1("struct iscsi_tpg_np->tpg_np is NULL!\n");
  return;
 }

 if (VAR_2)
  VAR_0->tpg_np->enabled = 0;
 FUNC_0(VAR_0->tpg_np, VAR_0, VAR_1, VAR_2);
}
