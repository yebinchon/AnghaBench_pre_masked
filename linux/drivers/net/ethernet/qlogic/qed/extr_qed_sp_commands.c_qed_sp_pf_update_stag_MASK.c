
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_8__ {int update_mf_vlan_flag; int mf_vlan; } ;
struct TYPE_9__ {TYPE_3__ pf_update; } ;
struct qed_spq_entry {TYPE_4__ ramrod; } ;
struct qed_sp_init_data {int comp_mode; int opaque_fid; int cid; } ;
struct TYPE_10__ {scalar_t__ tc; } ;
struct TYPE_6__ {int ovlan; int opaque_fid; } ;
struct qed_hwfn {TYPE_5__ ufp_info; TYPE_2__* cdev; TYPE_1__ hw_info; } ;
typedef int init_data ;
struct TYPE_7__ {int mf_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_3 (struct qed_hwfn*) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

int FUNC_6(struct qed_hwfn *VAR_4)
{
 struct qed_spq_entry *VAR_5 = ((void*)0);
 struct qed_sp_init_data VAR_6;
 int VAR_7;


 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.cid = FUNC_3(VAR_4);
 VAR_6.opaque_fid = VAR_4->hw_info.opaque_fid;
 VAR_6.comp_mode = VAR_3;

 VAR_7 = FUNC_2(VAR_4, &VAR_5,
     VAR_0, VAR_1,
     &VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_5->ramrod.pf_update.update_mf_vlan_flag = 1;
 VAR_5->ramrod.pf_update.mf_vlan = FUNC_0(VAR_4->hw_info.ovlan);
 if (FUNC_5(VAR_2, &VAR_4->cdev->mf_bits))
  VAR_5->ramrod.pf_update.mf_vlan |=
   FUNC_0(((u16)VAR_4->ufp_info.tc << 13));

 return FUNC_4(VAR_4, VAR_5, ((void*)0));
}
