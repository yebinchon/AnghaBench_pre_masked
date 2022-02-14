
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int ptr; scalar_t__ this_residual; scalar_t__ buffers_residual; TYPE_5__* buffer; } ;
struct scsi_cmnd {TYPE_3__ SCp; TYPE_2__* device; } ;
struct TYPE_10__ {int FifoCount; int TransferMode; int CmdId; } ;
typedef TYPE_4__ nsp_hw_data ;
struct TYPE_11__ {scalar_t__ length; } ;
struct TYPE_8__ {TYPE_1__* host; } ;
struct TYPE_7__ {unsigned int io_port; unsigned long base; scalar_t__ hostdata; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (unsigned int,int,int) ;
 int FUNC_4 (unsigned int,int,int) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (struct scsi_cmnd*,int) ;
 unsigned char FUNC_7 (unsigned int,int ) ;
 int FUNC_8 (unsigned long,int,int) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (struct scsi_cmnd*) ;
 TYPE_5__* FUNC_11 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_12(struct scsi_cmnd *VAR_7)
{
 unsigned int VAR_8 = VAR_7->device->host->io_port;
 unsigned long VAR_9 = VAR_7->device->host->base;
 nsp_hw_data *VAR_10 = (nsp_hw_data *)VAR_7->device->host->hostdata;
 int VAR_11;
 int VAR_12, VAR_13;
 unsigned char VAR_14;

 VAR_12 = VAR_10->FifoCount;

 FUNC_2(VAR_4, "in fifocount=%d ptr=0x%p this_residual=%d buffers=0x%p nbuf=%d resid=0x%x",
  VAR_10->FifoCount, VAR_7->SCp.ptr, VAR_7->SCp.this_residual,
  VAR_7->SCp.buffer, VAR_7->SCp.buffers_residual,
  FUNC_10(VAR_7));

 VAR_11 = 1000;

 while ((VAR_11-- != 0) &&
        (VAR_7->SCp.this_residual > 0 || VAR_7->SCp.buffers_residual > 0)) {
  VAR_14 = FUNC_7(VAR_8, VAR_5);
  VAR_14 &= VAR_1;

  if (VAR_14 != VAR_2) {
   VAR_13 = VAR_12 - FUNC_5(VAR_7);

   FUNC_2(VAR_4, "phase changed stat=0x%x, res=%d\n", VAR_14, VAR_13);

   FUNC_6(VAR_7, VAR_13);
   VAR_7->SCp.ptr -= VAR_13;
   VAR_7->SCp.this_residual += VAR_13;
   VAR_12 -= VAR_13;

   break;
  }

  VAR_13 = VAR_12 - FUNC_5(VAR_7);
  if (VAR_13 > 0) {
   FUNC_2(VAR_4, "wait for all data out. ocount=0x%x res=%d", VAR_12, VAR_13);
   continue;
  }

  VAR_13 = FUNC_1(VAR_7->SCp.this_residual, VAR_6);


  switch (VAR_10->TransferMode) {
  case 130:
   VAR_13 &= ~(FUNC_0(1)|FUNC_0(0));
   FUNC_3(VAR_8, VAR_7->SCp.ptr, VAR_13 >> 2);
   break;
  case 129:
   FUNC_4 (VAR_8, VAR_7->SCp.ptr, VAR_13 );
   break;

  case 128:
   VAR_13 &= ~(FUNC_0(1)|FUNC_0(0));
   FUNC_8(VAR_9, VAR_7->SCp.ptr, VAR_13 >> 2);
   break;

  default:
   FUNC_2(VAR_4, "unknown write mode");
   break;
  }

  FUNC_6(VAR_7, -VAR_13);
  VAR_7->SCp.ptr += VAR_13;
  VAR_7->SCp.this_residual -= VAR_13;
  VAR_12 += VAR_13;


  if (VAR_7->SCp.this_residual == 0 &&
      VAR_7->SCp.buffers_residual != 0 ) {

   VAR_7->SCp.buffers_residual--;
   VAR_7->SCp.buffer = FUNC_11(VAR_7->SCp.buffer);
   VAR_7->SCp.ptr = VAR_0;
   VAR_7->SCp.this_residual = VAR_7->SCp.buffer->length;
   VAR_11 = 1000;
  }
 }

 VAR_10->FifoCount = VAR_12;

 if (VAR_11 < 0) {
  FUNC_9(VAR_3, "pio write timeout resid=0x%x",
                                          FUNC_10(VAR_7));
 }
 FUNC_2(VAR_4, "write ocount=0x%x", VAR_12);
 FUNC_2(VAR_4, "w cmd=%d resid=0x%x\n", VAR_10->CmdId,
                                                 FUNC_10(VAR_7));
}
