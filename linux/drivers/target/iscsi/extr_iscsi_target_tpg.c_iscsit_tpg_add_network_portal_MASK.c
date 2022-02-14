
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct iscsi_tpg_np {int tpg_np_parent_lock; int tpg_np_parent_list; int tpg_np_child_list; struct iscsi_tpg_np* tpg_np_parent; int tpg_np_list; struct iscsi_portal_group* tpg; struct iscsi_np* tpg_np; int tpg_np_kref; int tpg_np_comp; } ;
struct iscsi_portal_group {int tpgt; TYPE_2__* tpg_tiqn; int tpg_np_lock; int num_tpg_nps; int tpg_gnp_list; } ;
struct iscsi_np {TYPE_1__* np_transport; int np_sockaddr; } ;
struct TYPE_4__ {int tiqn; int tiqn_num_tpg_nps; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iscsi_tpg_np* FUNC_0 (struct iscsi_np*) ;
 struct iscsi_tpg_np* FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct iscsi_np*) ;
 int FUNC_4 (int *) ;
 struct iscsi_np* FUNC_5 (struct sockaddr_storage*,int) ;
 scalar_t__ FUNC_6 (TYPE_2__*,struct sockaddr_storage*,int) ;
 int FUNC_7 (struct iscsi_tpg_np*) ;
 int FUNC_8 (int *) ;
 struct iscsi_tpg_np* FUNC_9 (int,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (char*,int ,int *,int ,int ) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

struct iscsi_tpg_np *FUNC_16(
 struct iscsi_portal_group *VAR_3,
 struct sockaddr_storage *VAR_4,
 struct iscsi_tpg_np *VAR_5,
 int VAR_6)
{
 struct iscsi_np *VAR_7;
 struct iscsi_tpg_np *VAR_8;

 if (!VAR_5) {
  if (FUNC_6(VAR_3->tpg_tiqn, VAR_4,
    VAR_6)) {
   FUNC_12("Network Portal: %pISc already exists on a"
    " different TPG on %s\n", VAR_4,
    VAR_3->tpg_tiqn->tiqn);
   return FUNC_1(-VAR_0);
  }
 }

 VAR_8 = FUNC_9(sizeof(struct iscsi_tpg_np), VAR_2);
 if (!VAR_8) {
  FUNC_12("Unable to allocate memory for"
    " struct iscsi_tpg_np.\n");
  return FUNC_1(-VAR_1);
 }

 VAR_7 = FUNC_5(VAR_4, VAR_6);
 if (FUNC_3(VAR_7)) {
  FUNC_7(VAR_8);
  return FUNC_0(VAR_7);
 }

 FUNC_2(&VAR_8->tpg_np_list);
 FUNC_2(&VAR_8->tpg_np_child_list);
 FUNC_2(&VAR_8->tpg_np_parent_list);
 FUNC_14(&VAR_8->tpg_np_parent_lock);
 FUNC_4(&VAR_8->tpg_np_comp);
 FUNC_8(&VAR_8->tpg_np_kref);
 VAR_8->tpg_np = VAR_7;
 VAR_8->tpg = VAR_3;

 FUNC_13(&VAR_3->tpg_np_lock);
 FUNC_10(&VAR_8->tpg_np_list, &VAR_3->tpg_gnp_list);
 VAR_3->num_tpg_nps++;
 if (VAR_3->tpg_tiqn)
  VAR_3->tpg_tiqn->tiqn_num_tpg_nps++;
 FUNC_15(&VAR_3->tpg_np_lock);

 if (VAR_5) {
  VAR_8->tpg_np_parent = VAR_5;
  FUNC_13(&VAR_5->tpg_np_parent_lock);
  FUNC_10(&VAR_8->tpg_np_child_list,
   &VAR_5->tpg_np_parent_list);
  FUNC_15(&VAR_5->tpg_np_parent_lock);
 }

 FUNC_11("CORE[%s] - Added Network Portal: %pISpc,%hu on %s\n",
  VAR_3->tpg_tiqn->tiqn, &VAR_7->np_sockaddr, VAR_3->tpgt,
  VAR_7->np_transport->name);

 return VAR_8;
}
