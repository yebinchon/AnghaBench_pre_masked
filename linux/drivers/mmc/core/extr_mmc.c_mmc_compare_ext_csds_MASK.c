
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__ raw_partition_support; scalar_t__ raw_erased_mem_count; scalar_t__ rev; scalar_t__ raw_ext_csd_structure; scalar_t__ raw_card_type; scalar_t__ raw_s_a_timeout; scalar_t__ raw_hc_erase_gap_size; scalar_t__ raw_erase_timeout_mult; scalar_t__ raw_hc_erase_grp_size; scalar_t__ raw_sec_trim_mult; scalar_t__ raw_sec_erase_mult; scalar_t__ raw_sec_feature_support; scalar_t__ raw_trim_mult; scalar_t__* raw_sectors; scalar_t__ raw_pwr_cl_52_195; scalar_t__ raw_pwr_cl_26_195; scalar_t__ raw_pwr_cl_52_360; scalar_t__ raw_pwr_cl_26_360; scalar_t__ raw_pwr_cl_200_195; scalar_t__ raw_pwr_cl_200_360; scalar_t__ raw_pwr_cl_ddr_52_195; scalar_t__ raw_pwr_cl_ddr_52_360; scalar_t__ raw_pwr_cl_ddr_200_360; } ;
struct mmc_card {TYPE_1__ ext_csd; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 unsigned int VAR_24 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (struct mmc_card*,scalar_t__**) ;

__attribute__((used)) static int FUNC_2(struct mmc_card *VAR_25, unsigned VAR_26)
{
 u8 *VAR_27;
 int VAR_28;

 if (VAR_26 == VAR_24)
  return 0;

 VAR_28 = FUNC_1(VAR_25, &VAR_27);
 if (VAR_28)
  return VAR_28;


 VAR_28 = !((VAR_25->ext_csd.raw_partition_support ==
   VAR_27[VAR_6]) &&
  (VAR_25->ext_csd.raw_erased_mem_count ==
   VAR_27[VAR_2]) &&
  (VAR_25->ext_csd.rev ==
   VAR_27[VAR_16]) &&
  (VAR_25->ext_csd.raw_ext_csd_structure ==
   VAR_27[VAR_21]) &&
  (VAR_25->ext_csd.raw_card_type ==
   VAR_27[VAR_1]) &&
  (VAR_25->ext_csd.raw_s_a_timeout ==
   VAR_27[VAR_22]) &&
  (VAR_25->ext_csd.raw_hc_erase_gap_size ==
   VAR_27[VAR_5]) &&
  (VAR_25->ext_csd.raw_erase_timeout_mult ==
   VAR_27[VAR_3]) &&
  (VAR_25->ext_csd.raw_hc_erase_grp_size ==
   VAR_27[VAR_4]) &&
  (VAR_25->ext_csd.raw_sec_trim_mult ==
   VAR_27[VAR_20]) &&
  (VAR_25->ext_csd.raw_sec_erase_mult ==
   VAR_27[VAR_18]) &&
  (VAR_25->ext_csd.raw_sec_feature_support ==
   VAR_27[VAR_19]) &&
  (VAR_25->ext_csd.raw_trim_mult ==
   VAR_27[VAR_23]) &&
  (VAR_25->ext_csd.raw_sectors[0] ==
   VAR_27[VAR_17 + 0]) &&
  (VAR_25->ext_csd.raw_sectors[1] ==
   VAR_27[VAR_17 + 1]) &&
  (VAR_25->ext_csd.raw_sectors[2] ==
   VAR_27[VAR_17 + 2]) &&
  (VAR_25->ext_csd.raw_sectors[3] ==
   VAR_27[VAR_17 + 3]) &&
  (VAR_25->ext_csd.raw_pwr_cl_52_195 ==
   VAR_27[VAR_11]) &&
  (VAR_25->ext_csd.raw_pwr_cl_26_195 ==
   VAR_27[VAR_9]) &&
  (VAR_25->ext_csd.raw_pwr_cl_52_360 ==
   VAR_27[VAR_12]) &&
  (VAR_25->ext_csd.raw_pwr_cl_26_360 ==
   VAR_27[VAR_10]) &&
  (VAR_25->ext_csd.raw_pwr_cl_200_195 ==
   VAR_27[VAR_7]) &&
  (VAR_25->ext_csd.raw_pwr_cl_200_360 ==
   VAR_27[VAR_8]) &&
  (VAR_25->ext_csd.raw_pwr_cl_ddr_52_195 ==
   VAR_27[VAR_14]) &&
  (VAR_25->ext_csd.raw_pwr_cl_ddr_52_360 ==
   VAR_27[VAR_15]) &&
  (VAR_25->ext_csd.raw_pwr_cl_ddr_200_360 ==
   VAR_27[VAR_13]));

 if (VAR_28)
  VAR_28 = -VAR_0;

 FUNC_0(VAR_27);
 return VAR_28;
}
