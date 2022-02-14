
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int this_residual; int * ptr; } ;
struct scsi_cmnd {TYPE_2__ SCp; TYPE_1__* device; } ;
struct a2091_scsiregs {unsigned short CNTR; unsigned long ACR; int ST_DMA; } ;
struct WD33C93_hostdata {int dma_bounce_len; int dma_dir; int * dma_bounce_buffer; } ;
struct a2091_hostdata {struct a2091_scsiregs* regs; struct WD33C93_hostdata wh; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_3__ {struct Scsi_Host* host; } ;


 unsigned long VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 struct a2091_hostdata* FUNC_5 (struct Scsi_Host*) ;
 unsigned long FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct scsi_cmnd *VAR_5, int VAR_6)
{
 struct Scsi_Host *VAR_7 = VAR_5->device->host;
 struct a2091_hostdata *VAR_8 = FUNC_5(VAR_7);
 struct WD33C93_hostdata *VAR_9 = &VAR_8->wh;
 struct a2091_scsiregs *VAR_10 = VAR_8->regs;
 unsigned short VAR_11 = VAR_3 | VAR_2;
 unsigned long VAR_12 = FUNC_6(VAR_5->SCp.ptr);


 if (VAR_12 & VAR_0) {
  VAR_9->dma_bounce_len = (VAR_5->SCp.this_residual + 511) & ~0x1ff;
  VAR_9->dma_bounce_buffer = FUNC_3(VAR_9->dma_bounce_len,
      VAR_4);


  if (!VAR_9->dma_bounce_buffer) {
   VAR_9->dma_bounce_len = 0;
   return 1;
  }


  VAR_12 = FUNC_6(VAR_9->dma_bounce_buffer);


  if (VAR_12 & VAR_0) {

   FUNC_2(VAR_9->dma_bounce_buffer);
   VAR_9->dma_bounce_buffer = ((void*)0);
   VAR_9->dma_bounce_len = 0;
   return 1;
  }

  if (!VAR_6) {

   FUNC_4(VAR_9->dma_bounce_buffer, VAR_5->SCp.ptr,
          VAR_5->SCp.this_residual);
  }
 }


 if (!VAR_6)
  VAR_11 |= VAR_1;


 VAR_9->dma_dir = VAR_6;

 VAR_10->CNTR = VAR_11;


 VAR_10->ACR = VAR_12;

 if (VAR_6) {

  FUNC_0(VAR_12, VAR_5->SCp.this_residual);
 } else {

  FUNC_1(VAR_12, VAR_5->SCp.this_residual);
 }

 VAR_10->ST_DMA = 1;


 return 0;
}
