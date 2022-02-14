
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct mlx4_profile {int num_mcg; } ;
struct TYPE_4__ {int inta_pin; } ;
struct mlx4_priv {TYPE_1__ eq_table; } ;
struct mlx4_init_hca_param {int log_uar_sz; int flags2; int hca_core_clock; int reserved_uars; int reserved_eqs; int max_eqs; scalar_t__ mw_enabled; void* uar_page_sz; } ;
struct mlx4_dev_cap {int log_uar_sz; int flags2; int hca_core_clock; int reserved_uars; int reserved_eqs; int max_eqs; scalar_t__ mw_enabled; void* uar_page_sz; } ;
struct TYPE_6__ {scalar_t__ dmfs_high_steer_mode; scalar_t__ steering_mode; int max_fmr_maps; int flags; int bmme_flags; int flags2; int * rx_checksum_flags_port; int dmfs_high_rate_qpn_range; int * reserved_qps_cnt; int dmfs_high_rate_qpn_base; int hca_core_clock; int reserved_uars; int reserved_eqs; int num_eqs; int num_uars; int num_mpts; int function_caps; } ;
struct mlx4_dev {int board_id; TYPE_3__ caps; TYPE_2__* persist; } ;
struct mlx4_config_dev_params {int rx_csum_flags_port_2; int rx_csum_flags_port_1; } ;
struct mlx4_adapter {int board_id; int inta_pin; } ;
struct TYPE_5__ {int num_vfs; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 void* VAR_19 ;
 int FUNC_0 (struct mlx4_dev*,struct mlx4_init_hca_param*) ;
 int FUNC_1 (struct mlx4_dev*,struct mlx4_init_hca_param*) ;
 struct mlx4_profile VAR_20 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_21 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mlx4_init_hca_param*) ;
 struct mlx4_init_hca_param* FUNC_5 (int,int ) ;
 struct mlx4_profile VAR_22 ;
 scalar_t__ FUNC_6 (struct mlx4_dev*) ;
 scalar_t__ FUNC_7 (struct mlx4_dev*) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (struct mlx4_dev*,int ) ;
 int FUNC_10 (struct mlx4_dev*,struct mlx4_init_hca_param*) ;
 int FUNC_11 (struct mlx4_dev*,struct mlx4_adapter*) ;
 int FUNC_12 (struct mlx4_dev*,struct mlx4_init_hca_param*) ;
 int FUNC_13 (struct mlx4_dev*,struct mlx4_config_dev_params*) ;
 int FUNC_14 (struct mlx4_dev*,char*) ;
 int FUNC_15 (struct mlx4_dev*,struct mlx4_init_hca_param*) ;
 int FUNC_16 (struct mlx4_dev*,char*) ;
 int FUNC_17 (struct mlx4_dev*) ;
 int FUNC_18 (struct mlx4_dev*) ;
 int FUNC_19 (struct mlx4_dev*,char*,...) ;
 int FUNC_20 (struct mlx4_dev*,struct mlx4_init_hca_param*,struct mlx4_init_hca_param*,int) ;
 int FUNC_21 (struct mlx4_dev*) ;
 scalar_t__ FUNC_22 (struct mlx4_dev*) ;
 scalar_t__ FUNC_23 (struct mlx4_dev*) ;
 scalar_t__ FUNC_24 () ;
 int FUNC_25 (struct mlx4_dev*,struct mlx4_profile*,struct mlx4_init_hca_param*,struct mlx4_init_hca_param*) ;
 int FUNC_26 (struct mlx4_dev*) ;
 struct mlx4_priv* FUNC_27 (struct mlx4_dev*) ;
 int FUNC_28 (struct mlx4_dev*,struct mlx4_init_hca_param*) ;
 int FUNC_29 (struct mlx4_dev*) ;
 int FUNC_30 (struct mlx4_dev*) ;
 int FUNC_31 (struct mlx4_dev*) ;
 int FUNC_32 (struct mlx4_dev*) ;
 scalar_t__ FUNC_33 (struct mlx4_dev*) ;
 int FUNC_34 (struct mlx4_dev*,char*) ;
 int FUNC_35 (struct mlx4_dev*) ;
 int FUNC_36 (struct mlx4_dev*) ;

