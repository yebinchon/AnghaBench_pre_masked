
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_qla_host {int fw_dump_skip_size; int host_no; } ;
struct TYPE_2__ {int entry_capture_mask; int driver_flags; } ;
struct qla8xxx_minidump_entry_hdr {scalar_t__ entry_capture_size; TYPE_1__ d_ctrl; int entry_type; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct scsi_qla_host*,char*,int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct scsi_qla_host *VAR_2,
    struct qla8xxx_minidump_entry_hdr *VAR_3,
    int VAR_4)
{
 VAR_3->d_ctrl.driver_flags |= VAR_1;
 FUNC_0(FUNC_1(VAR_0, VAR_2,
     "scsi(%ld): Skipping entry[%d]: ETYPE[0x%x]-ELEVEL[0x%x]\n",
     VAR_2->host_no, VAR_4, VAR_3->entry_type,
     VAR_3->d_ctrl.entry_capture_mask));




 VAR_2->fw_dump_skip_size += VAR_3->entry_capture_size;
}
