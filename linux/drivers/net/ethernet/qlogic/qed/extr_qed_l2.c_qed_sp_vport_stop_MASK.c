
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct vport_stop_ramrod_data {int vport_id; } ;
struct TYPE_2__ {struct vport_stop_ramrod_data vport_stop; } ;
struct qed_spq_entry {TYPE_1__ ramrod; } ;
struct qed_sp_init_data {int comp_mode; int opaque_fid; int cid; } ;
struct qed_hwfn {int cdev; } ;
typedef int init_data ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_2 (struct qed_hwfn*,int ,int *) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_4 (struct qed_hwfn*) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;
 int FUNC_6 (struct qed_hwfn*) ;

int FUNC_7(struct qed_hwfn *VAR_3, u16 VAR_4, u8 VAR_5)
{
 struct vport_stop_ramrod_data *VAR_6;
 struct qed_sp_init_data VAR_7;
 struct qed_spq_entry *VAR_8;
 u8 VAR_9 = 0;
 int VAR_10;

 if (FUNC_0(VAR_3->cdev))
  return FUNC_6(VAR_3);

 VAR_10 = FUNC_2(VAR_3, VAR_5, &VAR_9);
 if (VAR_10)
  return VAR_10;

 FUNC_1(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.cid = FUNC_4(VAR_3);
 VAR_7.opaque_fid = VAR_4;
 VAR_7.comp_mode = VAR_2;

 VAR_10 = FUNC_3(VAR_3, &VAR_8,
     VAR_0,
     VAR_1, &VAR_7);
 if (VAR_10)
  return VAR_10;

 VAR_6 = &VAR_8->ramrod.vport_stop;
 VAR_6->vport_id = VAR_9;

 return FUNC_5(VAR_3, VAR_8, ((void*)0));
}
