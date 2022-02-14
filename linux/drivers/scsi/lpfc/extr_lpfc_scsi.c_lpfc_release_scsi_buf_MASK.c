
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_io_buf {int flags; TYPE_1__* ndlp; } ;
struct lpfc_hba {int (* lpfc_release_scsi_buf ) (struct lpfc_hba*,struct lpfc_io_buf*) ;} ;
struct TYPE_2__ {int cmd_pending; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_io_buf*) ;

__attribute__((used)) static void
FUNC_2(struct lpfc_hba *VAR_1, struct lpfc_io_buf *VAR_2)
{
 if ((VAR_2->flags & VAR_0) && VAR_2->ndlp)
  FUNC_0(&VAR_2->ndlp->cmd_pending);

 VAR_2->flags &= ~VAR_0;
 VAR_1->lpfc_release_scsi_buf(VAR_1, VAR_2);
}
