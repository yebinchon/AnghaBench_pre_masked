
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct scsi_qla_host {int dummy; } ;
struct qla8044_minidump_entry_rdmux2 {scalar_t__ select_value_1; scalar_t__ select_value_2; scalar_t__ select_addr_1; scalar_t__ select_addr_2; scalar_t__ select_value_mask; scalar_t__ read_addr; scalar_t__ op_count; scalar_t__ select_value_stride; } ;
struct qla8044_minidump_entry_hdr {int dummy; } ;


 int FUNC_0 (struct scsi_qla_host*,scalar_t__,scalar_t__*) ;
 int FUNC_1 (struct scsi_qla_host*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct scsi_qla_host *VAR_0,
 struct qla8044_minidump_entry_hdr *VAR_1, uint32_t **VAR_2)
{
 uint32_t VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
 uint32_t VAR_8, VAR_9, VAR_10, VAR_11;
 struct qla8044_minidump_entry_rdmux2 *VAR_12;
 uint32_t *VAR_13 = *VAR_2;

 VAR_12 = (struct qla8044_minidump_entry_rdmux2 *) VAR_1;
 VAR_3 = VAR_12->select_value_1;
 VAR_4 = VAR_12->select_value_2;
 VAR_8 = VAR_12->select_addr_1;
 VAR_9 = VAR_12->select_addr_2;
 VAR_10 = VAR_12->select_value_mask;
 VAR_11 = VAR_12->read_addr;

 for (VAR_7 = 0; VAR_7 < VAR_12->op_count; VAR_7++) {
  FUNC_1(VAR_0, VAR_8, VAR_3);
  VAR_5 = VAR_3 & VAR_10;
  *VAR_13++ = VAR_5;

  FUNC_1(VAR_0, VAR_9, VAR_5);
  FUNC_0(VAR_0, VAR_11, &VAR_6);

  *VAR_13++ = VAR_6;

  FUNC_1(VAR_0, VAR_8, VAR_4);
  VAR_5 = VAR_4 & VAR_10;
  *VAR_13++ = VAR_5;

  FUNC_1(VAR_0, VAR_9, VAR_5);
  FUNC_0(VAR_0, VAR_11, &VAR_6);

  *VAR_13++ = VAR_6;

  VAR_3 += VAR_12->select_value_stride;
  VAR_4 += VAR_12->select_value_stride;
 }

 *VAR_2 = VAR_13;
}
