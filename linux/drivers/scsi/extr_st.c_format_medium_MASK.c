
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct st_request {int dummy; } ;
struct scsi_tape {int long_timeout; TYPE_3__* buffer; TYPE_2__* device; scalar_t__ immediate; } ;
struct TYPE_6__ {int syscall_result; } ;
struct TYPE_5__ {TYPE_1__* request_queue; } ;
struct TYPE_4__ {int rq_timeout; } ;


 int FUNC_0 (struct scsi_tape*,char*) ;
 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned char*,int ,int) ;
 struct st_request* FUNC_2 (int *,struct scsi_tape*,unsigned char*,int ,int ,int,int ,int) ;

__attribute__((used)) static int FUNC_3(struct scsi_tape *VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 int VAR_7 = VAR_4->long_timeout;
 unsigned char VAR_8[VAR_2];
 struct st_request *VAR_9;

 FUNC_1(VAR_8, 0, VAR_2);
 VAR_8[0] = VAR_1;
 VAR_8[2] = VAR_5;
 if (VAR_4->immediate) {
  VAR_8[1] |= 1;
  VAR_7 = VAR_4->device->request_queue->rq_timeout;
 }
 FUNC_0(VAR_4, "Sending FORMAT MEDIUM\n");
 VAR_9 = FUNC_2(((void*)0), VAR_4, VAR_8, 0, VAR_0,
      VAR_7, VAR_3, 1);
 if (!VAR_9)
  VAR_6 = VAR_4->buffer->syscall_result;
 return VAR_6;
}
