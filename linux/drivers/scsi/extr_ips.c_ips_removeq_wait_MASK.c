
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_cmnd {int * host_scribble; } ;
struct TYPE_4__ {int count; struct scsi_cmnd* tail; struct scsi_cmnd* head; } ;
typedef TYPE_1__ ips_wait_queue_entry_t ;


 int FUNC_0 (char*,int) ;
 struct scsi_cmnd* FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static struct scsi_cmnd *FUNC_2(ips_wait_queue_entry_t *VAR_0,
       struct scsi_cmnd *VAR_1)
{
 struct scsi_cmnd *VAR_2;

 FUNC_0("ips_removeq_wait", 1);

 if (!VAR_1)
  return (((void*)0));

 if (VAR_1 == VAR_0->head) {
  return (FUNC_1(VAR_0));
 }

 VAR_2 = VAR_0->head;

 while ((VAR_2) && (VAR_1 != (struct scsi_cmnd *) VAR_2->host_scribble))
  VAR_2 = (struct scsi_cmnd *) VAR_2->host_scribble;

 if (VAR_2) {

  VAR_2->host_scribble = VAR_1->host_scribble;

  if (!VAR_1->host_scribble)
   VAR_0->tail = VAR_2;

  VAR_1->host_scribble = ((void*)0);
  VAR_0->count--;

  return (VAR_1);
 }

 return (((void*)0));
}
