
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qed_tunnel_info {int dummy; } ;
struct TYPE_6__ {int tunnel_config; } ;
struct TYPE_7__ {TYPE_2__ pf_update; } ;
struct qed_spq_entry {TYPE_3__ ramrod; } ;
struct qed_spq_comp_cb {int dummy; } ;
struct qed_sp_init_data {int comp_mode; struct qed_spq_comp_cb* p_comp_data; int opaque_fid; int cid; } ;
struct qed_ptt {int dummy; } ;
struct TYPE_5__ {int opaque_fid; } ;
struct qed_hwfn {TYPE_4__* cdev; TYPE_1__ hw_info; } ;
typedef int init_data ;
typedef enum spq_mode { ____Placeholder_spq_mode } spq_mode ;
struct TYPE_8__ {int tunnel; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int VAR_2 ;
 int FUNC_1 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int *) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_4 (struct qed_hwfn*) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_tunnel_info*,int *) ;
 int FUNC_7 (struct qed_hwfn*,struct qed_tunnel_info*) ;

int FUNC_8(struct qed_hwfn *VAR_3,
         struct qed_ptt *VAR_4,
         struct qed_tunnel_info *VAR_5,
         enum spq_mode VAR_6,
         struct qed_spq_comp_cb *VAR_7)
{
 struct qed_spq_entry *VAR_8 = ((void*)0);
 struct qed_sp_init_data VAR_9;
 int VAR_10 = -VAR_1;

 if (FUNC_0(VAR_3->cdev))
  return FUNC_7(VAR_3, VAR_5);

 if (!VAR_5)
  return -VAR_1;


 FUNC_1(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.cid = FUNC_4(VAR_3);
 VAR_9.opaque_fid = VAR_3->hw_info.opaque_fid;
 VAR_9.comp_mode = VAR_6;
 VAR_9.p_comp_data = VAR_7;

 VAR_10 = FUNC_3(VAR_3, &VAR_8,
     VAR_0, VAR_2,
     &VAR_9);
 if (VAR_10)
  return VAR_10;

 FUNC_6(VAR_3, VAR_5,
          &VAR_8->ramrod.pf_update.tunnel_config);

 VAR_10 = FUNC_5(VAR_3, VAR_8, ((void*)0));
 if (VAR_10)
  return VAR_10;

 FUNC_2(VAR_3, VAR_4, &VAR_3->cdev->tunnel);

 return VAR_10;
}
