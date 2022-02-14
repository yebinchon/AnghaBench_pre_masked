
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct vf_stop_ramrod_data {int vf_id; } ;
struct TYPE_2__ {struct vf_stop_ramrod_data vf_stop; } ;
struct qed_spq_entry {TYPE_1__ ramrod; } ;
struct qed_sp_init_data {int comp_mode; int opaque_fid; int cid; } ;
struct qed_hwfn {int dummy; } ;
typedef int init_data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_3 (struct qed_hwfn*) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;

__attribute__((used)) static int FUNC_5(struct qed_hwfn *VAR_5,
     u32 VAR_6, u16 VAR_7)
{
 struct vf_stop_ramrod_data *VAR_8 = ((void*)0);
 struct qed_spq_entry *VAR_9 = ((void*)0);
 struct qed_sp_init_data VAR_10;
 int VAR_11 = -VAR_1;


 FUNC_1(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.cid = FUNC_3(VAR_5);
 VAR_10.opaque_fid = VAR_7;
 VAR_10.comp_mode = VAR_4;

 VAR_11 = FUNC_2(VAR_5, &VAR_9,
     VAR_0,
     VAR_2, &VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_8 = &VAR_9->ramrod.vf_stop;

 VAR_8->vf_id = FUNC_0(VAR_6, VAR_3);

 return FUNC_4(VAR_5, VAR_9, ((void*)0));
}