__attribute__((used)) static int FUNC_37(struct mlx4_dev *VAR_23)
{
 struct mlx4_priv *VAR_24 = FUNC_27(VAR_23);
 struct mlx4_init_hca_param *VAR_25 = ((void*)0);
 struct mlx4_dev_cap *VAR_26 = ((void*)0);
 struct mlx4_adapter VAR_27;
 struct mlx4_profile VAR_28;
 u64 VAR_29;
 struct mlx4_config_dev_params VAR_30;
 int VAR_31;

 if (!FUNC_23(VAR_23)) {
  VAR_26 = FUNC_5(sizeof(*VAR_26), VAR_4);
  VAR_25 = FUNC_5(sizeof(*VAR_25), VAR_4);

  if (!VAR_26 || !VAR_25) {
   VAR_31 = -VAR_1;
   goto out_free;
  }

  VAR_31 = FUNC_15(VAR_23, VAR_26);
  if (VAR_31) {
   FUNC_16(VAR_23, "QUERY_DEV_CAP command failed, aborting\n");
   goto out_free;
  }

  FUNC_0(VAR_23, VAR_26);
  FUNC_1(VAR_23, VAR_26);

  if (VAR_23->caps.dmfs_high_steer_mode == VAR_17 &&
      FUNC_22(VAR_23))
   VAR_23->caps.function_caps |= VAR_12;

  VAR_31 = FUNC_18(VAR_23);
  if (VAR_31)
   FUNC_16(VAR_23, "Fail to get physical port id\n");

  if (FUNC_22(VAR_23))
   FUNC_26(VAR_23);

  if (FUNC_24()) {
   FUNC_19(VAR_23, "Running from within kdump kernel. Using low memory profile\n");
   VAR_28 = VAR_22;
  } else {
   VAR_28 = VAR_20;
  }
  if (VAR_23->caps.steering_mode ==
      VAR_18)
   VAR_28.num_mcg = VAR_11;

  VAR_29 = FUNC_25(VAR_23, &VAR_28, VAR_26,
          VAR_25);
  if ((long long) VAR_29 < 0) {
   VAR_31 = VAR_29;
   goto out_free;
  }

  VAR_23->caps.max_fmr_maps = (1 << (32 - FUNC_3(VAR_23->caps.num_mpts))) - 1;

  if (VAR_21 || !VAR_23->persist->num_vfs) {
   VAR_25->log_uar_sz = FUNC_3(VAR_23->caps.num_uars) +
          VAR_19 - VAR_0;
   VAR_25->uar_page_sz = VAR_0 - 12;
  } else {
   VAR_25->log_uar_sz = FUNC_3(VAR_23->caps.num_uars);
   VAR_25->uar_page_sz = VAR_19 - 12;
  }

  VAR_25->mw_enabled = 0;
  if (VAR_23->caps.flags & VAR_10 ||
      VAR_23->caps.bmme_flags & VAR_7)
   VAR_25->mw_enabled = VAR_5;

  VAR_31 = FUNC_20(VAR_23, VAR_26, VAR_25, VAR_29);
  if (VAR_31)
   goto out_free;

  VAR_31 = FUNC_10(VAR_23, VAR_25);
  if (VAR_31) {
   FUNC_16(VAR_23, "INIT_HCA command failed, aborting\n");
   goto err_free_icm;
  }

  if (VAR_26->flags2 & VAR_8) {
   VAR_31 = FUNC_28(VAR_23, VAR_26);
   if (VAR_31 < 0) {
    FUNC_16(VAR_23, "QUERY_FUNC command failed, aborting.\n");
    goto err_close;
   } else if (VAR_31 & VAR_14) {
    VAR_23->caps.num_eqs = VAR_26->max_eqs;
    VAR_23->caps.reserved_eqs = VAR_26->reserved_eqs;
    VAR_23->caps.reserved_uars = VAR_26->reserved_uars;
   }
  }





  if (VAR_23->caps.flags2 & VAR_9) {
   VAR_31 = FUNC_12(VAR_23, VAR_25);
   if (VAR_31) {
    FUNC_16(VAR_23, "QUERY_HCA command failed, disable timestamp\n");
    VAR_23->caps.flags2 &= ~VAR_9;
   } else {
    VAR_23->caps.hca_core_clock =
     VAR_25->hca_core_clock;
   }




   if (!VAR_23->caps.hca_core_clock) {
    VAR_23->caps.flags2 &= ~VAR_9;
    FUNC_16(VAR_23,
      "HCA frequency is 0 - timestamping is not supported\n");
   } else if (FUNC_7(VAR_23)) {




    VAR_23->caps.flags2 &= ~VAR_9;
    FUNC_16(VAR_23, "Failed to map internal clock. Timestamping is not supported\n");
   }
  }

  if (VAR_23->caps.dmfs_high_steer_mode !=
      VAR_16) {
   if (FUNC_33(VAR_23))
    FUNC_34(VAR_23, "Optimized steering validation failed\n");

   if (VAR_23->caps.dmfs_high_steer_mode ==
       VAR_15) {
    VAR_23->caps.dmfs_high_rate_qpn_base =
     VAR_23->caps.reserved_qps_cnt[VAR_13];
    VAR_23->caps.dmfs_high_rate_qpn_range =
     VAR_6;
   }

   FUNC_19(VAR_23, "DMFS high rate steer mode is: %s\n",
      FUNC_2(
     VAR_23->caps.dmfs_high_steer_mode));
  }
 } else {
  VAR_31 = FUNC_21(VAR_23);
  if (VAR_31) {
   if (VAR_31 != -VAR_3)
    FUNC_16(VAR_23, "Failed to initialize slave\n");
   return VAR_31;
  }

  VAR_31 = FUNC_30(VAR_23);
  if (VAR_31) {
   FUNC_16(VAR_23, "Failed to obtain slave caps\n");
   goto err_close;
  }
 }

 if (FUNC_6(VAR_23))
  FUNC_14(VAR_23, "Failed to map blue flame area\n");


 if (!FUNC_23(VAR_23))
  FUNC_29(VAR_23);

 VAR_31 = FUNC_11(VAR_23, &VAR_27);
 if (VAR_31) {
  FUNC_16(VAR_23, "QUERY_ADAPTER command failed, aborting\n");
  goto unmap_bf;
 }


 VAR_31 = FUNC_13(VAR_23, &VAR_30);
 if (VAR_31 && VAR_31 != -VAR_2) {
  FUNC_16(VAR_23, "Failed to query CONFIG_DEV parameters\n");
 } else if (!VAR_31) {
  VAR_23->caps.rx_checksum_flags_port[1] = VAR_30.rx_csum_flags_port_1;
  VAR_23->caps.rx_checksum_flags_port[2] = VAR_30.rx_csum_flags_port_2;
 }
 VAR_24->eq_table.inta_pin = VAR_27.inta_pin;
 FUNC_8(VAR_23->board_id, VAR_27.board_id, sizeof(VAR_23->board_id));

 VAR_31 = 0;
 goto out_free;

unmap_bf:
 FUNC_36(VAR_23);
 FUNC_35(VAR_23);

 if (FUNC_23(VAR_23))
  FUNC_31(VAR_23);

err_close:
 if (FUNC_23(VAR_23))
  FUNC_32(VAR_23);
 else
  FUNC_9(VAR_23, 0);

err_free_icm:
 if (!FUNC_23(VAR_23))
  FUNC_17(VAR_23);

out_free:
 FUNC_4(VAR_26);
 FUNC_4(VAR_25);

 return VAR_31;
}
