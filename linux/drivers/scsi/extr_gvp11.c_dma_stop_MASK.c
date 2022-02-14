
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int this_residual; int ptr; } ;
struct scsi_cmnd {TYPE_1__ SCp; } ;
struct gvp11_scsiregs {int SP_DMA; int CNTR; } ;
struct WD33C93_hostdata {scalar_t__ dma_buffer_pool; scalar_t__ dma_bounce_len; int * dma_bounce_buffer; scalar_t__ dma_dir; } ;
struct gvp11_hostdata {struct gvp11_scsiregs* regs; struct WD33C93_hostdata wh; } ;
struct Scsi_Host {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int ) ;
 struct gvp11_hostdata* FUNC_3 (struct Scsi_Host*) ;

__attribute__((used)) static void FUNC_4(struct Scsi_Host *VAR_2, struct scsi_cmnd *VAR_3,
       int VAR_4)
{
 struct gvp11_hostdata *VAR_5 = FUNC_3(VAR_2);
 struct WD33C93_hostdata *VAR_6 = &VAR_5->wh;
 struct gvp11_scsiregs *VAR_7 = VAR_5->regs;


 VAR_7->SP_DMA = 1;

 VAR_7->CNTR = VAR_1;


 if (VAR_4 && VAR_6->dma_bounce_buffer) {
  if (VAR_6->dma_dir && VAR_3)
   FUNC_2(VAR_3->SCp.ptr, VAR_6->dma_bounce_buffer,
          VAR_3->SCp.this_residual);

  if (VAR_6->dma_buffer_pool == VAR_0)
   FUNC_1(VAR_6->dma_bounce_buffer);
  else
   FUNC_0(VAR_6->dma_bounce_buffer);

  VAR_6->dma_bounce_buffer = ((void*)0);
  VAR_6->dma_bounce_len = 0;
 }
}
