
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_res {int dummy; } ;
struct mlxsw_pci {scalar_t__ max_cqe_ver; int core; } ;
struct mlxsw_config_profile {int * swid_config; scalar_t__ used_kvd_sizes; int adaptive_routing_group_cap; scalar_t__ used_adaptive_routing_group_cap; int ar_sec; scalar_t__ used_ar_sec; int max_pkey; scalar_t__ used_max_pkey; int max_ib_mc; scalar_t__ used_max_ib_mc; int flood_mode; scalar_t__ used_flood_mode; int fid_flood_table_size; int max_fid_flood_tables; int fid_offset_flood_table_size; int max_fid_offset_flood_tables; int max_vid_flood_tables; int max_flood_tables; scalar_t__ used_flood_tables; int max_regions; scalar_t__ used_max_regions; int max_vlan_groups; scalar_t__ used_max_vlan_groups; int max_system_port; scalar_t__ used_max_system_port; int max_pgt; scalar_t__ used_max_pgt; int max_mid; scalar_t__ used_max_mid; int max_vepa_channels; scalar_t__ used_max_vepa_channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct mlxsw_res*,int ) ;
 scalar_t__ FUNC_1 (struct mlxsw_res*,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (char*,int ) ;
 int FUNC_15 (char*,int ) ;
 int FUNC_16 (char*,int ) ;
 int FUNC_17 (char*,int ) ;
 int FUNC_18 (char*,int ) ;
 int FUNC_19 (char*,int ) ;
 int FUNC_20 (char*,int ) ;
 int FUNC_21 (char*,int ) ;
 int FUNC_22 (char*,int ) ;
 int FUNC_23 (char*,int ) ;
 int FUNC_24 (char*,int) ;
 int FUNC_25 (char*,int) ;
 int FUNC_26 (char*,int) ;
 int FUNC_27 (char*,int) ;
 int FUNC_28 (char*,int) ;
 int FUNC_29 (char*,int) ;
 int FUNC_30 (char*,int) ;
 int FUNC_31 (char*,int) ;
 int FUNC_32 (char*,int) ;
 int FUNC_33 (char*,int) ;
 int FUNC_34 (char*,int) ;
 int FUNC_35 (char*,int) ;
 int FUNC_36 (char*,int) ;
 int FUNC_37 (char*,int) ;
 int FUNC_38 (char*,int) ;
 int FUNC_39 (char*,int) ;
 int FUNC_40 (char*) ;
 int FUNC_41 (struct mlxsw_pci*,char*,int,int *) ;
 int FUNC_42 (struct mlxsw_pci*,struct mlxsw_config_profile const*,struct mlxsw_res*) ;

__attribute__((used)) static int FUNC_43(struct mlxsw_pci *VAR_6, char *VAR_7,
        const struct mlxsw_config_profile *VAR_8,
        struct mlxsw_res *VAR_9)
{
 int VAR_10;
 int VAR_11;

 FUNC_40(VAR_7);

 if (VAR_8->used_max_vepa_channels) {
  FUNC_38(
   VAR_7, 1);
  FUNC_21(
   VAR_7, VAR_8->max_vepa_channels);
 }
 if (VAR_8->used_max_mid) {
  FUNC_33(
   VAR_7, 1);
  FUNC_16(
   VAR_7, VAR_8->max_mid);
 }
 if (VAR_8->used_max_pgt) {
  FUNC_34(
   VAR_7, 1);
  FUNC_17(
   VAR_7, VAR_8->max_pgt);
 }
 if (VAR_8->used_max_system_port) {
  FUNC_37(
   VAR_7, 1);
  FUNC_20(
   VAR_7, VAR_8->max_system_port);
 }
 if (VAR_8->used_max_vlan_groups) {
  FUNC_39(
   VAR_7, 1);
  FUNC_23(
   VAR_7, VAR_8->max_vlan_groups);
 }
 if (VAR_8->used_max_regions) {
  FUNC_36(
   VAR_7, 1);
  FUNC_19(
   VAR_7, VAR_8->max_regions);
 }
 if (VAR_8->used_flood_tables) {
  FUNC_28(
   VAR_7, 1);
  FUNC_14(
   VAR_7, VAR_8->max_flood_tables);
  FUNC_22(
   VAR_7, VAR_8->max_vid_flood_tables);
  FUNC_13(
   VAR_7, VAR_8->max_fid_offset_flood_tables);
  FUNC_7(
   VAR_7, VAR_8->fid_offset_flood_table_size);
  FUNC_12(
   VAR_7, VAR_8->max_fid_flood_tables);
  FUNC_6(
   VAR_7, VAR_8->fid_flood_table_size);
 }
 if (VAR_8->used_flood_mode) {
  FUNC_27(
   VAR_7, 1);
  FUNC_8(
   VAR_7, VAR_8->flood_mode);
 }
 if (VAR_8->used_max_ib_mc) {
  FUNC_32(
   VAR_7, 1);
  FUNC_15(
   VAR_7, VAR_8->max_ib_mc);
 }
 if (VAR_8->used_max_pkey) {
  FUNC_35(
   VAR_7, 1);
  FUNC_18(
   VAR_7, VAR_8->max_pkey);
 }
 if (VAR_8->used_ar_sec) {
  FUNC_25(
   VAR_7, 1);
  FUNC_4(
   VAR_7, VAR_8->ar_sec);
 }
 if (VAR_8->used_adaptive_routing_group_cap) {
  FUNC_24(
   VAR_7, 1);
  FUNC_3(
   VAR_7, VAR_8->adaptive_routing_group_cap);
 }
 if (VAR_8->used_kvd_sizes && FUNC_1(VAR_9, VAR_3)) {
  VAR_11 = FUNC_42(VAR_6, VAR_8, VAR_9);
  if (VAR_11)
   return VAR_11;

  FUNC_31(VAR_7, 1);
  FUNC_11(VAR_7,
     FUNC_0(VAR_9, VAR_1));
  FUNC_30(VAR_7,
            1);
  FUNC_10(VAR_7,
     FUNC_0(VAR_9, VAR_2));
  FUNC_29(
        VAR_7, 1);
  FUNC_9(VAR_7,
     FUNC_0(VAR_9, VAR_0));
 }

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
  FUNC_41(VAR_6, VAR_7, VAR_10,
           &VAR_8->swid_config[VAR_10]);

 if (VAR_6->max_cqe_ver > VAR_5) {
  FUNC_26(VAR_7, 1);
  FUNC_5(VAR_7, 1);
 }

 return FUNC_2(VAR_6->core, VAR_7);
}
