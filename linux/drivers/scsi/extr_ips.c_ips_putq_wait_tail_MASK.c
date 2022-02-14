
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {char* host_scribble; } ;
struct TYPE_3__ {int count; struct scsi_cmnd* head; struct scsi_cmnd* tail; } ;
typedef TYPE_1__ ips_wait_queue_entry_t ;


 int FUNC_0 (char*,int) ;

__attribute__((used)) static void FUNC_1(ips_wait_queue_entry_t *VAR_0, struct scsi_cmnd *VAR_1)
{
 FUNC_0("ips_putq_wait_tail", 1);

 if (!VAR_1)
  return;

 VAR_1->host_scribble = ((void*)0);

 if (VAR_0->tail)
  VAR_0->tail->host_scribble = (char *) VAR_1;

 VAR_0->tail = VAR_1;

 if (!VAR_0->head)
  VAR_0->head = VAR_1;

 VAR_0->count++;
}
