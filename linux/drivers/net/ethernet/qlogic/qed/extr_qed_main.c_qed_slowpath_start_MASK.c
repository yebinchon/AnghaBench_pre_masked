
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int tunn_info ;
struct TYPE_16__ {int b_mode_enabled; void* tun_cls; } ;
struct TYPE_15__ {int b_mode_enabled; void* tun_cls; } ;
struct TYPE_14__ {int b_mode_enabled; void* tun_cls; } ;
struct TYPE_13__ {int b_mode_enabled; void* tun_cls; } ;
struct TYPE_12__ {int b_mode_enabled; void* tun_cls; } ;
struct qed_tunnel_info {int b_hw_start; int allow_npar_tx_switch; int avoid_eng_reset; struct qed_tunnel_info* p_drv_load_params; int override_force_load; int mfw_timeout_val; int is_crash_kernel; int const* bin_fw_data; int int_mode; struct qed_tunnel_info* p_tunn; TYPE_6__ ip_geneve; TYPE_5__ l2_geneve; TYPE_4__ ip_gre; TYPE_3__ l2_gre; TYPE_2__ vxlan; } ;
struct qed_slowpath_params {int drv_major; int drv_minor; int drv_rev; int drv_eng; int name; int int_mode; } ;
struct qed_ptt {int dummy; } ;
struct qed_mcp_drv_version {int version; int name; } ;
struct qed_hwfn {struct qed_ptt* p_arfs_ptt; int p_main_ptt; scalar_t__ using_ll2; } ;
struct qed_hw_init_params {int b_hw_start; int allow_npar_tx_switch; int avoid_eng_reset; struct qed_hw_init_params* p_drv_load_params; int override_force_load; int mfw_timeout_val; int is_crash_kernel; int const* bin_fw_data; int int_mode; struct qed_hw_init_params* p_tunn; TYPE_6__ ip_geneve; TYPE_5__ l2_geneve; TYPE_4__ ip_gre; TYPE_3__ l2_gre; TYPE_2__ vxlan; } ;
struct qed_drv_load_params {int b_hw_start; int allow_npar_tx_switch; int avoid_eng_reset; struct qed_drv_load_params* p_drv_load_params; int override_force_load; int mfw_timeout_val; int is_crash_kernel; int const* bin_fw_data; int int_mode; struct qed_drv_load_params* p_tunn; TYPE_6__ ip_geneve; TYPE_5__ l2_geneve; TYPE_4__ ip_gre; TYPE_3__ l2_gre; TYPE_2__ vxlan; } ;
struct TYPE_17__ {int int_mode; } ;
struct TYPE_18__ {TYPE_7__ out; } ;
struct qed_dev {int num_hwfns; int tunn_feature_mask; TYPE_9__* firmware; TYPE_8__ int_params; int rx_coalesce_usecs; TYPE_1__* pdev; } ;
typedef int hw_init_params ;
typedef int drv_load_params ;
struct TYPE_19__ {int * data; } ;
struct TYPE_11__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct qed_dev*,char*) ;
 int FUNC_2 (struct qed_dev*,char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (struct qed_dev*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct qed_hwfn* FUNC_4 (struct qed_dev*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int FUNC_5 () ;
 int FUNC_6 (struct qed_tunnel_info*,int ,int) ;
 int FUNC_7 (struct qed_dev*) ;
 int FUNC_8 (struct qed_dev*) ;
 int FUNC_9 (struct qed_dev*) ;
 int FUNC_10 (struct qed_dev*) ;
 int FUNC_11 (struct qed_dev*,struct qed_tunnel_info*) ;
 int FUNC_12 (struct qed_dev*) ;
 int FUNC_13 (struct qed_dev*) ;
 scalar_t__ FUNC_14 (struct qed_dev*) ;
 int FUNC_15 (struct qed_dev*,int) ;
 int FUNC_16 (struct qed_dev*) ;
 int FUNC_17 (struct qed_dev*) ;
 int FUNC_18 (struct qed_hwfn*,int ,struct qed_mcp_drv_version*) ;
 int FUNC_19 (struct qed_dev*) ;
 struct qed_ptt* FUNC_20 (struct qed_hwfn*) ;
 int FUNC_21 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_22 (struct qed_dev*) ;
 int FUNC_23 (struct qed_dev*) ;
 int FUNC_24 (struct qed_dev*) ;
 int FUNC_25 (struct qed_dev*,int ) ;
 int FUNC_26 (struct qed_dev*) ;
 scalar_t__ FUNC_27 (struct qed_dev*) ;
 int FUNC_28 (struct qed_dev*) ;
 int FUNC_29 (TYPE_9__*) ;
 int FUNC_30 (TYPE_9__**,int ,int *) ;
 int FUNC_31 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_32(struct qed_dev *VAR_12,
         struct qed_slowpath_params *VAR_13)
{
 struct qed_drv_load_params VAR_14;
 struct qed_hw_init_params VAR_15;
 struct qed_mcp_drv_version VAR_16;
 struct qed_tunnel_info VAR_17;
 const u8 *VAR_18 = ((void*)0);
 struct qed_hwfn *VAR_19;
 struct qed_ptt *VAR_20;
 int VAR_21 = -VAR_0;

 if (FUNC_14(VAR_12))
  goto err;

 if (FUNC_27(VAR_12))
  goto err;

 if (FUNC_3(VAR_12)) {
  VAR_21 = FUNC_30(&VAR_12->firmware, VAR_3,
          &VAR_12->pdev->dev);
  if (VAR_21) {
   FUNC_2(VAR_12,
      "Failed to find fw file - /lib/firmware/%s\n",
      VAR_3);
   goto err;
  }

  if (VAR_12->num_hwfns == 1) {
   VAR_20 = FUNC_20(FUNC_4(VAR_12));
   if (VAR_20) {
    FUNC_4(VAR_12)->p_arfs_ptt = VAR_20;
   } else {
    FUNC_2(VAR_12,
       "Failed to acquire PTT for aRFS\n");
    goto err;
   }
  }
 }

 VAR_12->rx_coalesce_usecs = VAR_2;
 VAR_21 = FUNC_19(VAR_12);
 if (VAR_21)
  goto err;

 if (FUNC_3(VAR_12))
  VAR_21 = FUNC_25(VAR_12, VAR_13->int_mode);
 else
  VAR_21 = FUNC_26(VAR_12);
 if (VAR_21)
  goto err1;

 if (FUNC_3(VAR_12)) {

  VAR_21 = FUNC_7(VAR_12);
  if (VAR_21)
   goto err2;


  VAR_18 = VAR_12->firmware->data + sizeof(u32);

  FUNC_8(VAR_12);
 }


 FUNC_6(&VAR_15, 0, sizeof(VAR_15));
 FUNC_6(&VAR_17, 0, sizeof(VAR_17));
 VAR_17.vxlan.b_mode_enabled = 1;
 VAR_17.l2_gre.b_mode_enabled = 1;
 VAR_17.ip_gre.b_mode_enabled = 1;
 VAR_17.l2_geneve.b_mode_enabled = 1;
 VAR_17.ip_geneve.b_mode_enabled = 1;
 VAR_17.vxlan.tun_cls = VAR_11;
 VAR_17.l2_gre.tun_cls = VAR_11;
 VAR_17.ip_gre.tun_cls = VAR_11;
 VAR_17.l2_geneve.tun_cls = VAR_11;
 VAR_17.ip_geneve.tun_cls = VAR_11;
 VAR_15.p_tunn = &VAR_17;
 VAR_15.b_hw_start = 1;
 VAR_15.int_mode = VAR_12->int_params.out.int_mode;
 VAR_15.allow_npar_tx_switch = 1;
 VAR_15.bin_fw_data = VAR_18;

 FUNC_6(&VAR_14, 0, sizeof(VAR_14));
 VAR_14.is_crash_kernel = FUNC_5();
 VAR_14.mfw_timeout_val = VAR_4;
 VAR_14.avoid_eng_reset = 0;
 VAR_14.override_force_load = VAR_10;
 VAR_15.p_drv_load_params = &VAR_14;

 VAR_21 = FUNC_11(VAR_12, &VAR_15);
 if (VAR_21)
  goto err2;

 FUNC_1(VAR_12,
  "HW initialization and function start completed successfully\n");

 if (FUNC_3(VAR_12)) {
  VAR_12->tunn_feature_mask = (FUNC_0(VAR_9) |
        FUNC_0(VAR_7) |
        FUNC_0(VAR_5) |
        FUNC_0(VAR_8) |
        FUNC_0(VAR_6));
 }


 if (FUNC_4(VAR_12)->using_ll2) {
  VAR_21 = FUNC_16(VAR_12);
  if (VAR_21)
   goto err3;
 }
 if (FUNC_3(VAR_12)) {
  VAR_19 = FUNC_4(VAR_12);
  VAR_16.version = (VAR_13->drv_major << 24) |
          (VAR_13->drv_minor << 16) |
          (VAR_13->drv_rev << 8) |
          (VAR_13->drv_eng);
  FUNC_31(VAR_16.name, VAR_13->name,
   VAR_1 - 4);
  VAR_21 = FUNC_18(VAR_19, VAR_19->p_main_ptt,
           &VAR_16);
  if (VAR_21) {
   FUNC_2(VAR_12, "Failed sending drv version command\n");
   goto err4;
  }
 }

 FUNC_23(VAR_12);

 return 0;

err4:
 FUNC_17(VAR_12);
err3:
 FUNC_12(VAR_12);
err2:
 FUNC_13(VAR_12);
 if (FUNC_3(VAR_12))
  FUNC_24(VAR_12);
 FUNC_10(VAR_12);
 FUNC_9(VAR_12);
err1:
 FUNC_22(VAR_12);
err:
 if (FUNC_3(VAR_12))
  FUNC_29(VAR_12->firmware);

 if (FUNC_3(VAR_12) && (VAR_12->num_hwfns == 1) &&
     FUNC_4(VAR_12)->p_arfs_ptt)
  FUNC_21(FUNC_4(VAR_12),
    FUNC_4(VAR_12)->p_arfs_ptt);

 FUNC_15(VAR_12, 0);

 FUNC_28(VAR_12);

 return VAR_21;
}
