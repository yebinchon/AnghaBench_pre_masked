
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct scsi_qla_host {int dummy; } ;
struct qla8xxx_minidump_entry_hdr {int dummy; } ;
struct qla8044_minidump_entry_rdmdio {int stride_2; int value_2; int mask; int poll; int count; int stride_1; int value_1; int addr_2; int addr_1; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct scsi_qla_host*,int,int,int,int,int*) ;
 int FUNC_3 (struct scsi_qla_host*,int,int,int,int,int) ;
 int FUNC_4 (struct scsi_qla_host*,int,int,int,int) ;

__attribute__((used)) static uint32_t FUNC_5(struct scsi_qla_host *VAR_1,
    struct qla8xxx_minidump_entry_hdr *VAR_2,
    uint32_t **VAR_3)
{
 int VAR_4 = VAR_0;
 uint32_t VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 uint8_t VAR_11, VAR_12;
 uint32_t VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 uint16_t VAR_18, VAR_19;
 uint32_t VAR_20, VAR_21;
 uint32_t *VAR_22 = *VAR_3;
 struct qla8044_minidump_entry_rdmdio *VAR_23;

 VAR_23 = (struct qla8044_minidump_entry_rdmdio *)VAR_2;
 VAR_5 = FUNC_1(VAR_23->addr_1);
 VAR_6 = FUNC_1(VAR_23->addr_2);
 VAR_7 = FUNC_1(VAR_23->value_1);
 VAR_11 = FUNC_1(VAR_23->stride_1);
 VAR_12 = FUNC_1(VAR_23->stride_2);
 VAR_18 = FUNC_1(VAR_23->count);

 VAR_20 = FUNC_1(VAR_23->poll);
 VAR_21 = FUNC_1(VAR_23->mask);
 VAR_8 = FUNC_1(VAR_23->value_2);

 VAR_13 = VAR_5 + VAR_11;

 for (VAR_19 = 0; VAR_19 < VAR_18; VAR_19++) {
  VAR_4 = FUNC_4(VAR_1, VAR_5, VAR_6,
        VAR_13, VAR_21);
  if (VAR_4)
   goto exit_process_rdmdio;

  VAR_14 = VAR_6 - VAR_11;
  VAR_4 = FUNC_3(VAR_1, VAR_5, VAR_13, VAR_21, VAR_14,
          VAR_8);
  if (VAR_4)
   goto exit_process_rdmdio;

  VAR_15 = VAR_6 - (2 * VAR_11);
  VAR_4 = FUNC_3(VAR_1, VAR_5, VAR_13, VAR_21, VAR_15,
          VAR_7);
  if (VAR_4)
   goto exit_process_rdmdio;

  VAR_16 = VAR_6 - (3 * VAR_11);
  VAR_4 = FUNC_3(VAR_1, VAR_5, VAR_13, VAR_21,
          VAR_16, 0x2);
  if (VAR_4)
   goto exit_process_rdmdio;

  VAR_4 = FUNC_4(VAR_1, VAR_5, VAR_6,
        VAR_13, VAR_21);
  if (VAR_4)
   goto exit_process_rdmdio;

  VAR_17 = VAR_6 - (4 * VAR_11);
  VAR_4 = FUNC_2(VAR_1, VAR_5, VAR_13,
            VAR_21, VAR_17, &VAR_9);
  if (VAR_4)
   goto exit_process_rdmdio;

  VAR_10 = (VAR_8 << 18) | (VAR_7 << 2) | 2;

  VAR_12 = FUNC_1(VAR_23->stride_2);
  *VAR_22++ = FUNC_0(VAR_10);
  *VAR_22++ = FUNC_0(VAR_9);

  VAR_7 = VAR_7 + VAR_12;
  *VAR_3 = VAR_22;
 }

exit_process_rdmdio:
 return VAR_4;
}
