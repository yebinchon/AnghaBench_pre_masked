
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int overrun_buf; int overrun_dma; } ;
struct TYPE_4__ {TYPE_1__ asc_dvc_var; } ;
struct asc_board {int ioremap_addr; TYPE_2__ dvc_var; int dev; int irq; } ;
struct Scsi_Host {scalar_t__ dma_channel; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (struct asc_board*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct asc_board*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,struct Scsi_Host*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct Scsi_Host*) ;
 int FUNC_9 (struct Scsi_Host*) ;
 struct asc_board* FUNC_10 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_11(struct Scsi_Host *VAR_3)
{
 struct asc_board *VAR_4 = FUNC_10(VAR_3);
 FUNC_0(1, "begin\n");
 FUNC_9(VAR_3);
 FUNC_5(VAR_4->irq, VAR_3);






 if (FUNC_1(VAR_4)) {
  FUNC_3(VAR_4->dev,
     VAR_4->dvc_var.asc_dvc_var.overrun_dma,
     VAR_0, VAR_1);
  FUNC_7(VAR_4->dvc_var.asc_dvc_var.overrun_buf);
 } else {
  FUNC_6(VAR_4->ioremap_addr);
  FUNC_2(VAR_4);
 }
 FUNC_8(VAR_3);
 FUNC_0(1, "end\n");
 return 0;
}
