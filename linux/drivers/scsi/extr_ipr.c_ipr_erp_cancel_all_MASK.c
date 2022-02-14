
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
struct ipr_resource_entry {int in_erp; } ;
struct ipr_cmd_pkt {int * cdb; int request_type; } ;
struct TYPE_3__ {struct ipr_cmd_pkt cmd_pkt; } ;
struct ipr_cmnd {TYPE_1__ ioarcb; struct scsi_cmnd* scsi_cmd; } ;
struct TYPE_4__ {int simple_tags; struct ipr_resource_entry* hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ipr_cmnd*) ;
 int FUNC_1 (struct ipr_cmnd*,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct ipr_cmnd*) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(struct ipr_cmnd *VAR_5)
{
 struct scsi_cmnd *VAR_6 = VAR_5->scsi_cmd;
 struct ipr_resource_entry *VAR_7 = VAR_6->device->hostdata;
 struct ipr_cmd_pkt *VAR_8;

 VAR_7->in_erp = 1;

 FUNC_2(VAR_5);

 if (!VAR_6->device->simple_tags) {
  FUNC_0(VAR_5);
  return;
 }

 VAR_8 = &VAR_5->ioarcb.cmd_pkt;
 VAR_8->request_type = VAR_2;
 VAR_8->cdb[0] = VAR_0;

 FUNC_1(VAR_5, VAR_3, VAR_4,
     VAR_1);
}
