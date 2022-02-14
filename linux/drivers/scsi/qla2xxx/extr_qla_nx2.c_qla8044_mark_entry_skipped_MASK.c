
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_qla_host {int host_no; } ;
struct TYPE_2__ {int entry_capture_mask; int driver_flags; } ;
struct qla8044_minidump_entry_hdr {TYPE_1__ d_ctrl; int entry_type; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct scsi_qla_host*,int,char*,int ,int,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct scsi_qla_host *VAR_2,
 struct qla8044_minidump_entry_hdr *VAR_3, int VAR_4)
{
 VAR_3->d_ctrl.driver_flags |= VAR_0;

 FUNC_0(VAR_1, VAR_2, 0xb0f7,
     "scsi(%ld): Skipping entry[%d]: ETYPE[0x%x]-ELEVEL[0x%x]\n",
     VAR_2->host_no, VAR_4, VAR_3->entry_type,
     VAR_3->d_ctrl.entry_capture_mask);
}
