
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int raw_ext_csd_structure; int rev; int* raw_sectors; int sectors; int strobe_support; int raw_card_type; int raw_s_a_timeout; int raw_erase_timeout_mult; int raw_hc_erase_grp_size; int part_config; int part_time; int sa_timeout; int erase_group_def; int hc_erase_timeout; int hc_erase_size; int rel_sectors; int raw_hc_erase_gap_size; int raw_sec_trim_mult; int raw_sec_erase_mult; int raw_sec_feature_support; int raw_trim_mult; int raw_partition_support; int raw_driver_strength; int partition_setting_completed; int sec_trim_mult; int sec_erase_mult; int sec_feature_support; int trim_timeout; int boot_ro_lock; int boot_ro_lockable; int raw_pwr_cl_52_195; int raw_pwr_cl_26_195; int raw_pwr_cl_52_360; int raw_pwr_cl_26_360; int raw_pwr_cl_200_195; int raw_pwr_cl_200_360; int raw_pwr_cl_ddr_52_195; int raw_pwr_cl_ddr_52_360; int raw_pwr_cl_ddr_200_360; int bkops; int man_bkops_en; int raw_bkops_status; int auto_bkops_en; int hpi; int out_of_int_time; int rel_param; int rst_n_function; int raw_rpmb_size_mult; int raw_erased_mem_count; int generic_cmd6_time; int power_off_longtime; int cache_size; int data_sector_size; unsigned int data_tag_unit_size; int max_packed_writes; int max_packed_reads; int ffu_capable; int pre_eol_info; int device_life_time_est_typ_a; int device_life_time_est_typ_b; int cmdq_support; int cmdq_depth; int fwrev; int feature_support; int hpi_cmd; } ;
struct TYPE_5__ {int year; } ;
struct TYPE_4__ {int structure; } ;
struct mmc_card {int erased_byte; TYPE_3__ ext_csd; int host; TYPE_2__ cid; TYPE_1__ csd; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 int VAR_28 ;
 size_t VAR_29 ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;
 size_t VAR_33 ;
 size_t VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 int VAR_37 ;
 size_t VAR_38 ;
 size_t VAR_39 ;
 size_t VAR_40 ;
 size_t VAR_41 ;
 size_t VAR_42 ;
 size_t VAR_43 ;
 size_t VAR_44 ;
 size_t VAR_45 ;
 size_t VAR_46 ;
 size_t VAR_47 ;
 size_t VAR_48 ;
 size_t VAR_49 ;
 size_t VAR_50 ;
 size_t VAR_51 ;
 size_t VAR_52 ;
 size_t VAR_53 ;
 int VAR_54 ;
 size_t VAR_55 ;
 size_t VAR_56 ;
 size_t VAR_57 ;
 size_t VAR_58 ;
 size_t VAR_59 ;
 size_t VAR_60 ;
 size_t VAR_61 ;
 size_t VAR_62 ;
 size_t VAR_63 ;
 size_t VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int FUNC_0 (int ,int*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct mmc_card*) ;
 int FUNC_3 (struct mmc_card*) ;
 int VAR_73 ;
 int FUNC_4 (struct mmc_card*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct mmc_card*,int*) ;
 int FUNC_8 (struct mmc_card*,int*) ;
 struct device_node* FUNC_9 (int ,int ) ;
 int FUNC_10 (struct mmc_card*,int,scalar_t__,char*,int,int,int ) ;
 int FUNC_11 (struct mmc_card*) ;
 scalar_t__ FUNC_12 (struct device_node*,char*) ;
 int FUNC_13 (struct device_node*) ;
 int FUNC_14 (struct device_node*,char*) ;
 int FUNC_15 (char*,int ,...) ;
 int FUNC_16 (char*,int ,int) ;

__attribute__((used)) static int FUNC_17(struct mmc_card *VAR_74, u8 *VAR_75)
{
 int VAR_76 = 0, VAR_77;
 unsigned int VAR_78;
 struct device_node *VAR_79;
 bool VAR_80 = 0;


 VAR_74->ext_csd.raw_ext_csd_structure = VAR_75[VAR_59];
 if (VAR_74->csd.structure == 3) {
  if (VAR_74->ext_csd.raw_ext_csd_structure > 2) {
   FUNC_16("%s: unrecognised EXT_CSD structure "
    "version %d\n", FUNC_6(VAR_74->host),
     VAR_74->ext_csd.raw_ext_csd_structure);
   VAR_76 = -VAR_1;
   goto out;
  }
 }

 VAR_79 = FUNC_9(VAR_74->host, 0);
 if (VAR_79 && FUNC_12(VAR_79, "mmc-card"))
  VAR_80 = FUNC_14(VAR_79, "broken-hpi");
 FUNC_13(VAR_79);






 VAR_74->ext_csd.rev = VAR_75[VAR_51];


 FUNC_4(VAR_74, VAR_73);

 VAR_74->ext_csd.raw_sectors[0] = VAR_75[VAR_54 + 0];
 VAR_74->ext_csd.raw_sectors[1] = VAR_75[VAR_54 + 1];
 VAR_74->ext_csd.raw_sectors[2] = VAR_75[VAR_54 + 2];
 VAR_74->ext_csd.raw_sectors[3] = VAR_75[VAR_54 + 3];
 if (VAR_74->ext_csd.rev >= 2) {
  VAR_74->ext_csd.sectors =
   VAR_75[VAR_54 + 0] << 0 |
   VAR_75[VAR_54 + 1] << 8 |
   VAR_75[VAR_54 + 2] << 16 |
   VAR_75[VAR_54 + 3] << 24;


  if (VAR_74->ext_csd.sectors > (2u * 1024 * 1024 * 1024) / 512)
   FUNC_3(VAR_74);
 }

 VAR_74->ext_csd.strobe_support = VAR_75[VAR_58];
 VAR_74->ext_csd.raw_card_type = VAR_75[VAR_9];
 FUNC_11(VAR_74);

 VAR_74->ext_csd.raw_s_a_timeout = VAR_75[VAR_61];
 VAR_74->ext_csd.raw_erase_timeout_mult =
  VAR_75[VAR_21];
 VAR_74->ext_csd.raw_hc_erase_grp_size =
  VAR_75[VAR_25];
 if (VAR_74->ext_csd.rev >= 3) {
  u8 VAR_81 = VAR_75[VAR_61];
  VAR_74->ext_csd.part_config = VAR_75[VAR_34];


  VAR_74->ext_csd.part_time = 10 * VAR_75[VAR_38];

  if (VAR_74->ext_csd.part_time &&
      VAR_74->ext_csd.part_time < VAR_69)
   VAR_74->ext_csd.part_time = VAR_69;


  if (VAR_81 > 0 && VAR_81 <= 0x17)
   VAR_74->ext_csd.sa_timeout =
     1 << VAR_75[VAR_61];
  VAR_74->ext_csd.erase_group_def =
   VAR_75[VAR_20];
  VAR_74->ext_csd.hc_erase_timeout = 300 *
   VAR_75[VAR_21];
  VAR_74->ext_csd.hc_erase_size =
   VAR_75[VAR_25] << 10;

  VAR_74->ext_csd.rel_sectors = VAR_75[VAR_50];





  if (VAR_75[VAR_6] && FUNC_1(VAR_74->host)) {
   for (VAR_77 = 0; VAR_77 < VAR_70; VAR_77++) {
    VAR_78 = VAR_75[VAR_6] << 17;
    FUNC_10(VAR_74, VAR_78,
     VAR_35 + VAR_77,
     "boot%d", VAR_77, 1,
     VAR_65);
   }
  }
 }

 VAR_74->ext_csd.raw_hc_erase_gap_size =
  VAR_75[VAR_26];
 VAR_74->ext_csd.raw_sec_trim_mult =
  VAR_75[VAR_57];
 VAR_74->ext_csd.raw_sec_erase_mult =
  VAR_75[VAR_55];
 VAR_74->ext_csd.raw_sec_feature_support =
  VAR_75[VAR_56];
 VAR_74->ext_csd.raw_trim_mult =
  VAR_75[VAR_63];
 VAR_74->ext_csd.raw_partition_support = VAR_75[VAR_33];
 VAR_74->ext_csd.raw_driver_strength = VAR_75[VAR_18];
 if (VAR_74->ext_csd.rev >= 4) {
  if (VAR_75[VAR_32] &
      VAR_37)
   VAR_74->ext_csd.partition_setting_completed = 1;
  else
   VAR_74->ext_csd.partition_setting_completed = 0;

  FUNC_7(VAR_74, VAR_75);

  FUNC_8(VAR_74, VAR_75);

  VAR_74->ext_csd.sec_trim_mult =
   VAR_75[VAR_57];
  VAR_74->ext_csd.sec_erase_mult =
   VAR_75[VAR_55];
  VAR_74->ext_csd.sec_feature_support =
   VAR_75[VAR_56];
  VAR_74->ext_csd.trim_timeout = 300 *
   VAR_75[VAR_63];






  VAR_74->ext_csd.boot_ro_lock = VAR_75[VAR_7];
  VAR_74->ext_csd.boot_ro_lockable = 1;


  VAR_74->ext_csd.raw_pwr_cl_52_195 =
   VAR_75[VAR_45];
  VAR_74->ext_csd.raw_pwr_cl_26_195 =
   VAR_75[VAR_43];
  VAR_74->ext_csd.raw_pwr_cl_52_360 =
   VAR_75[VAR_46];
  VAR_74->ext_csd.raw_pwr_cl_26_360 =
   VAR_75[VAR_44];
  VAR_74->ext_csd.raw_pwr_cl_200_195 =
   VAR_75[VAR_41];
  VAR_74->ext_csd.raw_pwr_cl_200_360 =
   VAR_75[VAR_42];
  VAR_74->ext_csd.raw_pwr_cl_ddr_52_195 =
   VAR_75[VAR_48];
  VAR_74->ext_csd.raw_pwr_cl_ddr_52_360 =
   VAR_75[VAR_49];
  VAR_74->ext_csd.raw_pwr_cl_ddr_200_360 =
   VAR_75[VAR_47];
 }

 if (VAR_74->ext_csd.rev >= 5) {

  if (VAR_74->cid.year < 2010)
   VAR_74->cid.year += 16;


  if (VAR_75[VAR_5] & 0x1) {
   VAR_74->ext_csd.bkops = 1;
   VAR_74->ext_csd.man_bkops_en =
     (VAR_75[VAR_3] &
      VAR_28);
   VAR_74->ext_csd.raw_bkops_status =
    VAR_75[VAR_4];
   if (VAR_74->ext_csd.man_bkops_en)
    FUNC_15("%s: MAN_BKOPS_EN bit is set\n",
     FUNC_6(VAR_74->host));
   VAR_74->ext_csd.auto_bkops_en =
     (VAR_75[VAR_3] &
      VAR_2);
   if (VAR_74->ext_csd.auto_bkops_en)
    FUNC_15("%s: AUTO_BKOPS_EN bit is set\n",
     FUNC_6(VAR_74->host));
  }


  if (!FUNC_2(VAR_74) &&
      !VAR_80 && (VAR_75[VAR_27] & 0x1)) {
   VAR_74->ext_csd.hpi = 1;
   if (VAR_75[VAR_27] & 0x2)
    VAR_74->ext_csd.hpi_cmd = VAR_72;
   else
    VAR_74->ext_csd.hpi_cmd = VAR_71;




   VAR_74->ext_csd.out_of_int_time =
    VAR_75[VAR_31] * 10;
  }

  VAR_74->ext_csd.rel_param = VAR_75[VAR_64];
  VAR_74->ext_csd.rst_n_function = VAR_75[VAR_53];




  VAR_74->ext_csd.raw_rpmb_size_mult = VAR_75[VAR_52];
  if (VAR_75[VAR_52] && FUNC_5(VAR_74->host)) {
   FUNC_10(VAR_74, VAR_75[VAR_52] << 17,
    VAR_36,
    "rpmb", 0, 0,
    VAR_66);
  }
 }

 VAR_74->ext_csd.raw_erased_mem_count = VAR_75[VAR_19];
 if (VAR_75[VAR_19])
  VAR_74->erased_byte = 0xFF;
 else
  VAR_74->erased_byte = 0x0;


 VAR_74->ext_csd.generic_cmd6_time = VAR_0;
 if (VAR_74->ext_csd.rev >= 6) {
  VAR_74->ext_csd.feature_support |= VAR_67;

  VAR_74->ext_csd.generic_cmd6_time = 10 *
   VAR_75[VAR_24];
  VAR_74->ext_csd.power_off_longtime = 10 *
   VAR_75[VAR_39];

  VAR_74->ext_csd.cache_size =
   VAR_75[VAR_8 + 0] << 0 |
   VAR_75[VAR_8 + 1] << 8 |
   VAR_75[VAR_8 + 2] << 16 |
   VAR_75[VAR_8 + 3] << 24;

  if (VAR_75[VAR_14] == 1)
   VAR_74->ext_csd.data_sector_size = 4096;
  else
   VAR_74->ext_csd.data_sector_size = 512;

  if ((VAR_75[VAR_15] & 1) &&
      (VAR_75[VAR_62] <= 8)) {
   VAR_74->ext_csd.data_tag_unit_size =
   ((unsigned int) 1 << VAR_75[VAR_62]) *
   (VAR_74->ext_csd.data_sector_size);
  } else {
   VAR_74->ext_csd.data_tag_unit_size = 0;
  }

  VAR_74->ext_csd.max_packed_writes =
   VAR_75[VAR_30];
  VAR_74->ext_csd.max_packed_reads =
   VAR_75[VAR_29];
 } else {
  VAR_74->ext_csd.data_sector_size = 512;
 }


 if (VAR_74->ext_csd.rev >= 7) {
  FUNC_0(VAR_74->ext_csd.fwrev, &VAR_75[VAR_22],
         VAR_68);
  VAR_74->ext_csd.ffu_capable =
   (VAR_75[VAR_60] & 0x1) &&
   !(VAR_75[VAR_23] & 0x1);

  VAR_74->ext_csd.pre_eol_info = VAR_75[VAR_40];
  VAR_74->ext_csd.device_life_time_est_typ_a =
   VAR_75[VAR_16];
  VAR_74->ext_csd.device_life_time_est_typ_b =
   VAR_75[VAR_17];
 }


 if (VAR_74->ext_csd.rev >= 8) {
  VAR_74->ext_csd.cmdq_support = VAR_75[VAR_12] &
          VAR_13;
  VAR_74->ext_csd.cmdq_depth = (VAR_75[VAR_10] &
         VAR_11) + 1;

  if (VAR_74->ext_csd.cmdq_depth <= 2) {
   VAR_74->ext_csd.cmdq_support = 0;
   VAR_74->ext_csd.cmdq_depth = 0;
  }
  if (VAR_74->ext_csd.cmdq_support) {
   FUNC_15("%s: Command Queue supported depth %u\n",
     FUNC_6(VAR_74->host),
     VAR_74->ext_csd.cmdq_depth);
  }
 }
out:
 return VAR_76;
}
