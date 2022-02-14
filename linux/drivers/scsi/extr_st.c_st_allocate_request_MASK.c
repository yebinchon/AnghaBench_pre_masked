
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_request {struct scsi_tape* stp; } ;
struct scsi_tape {TYPE_1__* buffer; } ;
struct TYPE_2__ {int syscall_result; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct st_request* FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,struct scsi_tape*,char*) ;

__attribute__((used)) static struct st_request *FUNC_3(struct scsi_tape *VAR_5)
{
 struct st_request *VAR_6;

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_2);
 if (VAR_6)
  VAR_6->stp = VAR_5;
 else {
  FUNC_2(VAR_3, VAR_5,
     "Can't get SCSI request.\n");
  if (FUNC_1(VAR_4))
   VAR_5->buffer->syscall_result = -VAR_1;
  else
   VAR_5->buffer->syscall_result = -VAR_0;
 }

 return VAR_6;
}
