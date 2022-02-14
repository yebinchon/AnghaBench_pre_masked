
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct scsi_qla_host {TYPE_2__* isp_ops; } ;
struct qla8xxx_minidump_entry_hdr {int dummy; } ;
struct TYPE_8__ {scalar_t__ init_tag_value; scalar_t__ tag_value_stride; } ;
struct TYPE_7__ {scalar_t__ read_addr_cnt; scalar_t__ read_addr_stride; } ;
struct TYPE_5__ {scalar_t__ write_value; } ;
struct qla8xxx_minidump_entry_cache {scalar_t__ op_count; scalar_t__ read_addr; scalar_t__ control_addr; scalar_t__ tag_reg_addr; TYPE_4__ addr_ctrl; TYPE_3__ read_ctrl; TYPE_1__ cache_ctrl; } ;
struct TYPE_6__ {int (* rd_reg_indirect ) (struct scsi_qla_host*,scalar_t__,scalar_t__*) ;int (* wr_reg_indirect ) (struct scsi_qla_host*,scalar_t__,scalar_t__) ;} ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct scsi_qla_host*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct scsi_qla_host*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct scsi_qla_host*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static void FUNC_4(struct scsi_qla_host *VAR_0,
    struct qla8xxx_minidump_entry_hdr *VAR_1,
    uint32_t **VAR_2)
{
 uint32_t VAR_3, VAR_4, VAR_5, VAR_6;
 uint32_t VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 uint32_t VAR_13;
 struct qla8xxx_minidump_entry_cache *VAR_14;
 uint32_t *VAR_15 = *VAR_2;

 VAR_14 = (struct qla8xxx_minidump_entry_cache *)VAR_1;
 VAR_9 = VAR_14->op_count;
 VAR_4 = VAR_14->read_addr;
 VAR_5 = VAR_14->control_addr;
 VAR_13 = VAR_14->cache_ctrl.write_value;

 VAR_6 = VAR_14->tag_reg_addr;
 VAR_10 = VAR_14->addr_ctrl.init_tag_value;
 VAR_11 = VAR_14->read_ctrl.read_addr_cnt;

 for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
  VAR_0->isp_ops->wr_reg_indirect(VAR_0, VAR_6, VAR_10);
  VAR_0->isp_ops->wr_reg_indirect(VAR_0, VAR_5, VAR_13);
  VAR_3 = VAR_4;
  for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++) {
   VAR_0->isp_ops->rd_reg_indirect(VAR_0, VAR_3, &VAR_12);
   *VAR_15++ = FUNC_0(VAR_12);
   VAR_3 += VAR_14->read_ctrl.read_addr_stride;
  }
  VAR_10 += VAR_14->addr_ctrl.tag_value_stride;
 }
 *VAR_2 = VAR_15;
}
