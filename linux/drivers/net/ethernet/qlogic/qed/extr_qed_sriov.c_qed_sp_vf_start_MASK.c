
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_10__ {scalar_t__* minor_ver_arr; int * major_ver_arr; } ;
struct vf_start_ramrod_data {TYPE_5__ hsi_fp_ver; int personality; int opaque_fid; int vf_id; } ;
struct TYPE_8__ {scalar_t__ eth_fp_hsi_minor; } ;
struct TYPE_9__ {TYPE_3__ vfdev_info; } ;
struct qed_vf_info {int abs_vf_id; TYPE_4__ acquire; int opaque_fid; int concrete_fid; } ;
struct TYPE_6__ {struct vf_start_ramrod_data vf_start; } ;
struct qed_spq_entry {TYPE_1__ ramrod; } ;
struct qed_sp_init_data {int comp_mode; int opaque_fid; int cid; } ;
struct TYPE_7__ {int personality; } ;
struct qed_hwfn {TYPE_2__ hw_info; } ;
typedef int init_data ;


 int VAR_0 ;
 int FUNC_0 (struct qed_hwfn*,char*,int) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,int ,int ,scalar_t__,...) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;


 int VAR_11 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_spq_entry*) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_7 (struct qed_hwfn*) ;
 int FUNC_8 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;

__attribute__((used)) static int FUNC_9(struct qed_hwfn *VAR_12, struct qed_vf_info *VAR_13)
{
 struct vf_start_ramrod_data *VAR_14 = ((void*)0);
 struct qed_spq_entry *VAR_15 = ((void*)0);
 struct qed_sp_init_data VAR_16;
 int VAR_17 = -VAR_1;
 u8 VAR_18;


 FUNC_4(&VAR_16, 0, sizeof(VAR_16));
 VAR_16.cid = FUNC_7(VAR_12);
 VAR_16.opaque_fid = VAR_13->opaque_fid;
 VAR_16.comp_mode = VAR_11;

 VAR_17 = FUNC_6(VAR_12, &VAR_15,
     VAR_0,
     VAR_8, &VAR_16);
 if (VAR_17)
  return VAR_17;

 VAR_14 = &VAR_15->ramrod.vf_start;

 VAR_14->vf_id = FUNC_2(VAR_13->concrete_fid, VAR_9);
 VAR_14->opaque_fid = FUNC_3(VAR_13->opaque_fid);

 switch (VAR_12->hw_info.personality) {
 case 129:
  VAR_14->personality = VAR_6;
  break;
 case 128:
  VAR_14->personality = VAR_7;
  break;
 default:
  FUNC_0(VAR_12, "Unknown VF personality %d\n",
     VAR_12->hw_info.personality);
  FUNC_5(VAR_12, VAR_15);
  return -VAR_1;
 }

 VAR_18 = VAR_13->acquire.vfdev_info.eth_fp_hsi_minor;
 if (VAR_18 > VAR_3 &&
     VAR_18 != VAR_4) {
  FUNC_1(VAR_12,
      VAR_10,
      "VF [%d] - Requested fp hsi %02x.%02x which is slightly newer than PF's %02x.%02x; Configuring PFs version\n",
      VAR_13->abs_vf_id,
      VAR_2,
      VAR_18, VAR_2, VAR_3);
  VAR_18 = VAR_3;
 }

 VAR_14->hsi_fp_ver.major_ver_arr[VAR_5] = VAR_2;
 VAR_14->hsi_fp_ver.minor_ver_arr[VAR_5] = VAR_18;

 FUNC_1(VAR_12, VAR_10,
     "VF[%d] - Starting using HSI %02x.%02x\n",
     VAR_13->abs_vf_id, VAR_2, VAR_18);

 return FUNC_8(VAR_12, VAR_15, ((void*)0));
}
