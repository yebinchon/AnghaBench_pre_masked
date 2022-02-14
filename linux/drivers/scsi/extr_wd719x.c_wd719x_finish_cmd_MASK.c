
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wd719x_scb {int phys; int list; struct scsi_cmnd* cmd; } ;
struct wd719x {TYPE_1__* pdev; } ;
struct TYPE_5__ {int dma_handle; } ;
struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;TYPE_2__ SCp; TYPE_3__* device; } ;
struct TYPE_6__ {int host; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct scsi_cmnd*) ;
 struct wd719x* FUNC_3 (int ) ;
 int FUNC_4 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_5(struct wd719x_scb *VAR_3, int VAR_4)
{
 struct scsi_cmnd *VAR_5 = VAR_3->cmd;
 struct wd719x *VAR_6 = FUNC_3(VAR_5->device->host);

 FUNC_1(&VAR_3->list);

 FUNC_0(&VAR_6->pdev->dev, VAR_3->phys,
   sizeof(struct wd719x_scb), VAR_0);
 FUNC_2(VAR_5);
 FUNC_0(&VAR_6->pdev->dev, VAR_5->SCp.dma_handle,
    VAR_2, VAR_1);

 VAR_5->result = VAR_4 << 16;
 VAR_5->scsi_done(VAR_5);
}
