
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iscsi_tpg_np {int * tpg; int * tpg_np; } ;
struct iscsi_portal_group {int tpgt; TYPE_1__* tpg_tiqn; } ;
struct iscsi_np {TYPE_2__* np_transport; int np_sockaddr; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int tiqn; } ;


 int FUNC_0 (struct iscsi_tpg_np*,struct iscsi_portal_group*,int) ;
 int FUNC_1 (struct iscsi_np*) ;
 int FUNC_2 (struct iscsi_tpg_np*) ;
 int FUNC_3 (char*,int ,int *,int ,int ) ;

__attribute__((used)) static int FUNC_4(
 struct iscsi_tpg_np *VAR_0,
 struct iscsi_portal_group *VAR_1,
 struct iscsi_np *VAR_2)
{
 FUNC_0(VAR_0, VAR_1, 1);

 FUNC_3("CORE[%s] - Removed Network Portal: %pISpc,%hu on %s\n",
  VAR_1->tpg_tiqn->tiqn, &VAR_2->np_sockaddr, VAR_1->tpgt,
  VAR_2->np_transport->name);

 VAR_0->tpg_np = ((void*)0);
 VAR_0->tpg = ((void*)0);
 FUNC_2(VAR_0);



 return FUNC_1(VAR_2);
}
