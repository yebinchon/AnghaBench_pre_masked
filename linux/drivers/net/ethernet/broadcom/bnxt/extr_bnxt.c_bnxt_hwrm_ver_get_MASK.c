
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hwrm_ver_get_output {int hwrm_intf_maj_8b; int hwrm_intf_min_8b; int hwrm_intf_upd_8b; int hwrm_fw_maj_8b; int hwrm_fw_min_8b; int hwrm_fw_bld_8b; int hwrm_fw_rsvd_8b; char* active_pkg_name; int dev_caps_cfg; int chip_metal; int chip_rev; int chip_num; int max_ext_req_len; int max_req_win_len; int def_req_timeout; } ;
struct bnxt {int hwrm_spec_code; char* fw_ver_str; void* hwrm_max_ext_req_len; int hwrm_cmd_lock; int fw_cap; int flags; void* chip_num; void* hwrm_max_req_len; void* hwrm_cmd_timeout; int dev; int ver_resp; struct hwrm_ver_get_output* hwrm_cmd_resp_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct bnxt*,int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,struct hwrm_ver_get_output*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (char*,int,char*,...) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(struct bnxt *VAR_18)
{
 struct hwrm_ver_get_output *VAR_19 = VAR_18->hwrm_cmd_resp_addr;
 u32 VAR_20;
 int VAR_21;

 VAR_18->hwrm_max_req_len = VAR_11;
 FUNC_4(&VAR_18->hwrm_cmd_lock);
 VAR_21 = FUNC_0(VAR_18, 0);
 if (VAR_21)
  goto hwrm_ver_get_exit;

 FUNC_3(&VAR_18->ver_resp, VAR_19, sizeof(struct hwrm_ver_get_output));

 VAR_18->hwrm_spec_code = VAR_19->hwrm_intf_maj_8b << 16 |
        VAR_19->hwrm_intf_min_8b << 8 |
        VAR_19->hwrm_intf_upd_8b;
 if (VAR_19->hwrm_intf_maj_8b < 1) {
  FUNC_6(VAR_18->dev, "HWRM interface %d.%d.%d is older than 1.0.0.\n",
       VAR_19->hwrm_intf_maj_8b, VAR_19->hwrm_intf_min_8b,
       VAR_19->hwrm_intf_upd_8b);
  FUNC_6(VAR_18->dev, "Please update firmware with HWRM interface 1.0.0 or newer.\n");
 }
 FUNC_7(VAR_18->fw_ver_str, VAR_0, "%d.%d.%d.%d",
   VAR_19->hwrm_fw_maj_8b, VAR_19->hwrm_fw_min_8b,
   VAR_19->hwrm_fw_bld_8b, VAR_19->hwrm_fw_rsvd_8b);

 if (FUNC_8(VAR_19->active_pkg_name)) {
  int VAR_22 = FUNC_8(VAR_18->fw_ver_str);

  FUNC_7(VAR_18->fw_ver_str + VAR_22,
    VAR_10 - VAR_22 - 1, "/pkg %s",
    VAR_19->active_pkg_name);
  VAR_18->fw_cap |= VAR_5;
 }

 VAR_18->hwrm_cmd_timeout = FUNC_1(VAR_19->def_req_timeout);
 if (!VAR_18->hwrm_cmd_timeout)
  VAR_18->hwrm_cmd_timeout = VAR_9;

 if (VAR_19->hwrm_intf_maj_8b >= 1) {
  VAR_18->hwrm_max_req_len = FUNC_1(VAR_19->max_req_win_len);
  VAR_18->hwrm_max_ext_req_len = FUNC_1(VAR_19->max_ext_req_len);
 }
 if (VAR_18->hwrm_max_ext_req_len < VAR_11)
  VAR_18->hwrm_max_ext_req_len = VAR_11;

 VAR_18->chip_num = FUNC_1(VAR_19->chip_num);
 if (VAR_18->chip_num == VAR_8 && !VAR_19->chip_rev &&
     !VAR_19->chip_metal)
  VAR_18->flags |= VAR_1;

 VAR_20 = FUNC_2(VAR_19->dev_caps_cfg);
 if ((VAR_20 & VAR_16) &&
     (VAR_20 & VAR_15))
  VAR_18->fw_cap |= VAR_6;

 if (VAR_20 & VAR_14)
  VAR_18->fw_cap |= VAR_3;

 if (VAR_20 &
     VAR_13)
  VAR_18->fw_cap |= VAR_4;

 if (VAR_20 &
     VAR_17)
  VAR_18->fw_cap |= VAR_7;

 if (VAR_20 &
     VAR_12)
  VAR_18->fw_cap |= VAR_2;

hwrm_ver_get_exit:
 FUNC_5(&VAR_18->hwrm_cmd_lock);
 return VAR_21;
}
