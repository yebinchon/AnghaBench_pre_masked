
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct st_request {int * sense; } ;
struct st_partstat {scalar_t__ eof; int drv_block; scalar_t__ at_sm; } ;
struct st_modedef {scalar_t__ do_read_ahead; } ;
struct TYPE_4__ {scalar_t__ sense_key; } ;
struct st_cmdstatus {int flags; scalar_t__ residual; TYPE_1__ sense_hdr; scalar_t__ uremainder64; scalar_t__ remainder_valid; scalar_t__ have_sense; } ;
struct st_buffer {int buffer_blocks; int buffer_size; long syscall_result; int buffer_bytes; struct st_cmdstatus cmdstat; scalar_t__ read_pointer; int do_dio; } ;
struct scsi_tape {size_t current_mode; size_t partition; int block_size; struct st_buffer* buffer; scalar_t__ sili; TYPE_3__* device; scalar_t__ try_dio_now; struct st_partstat* ps; struct st_modedef* modes; } ;
struct TYPE_6__ {TYPE_2__* request_queue; } ;
struct TYPE_5__ {int rq_timeout; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct scsi_tape*,char*,...) ;
 int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 unsigned char VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 void* VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (struct scsi_tape*,int) ;
 struct st_request* FUNC_3 (struct st_request*,struct scsi_tape*,unsigned char*,int,int ,int ,int ,int) ;
 scalar_t__ FUNC_4 (struct scsi_tape*,int ,int) ;
 int FUNC_5 (int ,struct scsi_tape*,char*,...) ;
 int FUNC_6 (struct st_request*) ;
 scalar_t__ VAR_18 ;

__attribute__((used)) static long FUNC_7(struct scsi_tape *VAR_19, long VAR_20,
        struct st_request ** VAR_21)
{
 int VAR_22, VAR_23, VAR_24;
 unsigned char VAR_25[VAR_5];
 struct st_request *VAR_26;
 struct st_modedef *VAR_27;
 struct st_partstat *VAR_28;
 struct st_buffer *VAR_29;
 int VAR_30 = 0;

 if (VAR_20 == 0)
  return 0;

 VAR_27 = &(VAR_19->modes[VAR_19->current_mode]);
 VAR_28 = &(VAR_19->ps[VAR_19->partition]);
 if (VAR_28->eof == VAR_17)
  return 1;
 VAR_29 = VAR_19->buffer;

 if (VAR_19->block_size == 0)
  VAR_23 = VAR_24 = VAR_20;
 else {
  if (!(VAR_19->try_dio_now && VAR_18) && VAR_27->do_read_ahead) {
   VAR_23 = (VAR_19->buffer)->buffer_blocks;
   VAR_24 = VAR_23 * VAR_19->block_size;
  } else {
   VAR_24 = VAR_20;
   if (!VAR_29->do_dio && VAR_24 > (VAR_19->buffer)->buffer_size)
    VAR_24 = (VAR_19->buffer)->buffer_size;
   VAR_23 = VAR_24 / VAR_19->block_size;
   VAR_24 = VAR_23 * VAR_19->block_size;
  }
 }

 FUNC_1(VAR_25, 0, VAR_5);
 VAR_25[0] = VAR_9;
 VAR_25[1] = (VAR_19->block_size != 0);
 if (!VAR_25[1] && VAR_19->sili)
  VAR_25[1] |= 2;
 VAR_25[2] = VAR_23 >> 16;
 VAR_25[3] = VAR_23 >> 8;
 VAR_25[4] = VAR_23;

 VAR_26 = *VAR_21;
 VAR_26 = FUNC_3(VAR_26, VAR_19, VAR_25, VAR_24, VAR_1,
      VAR_19->device->request_queue->rq_timeout,
      VAR_6, 1);
 FUNC_2(VAR_19, 1);
 *VAR_21 = VAR_26;
 if (!VAR_26)
  return VAR_29->syscall_result;

 VAR_29->read_pointer = 0;
 VAR_28->at_sm = 0;


