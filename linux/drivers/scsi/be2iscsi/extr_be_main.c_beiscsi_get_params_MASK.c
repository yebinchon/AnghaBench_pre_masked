
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct iscsi_sge {int dummy; } ;
struct TYPE_4__ {int ios_per_ctrl; int cxns_per_ctrl; int icds_per_ctrl; int num_sge_per_io; int num_eq_entries; int num_cq_entries; int wrbs_per_cxn; int defpdu_data_sz; int defpdu_hdr_sz; } ;
struct TYPE_3__ {int* iscsi_icd_start; int* iscsi_icd_count; int ulp_supported; } ;
struct beiscsi_hba {TYPE_2__ params; TYPE_1__ fw_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct beiscsi_hba*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct beiscsi_hba*,int ,int ,char*,int,int,int) ;
 scalar_t__ FUNC_2 (size_t,int *) ;

__attribute__((used)) static void FUNC_3(struct beiscsi_hba *VAR_11)
{
 uint32_t VAR_12 = 0;
 uint32_t VAR_13 = 0;
 uint8_t VAR_14 = 0;

 VAR_12 = FUNC_0(VAR_11, VAR_6) +
     FUNC_0(VAR_11, VAR_7);

 for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++) {
  uint32_t VAR_15 = 0;
  uint32_t VAR_16 = 0;
  uint32_t VAR_17 = 0;
  uint32_t VAR_18 = 0, VAR_19 = 0;
  uint32_t VAR_20 = 0, VAR_21 = 0;

  if (FUNC_2(VAR_14, &VAR_11->fw_config.ulp_supported)) {
   VAR_18 = VAR_11->fw_config.iscsi_icd_start[VAR_14];
   VAR_19 = VAR_11->fw_config.iscsi_icd_count[VAR_14];


   VAR_16 = (VAR_10 / (VAR_3 *
          sizeof(struct iscsi_sge)));
   VAR_15 = (VAR_16 - 1);


   if (VAR_18 % VAR_16) {
    VAR_20 = ((VAR_18 +
          VAR_16) &
          ~(VAR_15));
    VAR_11->fw_config.
     iscsi_icd_start[VAR_14] =
     VAR_20;
   }

   VAR_21 = (VAR_19 & ~VAR_15);


   if (VAR_20)
    VAR_17 = ((VAR_20 -
         VAR_18) +
        (VAR_19 -
         VAR_21));


   VAR_11->fw_config.iscsi_icd_count[VAR_14] = (VAR_19 -
     VAR_17);

   FUNC_1(VAR_11, VAR_9, VAR_5,
     "BM_%d : Aligned ICD values\n"
     "\t ICD Start : %d\n"
     "\t ICD Count : %d\n"
     "\t ICD Discarded : %d\n",
     VAR_11->fw_config.
     iscsi_icd_start[VAR_14],
     VAR_11->fw_config.
     iscsi_icd_count[VAR_14],
     VAR_17);
   break;
  }
 }

 VAR_13 = VAR_11->fw_config.iscsi_icd_count[VAR_14];
 VAR_11->params.ios_per_ctrl = (VAR_13 -
        (VAR_12 +
         VAR_4 + VAR_2));
 VAR_11->params.cxns_per_ctrl = VAR_12;
 VAR_11->params.icds_per_ctrl = VAR_13;
 VAR_11->params.num_sge_per_io = VAR_3;
 VAR_11->params.defpdu_hdr_sz = VAR_1;
 VAR_11->params.defpdu_data_sz = VAR_0;
 VAR_11->params.num_eq_entries = 1024;
 VAR_11->params.num_cq_entries = 1024;
 VAR_11->params.wrbs_per_cxn = 256;
}
