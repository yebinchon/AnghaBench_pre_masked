
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct st_request {int dummy; } ;
struct scsi_tape {int long_timeout; TYPE_3__* buffer; TYPE_2__* device; } ;
struct TYPE_6__ {int* b_data; int syscall_result; } ;
struct TYPE_5__ {TYPE_1__* request_queue; } ;
struct TYPE_4__ {int rq_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (unsigned char*,int ,int) ;
 struct st_request* FUNC_1 (int *,struct scsi_tape*,unsigned char*,unsigned char,int ,int,int ,int) ;
 int FUNC_2 (struct st_request*) ;

__attribute__((used)) static int FUNC_3(struct scsi_tape *VAR_13, int VAR_14, int VAR_15)
{
 int VAR_16;
 unsigned char VAR_17[VAR_1];
 struct st_request *VAR_18;
 int VAR_19;

 FUNC_0(VAR_17, 0, VAR_1);
 VAR_17[0] = VAR_8;
 VAR_17[1] = VAR_9;
 VAR_16 = VAR_7 + (VAR_13->buffer)->b_data[VAR_3];
 VAR_17[4] = VAR_16 + (VAR_13->buffer)->b_data[VAR_16 + VAR_11] + 2;


 (VAR_13->buffer)->b_data[VAR_4] = 0;
 (VAR_13->buffer)->b_data[VAR_6] = 0;
 (VAR_13->buffer)->b_data[VAR_5] &= ~VAR_2;
 (VAR_13->buffer)->b_data[VAR_16 + VAR_12] &= VAR_10;

 VAR_19 = VAR_15 ?
  VAR_13->long_timeout : VAR_13->device->request_queue->rq_timeout;
 VAR_18 = FUNC_1(((void*)0), VAR_13, VAR_17, VAR_17[4], VAR_0,
      VAR_19, 0, 1);
 if (VAR_18 == ((void*)0))
  return (VAR_13->buffer)->syscall_result;

 FUNC_2(VAR_18);

 return VAR_13->buffer->syscall_result;
}
