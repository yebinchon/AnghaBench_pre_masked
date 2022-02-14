
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct st_request {int dummy; } ;
struct scsi_tape {scalar_t__ ready; TYPE_4__* ps; TYPE_3__* buffer; TYPE_2__* device; int scsi2_logical; } ;
struct TYPE_8__ {scalar_t__ drv_file; scalar_t__ drv_block; } ;
struct TYPE_7__ {int syscall_result; int* b_data; } ;
struct TYPE_6__ {scalar_t__ scsi_level; TYPE_1__* request_queue; } ;
struct TYPE_5__ {int rq_timeout; } ;


 int FUNC_0 (struct scsi_tape*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (unsigned char*,int ,int) ;
 struct st_request* FUNC_2 (int *,struct scsi_tape*,unsigned char*,int,int ,int ,int ,int) ;
 int FUNC_3 (struct st_request*) ;

__attribute__((used)) static int FUNC_4(struct scsi_tape *VAR_8, unsigned int *VAR_9, int *VAR_10,
   int VAR_11)
{
 int VAR_12;
 unsigned char VAR_13[VAR_2];
 struct st_request *VAR_14;

 if (VAR_8->ready != VAR_7)
  return (-VAR_1);

 FUNC_1(VAR_13, 0, VAR_2);
 if ((VAR_8->device)->scsi_level < VAR_6) {
  VAR_13[0] = VAR_4;
  VAR_13[4] = 3;
 } else {
  VAR_13[0] = VAR_5;
  if (!VAR_11 && !VAR_8->scsi2_logical)
   VAR_13[1] = 1;
 }
 VAR_14 = FUNC_2(((void*)0), VAR_8, VAR_13, 20, VAR_0,
      VAR_8->device->request_queue->rq_timeout,
      VAR_3, 1);
 if (!VAR_14)
  return (VAR_8->buffer)->syscall_result;

 if ((VAR_8->buffer)->syscall_result != 0 ||
     (VAR_8->device->scsi_level >= VAR_6 &&
      ((VAR_8->buffer)->b_data[0] & 4) != 0)) {
  *VAR_9 = *VAR_10 = 0;
  FUNC_0(VAR_8, " Can't read tape position.\n");
  VAR_12 = (-VAR_1);
 } else {
  VAR_12 = 0;
  if ((VAR_8->device)->scsi_level < VAR_6) {
   *VAR_9 = ((VAR_8->buffer)->b_data[0] << 16)
       + ((VAR_8->buffer)->b_data[1] << 8)
       + (VAR_8->buffer)->b_data[2];
   *VAR_10 = 0;
  } else {
   *VAR_9 = ((VAR_8->buffer)->b_data[4] << 24)
       + ((VAR_8->buffer)->b_data[5] << 16)
       + ((VAR_8->buffer)->b_data[6] << 8)
       + (VAR_8->buffer)->b_data[7];
   *VAR_10 = (VAR_8->buffer)->b_data[1];
   if (((VAR_8->buffer)->b_data[0] & 0x80) &&
       (VAR_8->buffer)->b_data[1] == 0)
    VAR_8->ps[0].drv_block = VAR_8->ps[0].drv_file = 0;
  }
  FUNC_0(VAR_8, "Got tape pos. blk %d part %d.\n",
       *VAR_9, *VAR_10);
 }
 FUNC_3(VAR_14);
 VAR_14 = ((void*)0);

 return VAR_12;
}
