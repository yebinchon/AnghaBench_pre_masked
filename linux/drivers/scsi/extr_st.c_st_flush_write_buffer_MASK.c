
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct st_request {int dummy; } ;
struct st_partstat {int drv_block; } ;
struct TYPE_7__ {scalar_t__ sense_key; } ;
struct st_cmdstatus {int flags; scalar_t__ uremainder64; int remainder_valid; TYPE_3__ sense_hdr; int deferred; scalar_t__ have_sense; } ;
struct scsi_tape {int dirty; int block_size; size_t partition; TYPE_4__* buffer; struct st_partstat* ps; TYPE_2__* device; } ;
struct TYPE_8__ {int buffer_bytes; int syscall_result; struct st_cmdstatus cmdstat; } ;
struct TYPE_6__ {TYPE_1__* request_queue; } ;
struct TYPE_5__ {int rq_timeout; } ;


 int FUNC_0 (struct scsi_tape*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 unsigned char VAR_9 ;
 int FUNC_1 (unsigned char*,int ,int) ;
 struct st_request* FUNC_2 (int *,struct scsi_tape*,unsigned char*,int,int ,int ,int ,int) ;
 int FUNC_3 (int ,struct scsi_tape*,char*) ;
 int FUNC_4 (struct st_request*) ;
 int FUNC_5 (struct scsi_tape*) ;

__attribute__((used)) static int FUNC_6(struct scsi_tape * VAR_10)
{
 int VAR_11, VAR_12;
 int VAR_13;
 unsigned char VAR_14[VAR_4];
 struct st_request *VAR_15;
 struct st_partstat *VAR_16;

 VAR_13 = FUNC_5(VAR_10);
 if (VAR_13)
  return VAR_13;

 VAR_13 = 0;
 if (VAR_10->dirty == 1) {

  VAR_11 = VAR_10->buffer->buffer_bytes;
  FUNC_0(VAR_10, "Flushing %d bytes.\n", VAR_11);

  FUNC_1(VAR_14, 0, VAR_4);
  VAR_14[0] = VAR_9;
  VAR_14[1] = 1;
  VAR_12 = VAR_11 / VAR_10->block_size;
  VAR_14[2] = VAR_12 >> 16;
  VAR_14[3] = VAR_12 >> 8;
  VAR_14[4] = VAR_12;

  VAR_15 = FUNC_2(((void*)0), VAR_10, VAR_14, VAR_11, VAR_0,
       VAR_10->device->request_queue->rq_timeout,
       VAR_5, 1);
  if (!VAR_15)
   return (VAR_10->buffer)->syscall_result;

  VAR_16 = &(VAR_10->ps[VAR_10->partition]);
  if ((VAR_10->buffer)->syscall_result != 0) {
   struct st_cmdstatus *VAR_17 = &VAR_10->buffer->cmdstat;

   if (VAR_17->have_sense && !VAR_17->deferred &&
       (VAR_17->flags & VAR_8) &&
       (VAR_17->sense_hdr.sense_key == VAR_6 ||
        VAR_17->sense_hdr.sense_key == VAR_7) &&
       (!VAR_17->remainder_valid ||
        VAR_17->uremainder64 == 0)) {
    VAR_10->dirty = 0;
    (VAR_10->buffer)->buffer_bytes = 0;
    if (VAR_16->drv_block >= 0)
     VAR_16->drv_block += VAR_12;
    VAR_13 = (-VAR_2);
   } else {
    FUNC_3(VAR_3, VAR_10, "Error on flush.\n");
    VAR_16->drv_block = (-1);
    VAR_13 = (-VAR_1);
   }
  } else {
   if (VAR_16->drv_block >= 0)
    VAR_16->drv_block += VAR_12;
   VAR_10->dirty = 0;
   (VAR_10->buffer)->buffer_bytes = 0;
  }
  FUNC_4(VAR_15);
  VAR_15 = ((void*)0);
 }
 return VAR_13;
}
