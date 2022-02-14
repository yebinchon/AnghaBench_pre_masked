
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;
struct lpfc_nodelist {int dummy; } ;
struct lpfc_io_buf {int dummy; } ;
struct lpfc_hba {struct lpfc_io_buf* (* lpfc_get_scsi_buf ) (struct lpfc_hba*,struct lpfc_nodelist*,struct scsi_cmnd*) ;} ;


 struct lpfc_io_buf* FUNC_0 (struct lpfc_hba*,struct lpfc_nodelist*,struct scsi_cmnd*) ;

__attribute__((used)) static struct lpfc_io_buf*
FUNC_1(struct lpfc_hba *VAR_0, struct lpfc_nodelist *VAR_1,
    struct scsi_cmnd *VAR_2)
{
 return VAR_0->lpfc_get_scsi_buf(VAR_0, VAR_1, VAR_2);
}
