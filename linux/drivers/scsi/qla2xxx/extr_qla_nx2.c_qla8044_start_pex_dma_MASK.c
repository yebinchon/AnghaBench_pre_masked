
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct qla_hw_data {struct qla8044_minidump_template_hdr* md_tmplt_hdr; } ;
struct qla8044_minidump_template_hdr {int* saved_state_array; } ;
struct qla8044_minidump_entry_rdmem_pex_dma {int start_dma_cmd; int desc_card_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct scsi_qla_host*,scalar_t__,int*) ;
 int FUNC_1 (struct scsi_qla_host*,scalar_t__,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct scsi_qla_host *VAR_10,
 struct qla8044_minidump_entry_rdmem_pex_dma *VAR_11)
{
 struct qla_hw_data *VAR_12 = VAR_10->hw;
 int VAR_13 = VAR_9, VAR_14 = 0;
 uint32_t VAR_15 = 0, VAR_16 = 0;
 uint64_t VAR_17 = 0;
 struct qla8044_minidump_template_hdr *VAR_18 = ((void*)0);

 VAR_18 = VAR_12->md_tmplt_hdr;
 VAR_15 =
     VAR_18->saved_state_array[VAR_5];
 VAR_17 = VAR_1 +
  (VAR_15 * VAR_7);

 VAR_13 = FUNC_1(VAR_10,
     VAR_17 + VAR_3,
     VAR_11->desc_card_addr);
 if (VAR_13)
  goto error_exit;

 VAR_13 = FUNC_1(VAR_10,
     VAR_17 + VAR_2, 0);
 if (VAR_13)
  goto error_exit;

 VAR_13 = FUNC_1(VAR_10,
     VAR_17 + VAR_4,
     VAR_11->start_dma_cmd);
 if (VAR_13)
  goto error_exit;


 for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++) {
  VAR_13 = FUNC_0(VAR_10,
      (VAR_17 + VAR_4),
      &VAR_16);
  if (VAR_13)
   goto error_exit;

  if ((VAR_16 & VAR_0) == 0)
   break;

  FUNC_2(10);
 }


 if (VAR_14 >= VAR_6) {
  VAR_13 = VAR_8;
  goto error_exit;
 }

error_exit:
 return VAR_13;
}
