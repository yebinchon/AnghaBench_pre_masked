
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int this_residual; void* ptr; } ;
struct scsi_cmnd {TYPE_2__ SCp; TYPE_1__* device; } ;
struct gvp11_scsiregs {unsigned short CNTR; unsigned long ACR; int BANK; int ST_DMA; } ;
struct WD33C93_hostdata {unsigned long dma_xfer_mask; int dma_bounce_len; scalar_t__ dma_buffer_pool; int dma_dir; void* dma_bounce_buffer; } ;
struct gvp11_hostdata {struct gvp11_scsiregs* regs; struct WD33C93_hostdata wh; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_3__ {struct Scsi_Host* host; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 void* FUNC_0 (int,char*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (int,int ) ;
 int FUNC_6 (void*,void*,int ) ;
 struct gvp11_hostdata* FUNC_7 (struct Scsi_Host*) ;
 unsigned long FUNC_8 (void*) ;

__attribute__((used)) static int FUNC_9(struct scsi_cmnd *VAR_5, int VAR_6)
{
 struct Scsi_Host *VAR_7 = VAR_5->device->host;
 struct gvp11_hostdata *VAR_8 = FUNC_7(VAR_7);
 struct WD33C93_hostdata *VAR_9 = &VAR_8->wh;
 struct gvp11_scsiregs *VAR_10 = VAR_8->regs;
 unsigned short VAR_11 = VAR_4;
 unsigned long VAR_12 = FUNC_8(VAR_5->SCp.ptr);
 int VAR_13;
 static int VAR_14 = 0;


 if (VAR_12 & VAR_9->dma_xfer_mask) {
  VAR_9->dma_bounce_len = (VAR_5->SCp.this_residual + 511) & ~0x1ff;

  if (!VAR_14) {
   VAR_9->dma_bounce_buffer =
    FUNC_5(VAR_9->dma_bounce_len, VAR_2);
   VAR_9->dma_buffer_pool = VAR_1;
  }

  if (VAR_14 ||
      !VAR_9->dma_bounce_buffer) {
   VAR_9->dma_bounce_buffer =
    FUNC_0(VAR_9->dma_bounce_len,
       "GVP II SCSI Bounce Buffer");

   if (!VAR_9->dma_bounce_buffer) {
    VAR_9->dma_bounce_len = 0;
    return 1;
   }

   VAR_9->dma_buffer_pool = VAR_0;
  }


  VAR_12 = FUNC_8(VAR_9->dma_bounce_buffer);

  if (VAR_12 & VAR_9->dma_xfer_mask) {

   if (VAR_9->dma_buffer_pool == VAR_1) {
    FUNC_4(VAR_9->dma_bounce_buffer);
    VAR_14 = 1;
   } else {
    FUNC_1(VAR_9->dma_bounce_buffer);
   }

   VAR_9->dma_bounce_buffer =
    FUNC_0(VAR_9->dma_bounce_len,
       "GVP II SCSI Bounce Buffer");

   if (!VAR_9->dma_bounce_buffer) {
    VAR_9->dma_bounce_len = 0;
    return 1;
   }

   VAR_12 = FUNC_8(VAR_9->dma_bounce_buffer);
   VAR_9->dma_buffer_pool = VAR_0;
  }

  if (!VAR_6) {

   FUNC_6(VAR_9->dma_bounce_buffer, VAR_5->SCp.ptr,
          VAR_5->SCp.this_residual);
  }
 }


 if (!VAR_6)
  VAR_11 |= VAR_3;

 VAR_9->dma_dir = VAR_6;
 VAR_10->CNTR = VAR_11;


 VAR_10->ACR = VAR_12;

 if (VAR_6) {

  FUNC_2(VAR_12, VAR_5->SCp.this_residual);
 } else {

  FUNC_3(VAR_12, VAR_5->SCp.this_residual);
 }

 VAR_13 = (~VAR_9->dma_xfer_mask >> 18) & 0x01c0;
 if (VAR_13)
  VAR_10->BANK = VAR_13 & (VAR_12 >> 18);


 VAR_10->ST_DMA = 1;


 return 0;
}
