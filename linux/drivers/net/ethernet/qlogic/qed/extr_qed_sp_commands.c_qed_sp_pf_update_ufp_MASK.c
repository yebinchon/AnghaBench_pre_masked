
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int update_enable_stag_pri_change; int enable_stag_pri_change; } ;
struct TYPE_8__ {TYPE_3__ pf_update; } ;
struct qed_spq_entry {TYPE_4__ ramrod; } ;
struct qed_sp_init_data {int comp_mode; int opaque_fid; int cid; } ;
struct TYPE_6__ {scalar_t__ pri_type; } ;
struct TYPE_5__ {int opaque_fid; } ;
struct qed_hwfn {TYPE_2__ ufp_info; TYPE_1__ hw_info; } ;
typedef int init_data ;


 int VAR_0 ;
 int FUNC_0 (struct qed_hwfn*,char*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_3 (struct qed_hwfn*) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;

int FUNC_5(struct qed_hwfn *VAR_7)
{
 struct qed_spq_entry *VAR_8 = ((void*)0);
 struct qed_sp_init_data VAR_9;
 int VAR_10 = -VAR_2;

 if (VAR_7->ufp_info.pri_type == VAR_6) {
  FUNC_0(VAR_7, "Invalid priority type %d\n",
   VAR_7->ufp_info.pri_type);
  return -VAR_1;
 }


 FUNC_1(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.cid = FUNC_3(VAR_7);
 VAR_9.opaque_fid = VAR_7->hw_info.opaque_fid;
 VAR_9.comp_mode = VAR_4;

 VAR_10 = FUNC_2(VAR_7, &VAR_8,
     VAR_0, VAR_3,
     &VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_8->ramrod.pf_update.update_enable_stag_pri_change = 1;
 if (VAR_7->ufp_info.pri_type == VAR_5)
  VAR_8->ramrod.pf_update.enable_stag_pri_change = 1;
 else
  VAR_8->ramrod.pf_update.enable_stag_pri_change = 0;

 return FUNC_4(VAR_7, VAR_8, ((void*)0));
}
