
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_hba {int hba_id; struct pscsi_hba_virt* hba_ptr; } ;
struct pscsi_hba_virt {int phv_mode; struct Scsi_Host* phv_lld_host; int phv_host_id; } ;
struct Scsi_Host {TYPE_1__* hostt; } ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (char*,int ) ;
 struct Scsi_Host* FUNC_2 (int ) ;
 int FUNC_3 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_4(struct se_hba *VAR_3, unsigned long VAR_4)
{
 struct pscsi_hba_virt *VAR_5 = VAR_3->hba_ptr;
 struct Scsi_Host *VAR_6 = VAR_5->phv_lld_host;



 if (!VAR_4) {
  if (!VAR_6)
   return 0;

  VAR_5->phv_lld_host = ((void*)0);
  VAR_5->phv_mode = VAR_2;

  FUNC_0("CORE_HBA[%d] - Disabled pSCSI HBA Passthrough"
   " %s\n", VAR_3->hba_id, (VAR_6->hostt->name) ?
   (VAR_6->hostt->name) : "Unknown");

  FUNC_3(VAR_6);
  return 0;
 }




 VAR_6 = FUNC_2(VAR_5->phv_host_id);
 if (!VAR_6) {
  FUNC_1("pSCSI: Unable to locate SCSI Host for"
   " phv_host_id: %d\n", VAR_5->phv_host_id);
  return -VAR_0;
 }

 VAR_5->phv_lld_host = VAR_6;
 VAR_5->phv_mode = VAR_1;

 FUNC_0("CORE_HBA[%d] - Enabled pSCSI HBA Passthrough %s\n",
  VAR_3->hba_id, (VAR_6->hostt->name) ? (VAR_6->hostt->name) : "Unknown");

 return 1;
}
