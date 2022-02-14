
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct scsi_qla_host {TYPE_1__* isp_ops; scalar_t__ fw_dump_tmplt_hdr; } ;
struct qla4_8xxx_minidump_template_hdr {int* saved_state_array; } ;
struct qla4_83xx_minidump_entry_rdmem_pex_dma {int start_dma_cmd; int desc_card_addr; } ;
struct TYPE_2__ {int (* wr_reg_indirect ) (struct scsi_qla_host*,scalar_t__,int ) ;int (* rd_reg_indirect ) (struct scsi_qla_host*,scalar_t__,int*) ;} ;


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
 int FUNC_0 (struct scsi_qla_host*,scalar_t__,int ) ;
 int FUNC_1 (struct scsi_qla_host*,scalar_t__,int ) ;
 int FUNC_2 (struct scsi_qla_host*,scalar_t__,int ) ;
 int FUNC_3 (struct scsi_qla_host*,scalar_t__,int*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct scsi_qla_host *VAR_10,
      struct qla4_83xx_minidump_entry_rdmem_pex_dma *VAR_11)
{
 int VAR_12 = VAR_9, VAR_13 = 0;
 uint32_t VAR_14 = 0, VAR_15 = 0;
 uint64_t VAR_16 = 0;
 struct qla4_8xxx_minidump_template_hdr *VAR_17 = ((void*)0);

 VAR_17 = (struct qla4_8xxx_minidump_template_hdr *)
       VAR_10->fw_dump_tmplt_hdr;
 VAR_14 =
  VAR_17->saved_state_array[VAR_5];
 VAR_16 = VAR_1 +
    (VAR_14 * VAR_7);

 VAR_12 = VAR_10->isp_ops->wr_reg_indirect(VAR_10,
    VAR_16 + VAR_3,
    VAR_11->desc_card_addr);
 if (VAR_12)
  goto error_exit;

 VAR_12 = VAR_10->isp_ops->wr_reg_indirect(VAR_10,
         VAR_16 + VAR_2, 0);
 if (VAR_12)
  goto error_exit;

 VAR_12 = VAR_10->isp_ops->wr_reg_indirect(VAR_10,
         VAR_16 + VAR_4,
         VAR_11->start_dma_cmd);
 if (VAR_12)
  goto error_exit;


 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
  VAR_12 = VAR_10->isp_ops->rd_reg_indirect(VAR_10,
       (VAR_16 + VAR_4),
       &VAR_15);
  if (VAR_12)
   goto error_exit;

  if ((VAR_15 & VAR_0) == 0)
   break;
  else
   FUNC_4(10);
 }


 if (VAR_13 >= VAR_6) {
  VAR_12 = VAR_8;
  goto error_exit;
 }

error_exit:
 return VAR_12;
}
