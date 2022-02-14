
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int seq_end; } ;
struct scsi_qla_host {TYPE_1__ reset_tmplt; } ;
struct qla4_83xx_reset_entry_hdr {int dummy; } ;



__attribute__((used)) static void FUNC_0(struct scsi_qla_host *VAR_0,
         struct qla4_83xx_reset_entry_hdr *VAR_1)
{
 VAR_0->reset_tmplt.seq_end = 1;
}
