
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct st_request {int dummy; } ;
struct scsi_tape {TYPE_4__* buffer; TYPE_2__* device; } ;
struct TYPE_7__ {scalar_t__ midlevel_result; } ;
struct TYPE_8__ {int syscall_result; TYPE_3__ cmdstat; } ;
struct TYPE_6__ {TYPE_1__* request_queue; } ;
struct TYPE_5__ {int rq_timeout; } ;


 int FUNC_0 (struct scsi_tape*,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 struct st_request* FUNC_1 (int *,struct scsi_tape*,unsigned char*,int ,int ,int ,int ,int) ;
 int FUNC_2 (int ,struct scsi_tape*,char*,char*) ;
 int FUNC_3 (struct st_request*) ;

__attribute__((used)) static int FUNC_4(struct scsi_tape * VAR_5, int VAR_6)
{
 struct st_request *VAR_7;
 unsigned char VAR_8[VAR_2];

 VAR_8[0] = VAR_4;
 VAR_8[1] = 0x01;
 if (VAR_6) {
  VAR_8[2] = VAR_8[3] = 0;
  VAR_8[4] = 1;
 } else
  VAR_8[2] = VAR_8[3] = VAR_8[4] = 0xff;
 VAR_8[5] = 0;

 FUNC_0(VAR_5, "Stepping over filemark %s.\n",
      VAR_6 ? "forward" : "backward");

 VAR_7 = FUNC_1(((void*)0), VAR_5, VAR_8, 0, VAR_0,
      VAR_5->device->request_queue->rq_timeout,
      VAR_3, 1);
 if (!VAR_7)
  return (VAR_5->buffer)->syscall_result;

 FUNC_3(VAR_7);
 VAR_7 = ((void*)0);

 if ((VAR_5->buffer)->cmdstat.midlevel_result != 0)
  FUNC_2(VAR_1, VAR_5,
     "Stepping over filemark %s failed.\n",
     VAR_6 ? "forward" : "backward");

 return (VAR_5->buffer)->syscall_result;
}
