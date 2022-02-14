
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct scsi_qla_host {int dummy; } ;
struct qla8044_minidump_entry_rdmdio {int addr_1; int addr_2; int value_1; int stride_1; int stride_2; scalar_t__ count; int mask; int value_2; } ;
struct qla8044_minidump_entry_hdr {int dummy; } ;


 int FUNC_0 (struct scsi_qla_host*,int,int,int,int) ;
 int FUNC_1 (struct scsi_qla_host*,int,int,int,int,int) ;
 int FUNC_2 (struct scsi_qla_host*,int,int,int,int) ;

__attribute__((used)) static uint32_t
FUNC_3(struct scsi_qla_host *VAR_0,
 struct qla8044_minidump_entry_hdr *VAR_1, uint32_t **VAR_2)
{
 int VAR_3 = 0;
 uint32_t VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 uint8_t VAR_10, VAR_11;
 uint32_t VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 uint16_t VAR_17, VAR_18;
 uint32_t VAR_19;
 uint32_t *VAR_20 = *VAR_2;

 struct qla8044_minidump_entry_rdmdio *VAR_21;

 VAR_21 = (struct qla8044_minidump_entry_rdmdio *) VAR_1;

 VAR_4 = VAR_21->addr_1;
 VAR_5 = VAR_21->addr_2;
 VAR_6 = VAR_21->value_1;
 VAR_10 = VAR_21->stride_1;
 VAR_11 = VAR_21->stride_2;
 VAR_17 = VAR_21->count;

 VAR_19 = VAR_21->mask;
 VAR_7 = VAR_21->value_2;

 VAR_12 = VAR_4 + VAR_10;

 for (VAR_18 = 0; VAR_18 < VAR_17; VAR_18++) {
  VAR_3 = FUNC_2(VAR_0, VAR_4, VAR_5,
      VAR_12, VAR_19);
  if (VAR_3 == -1)
   goto error;

  VAR_13 = VAR_5 - VAR_10;
  VAR_3 = FUNC_1(VAR_0, VAR_4, VAR_12, VAR_19, VAR_13,
      VAR_7);
  if (VAR_3 == -1)
   goto error;

  VAR_14 = VAR_5 - (2 * VAR_10);
  VAR_3 = FUNC_1(VAR_0, VAR_4, VAR_12, VAR_19, VAR_14,
      VAR_6);
  if (VAR_3 == -1)
   goto error;

  VAR_15 = VAR_5 - (3 * VAR_10);
  VAR_3 = FUNC_1(VAR_0, VAR_4, VAR_12, VAR_19,
      VAR_15, 0x2);
  if (VAR_3 == -1)
   goto error;

  VAR_3 = FUNC_2(VAR_0, VAR_4, VAR_5,
      VAR_12, VAR_19);
  if (VAR_3 == -1)
   goto error;

  VAR_16 = VAR_5 - (4 * VAR_10);
  VAR_8 = FUNC_0(VAR_0, VAR_4, VAR_12, VAR_19, VAR_16);
  if (VAR_8 == -1)
   goto error;

  VAR_9 = (VAR_7 << 18) | (VAR_6 << 2) | 2;

  VAR_11 = VAR_21->stride_2;
  *VAR_20++ = VAR_9;
  *VAR_20++ = VAR_8;

  VAR_6 = VAR_6 + VAR_11;
  *VAR_2 = VAR_20;
 }

 return 0;

error:
 return -1;
}
