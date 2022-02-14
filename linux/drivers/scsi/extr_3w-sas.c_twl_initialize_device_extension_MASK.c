
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* free_queue; int error_sequence_id; int ioctl_wqueue; int ioctl_lock; int chrdev_request_id; void* free_tail; void* free_head; int * state; int ** event_queue; int host; } ;
typedef int TW_Event ;
typedef TYPE_1__ TW_Device_Extension ;
typedef int TW_Command_Full ;
typedef int TW_Command_Apache_Header ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,char*) ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int,int) ;

__attribute__((used)) static int FUNC_5(TW_Device_Extension *VAR_7)
{
 int VAR_8, VAR_9 = 1;


 if (FUNC_4(VAR_7, sizeof(TW_Command_Full), 0)) {
  FUNC_0(VAR_7->host, VAR_1, 0x9, "Command packet memory allocation failed");
  goto out;
 }


 if (FUNC_4(VAR_7, VAR_5, 1)) {
  FUNC_0(VAR_7->host, VAR_1, 0xa, "Generic memory allocation failed");
  goto out;
 }


 if (FUNC_4(VAR_7, sizeof(TW_Command_Apache_Header), 2)) {
  FUNC_0(VAR_7->host, VAR_1, 0xb, "Sense buffer allocation failed");
  goto out;
 }


 VAR_7->event_queue[0] = FUNC_2(VAR_3, sizeof(TW_Event), VAR_0);
 if (!VAR_7->event_queue[0]) {
  FUNC_0(VAR_7->host, VAR_1, 0xc, "Event info memory allocation failed");
  goto out;
 }

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  VAR_7->event_queue[VAR_8] = (TW_Event *)((unsigned char *)VAR_7->event_queue[0] + (VAR_8 * sizeof(TW_Event)));
  VAR_7->free_queue[VAR_8] = VAR_8;
  VAR_7->state[VAR_8] = VAR_6;
 }

 VAR_7->free_head = VAR_4;
 VAR_7->free_tail = VAR_4;
 VAR_7->error_sequence_id = 1;
 VAR_7->chrdev_request_id = VAR_2;

 FUNC_3(&VAR_7->ioctl_lock);
 FUNC_1(&VAR_7->ioctl_wqueue);

 VAR_9 = 0;
out:
 return VAR_9;
}