 if (VAR_29->syscall_result) {
  struct st_cmdstatus *VAR_31 = &VAR_19->buffer->cmdstat;

  VAR_30 = 1;
  FUNC_0(VAR_19,
       "Sense: %2x %2x %2x %2x %2x %2x %2x %2x\n",
       VAR_26->sense[0], VAR_26->sense[1],
       VAR_26->sense[2], VAR_26->sense[3],
       VAR_26->sense[4], VAR_26->sense[5],
       VAR_26->sense[6], VAR_26->sense[7]);
  if (VAR_31->have_sense) {

   if (VAR_31->sense_hdr.sense_key == VAR_0)
    VAR_31->flags &= 0xcf;

   if (VAR_31->flags != 0) {

    if (VAR_31->remainder_valid)
     VAR_22 = (int)VAR_31->uremainder64;
    else
     VAR_22 = 0;
    if (VAR_31->sense_hdr.sense_key == VAR_7) {
     if (VAR_19->block_size == 0)
      VAR_22 = VAR_24;

     VAR_31->flags &= ~VAR_12;
    }

    if (VAR_31->flags & VAR_12) {
     if (VAR_19->block_size == 0 &&
         VAR_22 < 0) {
      FUNC_5(VAR_4, VAR_19,
         "Failed to read %d "
         "byte block with %d "
         "byte transfer.\n",
         VAR_24 - VAR_22,
         VAR_24);
      if (VAR_28->drv_block >= 0)
       VAR_28->drv_block += 1;
      VAR_29->buffer_bytes = 0;
      return (-VAR_3);
     } else if (VAR_19->block_size == 0) {
      VAR_29->buffer_bytes = VAR_24 - VAR_22;
     } else {
      FUNC_6(VAR_26);
      VAR_26 = *VAR_21 = ((void*)0);
      if (VAR_22 == VAR_23) {
       FUNC_5(VAR_4, VAR_19,
          "Incorrect "
          "block size.\n");
       if (VAR_28->drv_block >= 0)
        VAR_28->drv_block += VAR_23 - VAR_22 + 1;
       FUNC_4(VAR_19, VAR_8, 1);
       return (-VAR_2);
      }

      VAR_29->buffer_bytes = (VAR_23 - VAR_22) *
          VAR_19->block_size;
      FUNC_0(VAR_19, "ILI but "
           "enough data "
           "received %ld "
           "%d.\n", VAR_20,
           VAR_29->buffer_bytes);
      if (VAR_28->drv_block >= 0)
       VAR_28->drv_block += 1;
      if (FUNC_4(VAR_19, VAR_8, 1))
       return (-VAR_2);
     }
    } else if (VAR_31->flags & VAR_11) {
     if (VAR_28->eof != VAR_17)
      VAR_28->eof = VAR_17;
     else
      VAR_28->eof = VAR_14;
     if (VAR_19->block_size == 0)
      VAR_29->buffer_bytes = 0;
     else
      VAR_29->buffer_bytes =
          VAR_24 - VAR_22 * VAR_19->block_size;
     FUNC_0(VAR_19, "EOF detected (%d "
          "bytes read).\n",
          VAR_29->buffer_bytes);
    } else if (VAR_31->flags & VAR_10) {
     if (VAR_28->eof == VAR_16)
      VAR_28->eof = VAR_13;
     else
      VAR_28->eof = VAR_15;
     if (VAR_19->block_size == 0)
      VAR_29->buffer_bytes = VAR_24 - VAR_22;
     else
      VAR_29->buffer_bytes =
          VAR_24 - VAR_22 * VAR_19->block_size;

     FUNC_0(VAR_19, "EOM detected (%d "
          "bytes read).\n",
          VAR_29->buffer_bytes);
    }
   }

   else {
    FUNC_0(VAR_19, "Tape error while reading.\n");
    VAR_28->drv_block = (-1);
    if (VAR_28->eof == VAR_16 &&
        VAR_31->sense_hdr.sense_key == VAR_0) {
     FUNC_0(VAR_19, "Zero returned for "
          "first BLANK CHECK "
          "after EOF.\n");
     VAR_28->eof = VAR_14;
    } else
     VAR_30 = (-VAR_2);
   }

   if (VAR_29->buffer_bytes < 0)
    VAR_29->buffer_bytes = 0;
  }

  else {
   VAR_30 = VAR_29->syscall_result;
  }

 }

 else {
  VAR_29->buffer_bytes = VAR_24;
  if (VAR_19->sili)
   VAR_29->buffer_bytes -= VAR_19->buffer->cmdstat.residual;
 }

 if (VAR_28->drv_block >= 0) {
  if (VAR_19->block_size == 0)
   VAR_28->drv_block++;
  else
   VAR_28->drv_block += VAR_29->buffer_bytes / VAR_19->block_size;
 }
 return VAR_30;
}
