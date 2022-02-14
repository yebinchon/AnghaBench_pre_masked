
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct scsi_qla_host {TYPE_1__* isp_ops; } ;
struct qla8xxx_minidump_entry_hdr {int dummy; } ;
struct qla83xx_minidump_entry_rdmux2 {scalar_t__ op_count; scalar_t__ select_value_stride; int read_addr; int select_value_mask; int select_addr_2; int select_addr_1; int select_value_2; int select_value_1; } ;
struct TYPE_2__ {int (* rd_reg_indirect ) (struct scsi_qla_host*,scalar_t__,scalar_t__*) ;int (* wr_reg_indirect ) (struct scsi_qla_host*,scalar_t__,scalar_t__) ;} ;


 void* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct scsi_qla_host*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct scsi_qla_host*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct scsi_qla_host*,scalar_t__,scalar_t__*) ;
 int FUNC_5 (struct scsi_qla_host*,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct scsi_qla_host*,scalar_t__,scalar_t__) ;
 int FUNC_7 (struct scsi_qla_host*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static void FUNC_8(struct scsi_qla_host *VAR_0,
    struct qla8xxx_minidump_entry_hdr *VAR_1,
    uint32_t **VAR_2)
{
 uint32_t VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
 uint32_t VAR_8, VAR_9, VAR_10, VAR_11;
 struct qla83xx_minidump_entry_rdmux2 *VAR_12;
 uint32_t *VAR_13 = *VAR_2;

 VAR_12 = (struct qla83xx_minidump_entry_rdmux2 *)VAR_1;
 VAR_3 = FUNC_1(VAR_12->select_value_1);
 VAR_4 = FUNC_1(VAR_12->select_value_2);
 VAR_8 = FUNC_1(VAR_12->select_addr_1);
 VAR_9 = FUNC_1(VAR_12->select_addr_2);
 VAR_10 = FUNC_1(VAR_12->select_value_mask);
 VAR_11 = FUNC_1(VAR_12->read_addr);

 for (VAR_7 = 0; VAR_7 < VAR_12->op_count; VAR_7++) {
  VAR_0->isp_ops->wr_reg_indirect(VAR_0, VAR_8, VAR_3);
  VAR_5 = VAR_3 & VAR_10;
  *VAR_13++ = FUNC_0(VAR_5);

  VAR_0->isp_ops->wr_reg_indirect(VAR_0, VAR_9, VAR_5);
  VAR_0->isp_ops->rd_reg_indirect(VAR_0, VAR_11, &VAR_6);

  *VAR_13++ = FUNC_0(VAR_6);

  VAR_0->isp_ops->wr_reg_indirect(VAR_0, VAR_8, VAR_4);
  VAR_5 = VAR_4 & VAR_10;
  *VAR_13++ = FUNC_0(VAR_5);

  VAR_0->isp_ops->wr_reg_indirect(VAR_0, VAR_9, VAR_5);
  VAR_0->isp_ops->rd_reg_indirect(VAR_0, VAR_11, &VAR_6);

  *VAR_13++ = FUNC_0(VAR_6);

  VAR_3 += VAR_12->select_value_stride;
  VAR_4 += VAR_12->select_value_stride;
 }

 *VAR_2 = VAR_13;
}
