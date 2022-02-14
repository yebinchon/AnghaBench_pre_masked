
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct se_hba {int hba_id; struct pscsi_hba_virt* hba_ptr; } ;
struct pscsi_hba_virt {int phv_mode; int phv_host_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct pscsi_hba_virt* FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int ,...) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct se_hba *VAR_5, u32 VAR_6)
{
 struct pscsi_hba_virt *VAR_7;

 VAR_7 = FUNC_0(sizeof(struct pscsi_hba_virt), VAR_1);
 if (!VAR_7) {
  FUNC_2("Unable to allocate struct pscsi_hba_virt\n");
  return -VAR_0;
 }
 VAR_7->phv_host_id = VAR_6;
 VAR_7->phv_mode = VAR_2;

 VAR_5->hba_ptr = VAR_7;

 FUNC_1("CORE_HBA[%d] - TCM SCSI HBA Driver %s on"
  " Generic Target Core Stack %s\n", VAR_5->hba_id,
  VAR_3, VAR_4);
 FUNC_1("CORE_HBA[%d] - Attached SCSI HBA to Generic\n",
        VAR_5->hba_id);

 return 0;
}
