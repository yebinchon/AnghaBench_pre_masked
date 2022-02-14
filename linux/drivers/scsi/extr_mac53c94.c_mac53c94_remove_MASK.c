
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macio_dev {int dummy; } ;
struct fsc_state {int dma_cmd_space; scalar_t__ dma; scalar_t__ regs; int intr; struct Scsi_Host* host; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (int ,struct fsc_state*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct macio_dev*) ;
 int FUNC_4 (struct macio_dev*) ;
 int FUNC_5 (struct Scsi_Host*) ;
 int FUNC_6 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_7(struct macio_dev *VAR_0)
{
 struct fsc_state *VAR_1 = (struct fsc_state *)FUNC_3(VAR_0);
 struct Scsi_Host *VAR_2 = VAR_1->host;

 FUNC_6(VAR_2);

 FUNC_0(VAR_1->intr, VAR_1);

 if (VAR_1->regs)
  FUNC_1(VAR_1->regs);
 if (VAR_1->dma)
  FUNC_1(VAR_1->dma);
 FUNC_2(VAR_1->dma_cmd_space);

 FUNC_5(VAR_2);

 FUNC_4(VAR_0);

 return 0;
}
