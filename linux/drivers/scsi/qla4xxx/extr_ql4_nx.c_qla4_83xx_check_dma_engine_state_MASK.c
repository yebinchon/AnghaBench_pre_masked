
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct scsi_qla_host {TYPE_1__* isp_ops; scalar_t__ fw_dump_tmplt_hdr; } ;
struct qla4_8xxx_minidump_template_hdr {int* saved_state_array; } ;
struct TYPE_2__ {int (* rd_reg_indirect ) (struct scsi_qla_host*,scalar_t__,int*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct scsi_qla_host*,scalar_t__,int*) ;

__attribute__((used)) static int FUNC_1(struct scsi_qla_host *VAR_7)
{
 int VAR_8 = VAR_6;
 uint32_t VAR_9 = 0, VAR_10 = 0;
 uint64_t VAR_11 = 0;
 struct qla4_8xxx_minidump_template_hdr *VAR_12 = ((void*)0);

 VAR_12 = (struct qla4_8xxx_minidump_template_hdr *)
       VAR_7->fw_dump_tmplt_hdr;
 VAR_9 =
  VAR_12->saved_state_array[VAR_3];
 VAR_11 = VAR_1 +
    (VAR_9 * VAR_4);


 VAR_8 = VAR_7->isp_ops->rd_reg_indirect(VAR_7,
   (VAR_11 + VAR_2),
   &VAR_10);

 if (VAR_8)
  return VAR_5;


 if (VAR_10 & VAR_0)
  return VAR_6;
 else
  return VAR_5;
}
