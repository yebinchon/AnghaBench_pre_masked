
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int lock; } ;
struct TYPE_5__ {int lock; } ;
struct TYPE_4__ {int lock; } ;
struct iscsi_tiqn {int tiqn_index; int tiqn; int tiqn_list; int tiqn_state; TYPE_3__ logout_stats; TYPE_2__ login_stats; TYPE_1__ sess_err_stats; int tiqn_tpg_lock; int tiqn_state_lock; int tiqn_tpg_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iscsi_tiqn* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int *,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct iscsi_tiqn*) ;
 struct iscsi_tiqn* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,char*,unsigned char*) ;
 scalar_t__ FUNC_14 (unsigned char*) ;
 int VAR_7 ;
 int VAR_8 ;

struct iscsi_tiqn *FUNC_15(unsigned char *VAR_9)
{
 struct iscsi_tiqn *VAR_10 = ((void*)0);
 int VAR_11;

 if (FUNC_14(VAR_9) >= VAR_4) {
  FUNC_9("Target IQN exceeds %d bytes\n",
    VAR_4);
  return FUNC_0(-VAR_0);
 }

 VAR_10 = FUNC_6(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return FUNC_0(-VAR_1);

 FUNC_13(VAR_10->tiqn, "%s", VAR_9);
 FUNC_1(&VAR_10->tiqn_list);
 FUNC_1(&VAR_10->tiqn_tpg_list);
 FUNC_11(&VAR_10->tiqn_state_lock);
 FUNC_11(&VAR_10->tiqn_tpg_lock);
 FUNC_11(&VAR_10->sess_err_stats.lock);
 FUNC_11(&VAR_10->login_stats.lock);
 FUNC_11(&VAR_10->logout_stats.lock);

 VAR_10->tiqn_state = VAR_5;

 FUNC_3(VAR_2);
 FUNC_10(&VAR_8);

 VAR_11 = FUNC_2(&VAR_7, ((void*)0), 0, 0, VAR_3);
 if (VAR_11 < 0) {
  FUNC_9("idr_alloc() failed for tiqn->tiqn_index\n");
  FUNC_12(&VAR_8);
  FUNC_4();
  FUNC_5(VAR_10);
  return FUNC_0(VAR_11);
 }
 VAR_10->tiqn_index = VAR_11;
 FUNC_7(&VAR_10->tiqn_list, &VAR_6);

 FUNC_12(&VAR_8);
 FUNC_4();

 FUNC_8("CORE[0] - Added iSCSI Target IQN: %s\n", VAR_10->tiqn);

 return VAR_10;

}
