
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct usb_ftdi {scalar_t__ disconnected; scalar_t__ initialized; int command_next; int command_head; int u132_lock; struct u132_command* command; struct u132_target* target; } ;
struct urb {int transfer_buffer_length; int actual_length; int pipe; int dev; } ;
struct u132_target {void (* callback ) (void*,struct urb*,size_t*,int,int,int,int,int,int,int,int,int) ;int active; struct urb* urb; void* endp; } ;
struct u132_command {int header; int length; size_t address; int * buffer; scalar_t__ value; scalar_t__ follows; int width; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usb_ftdi*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct usb_ftdi *VAR_3, u8 VAR_4,
      void *VAR_5, struct urb *VAR_6, u8 VAR_7, u8 VAR_8, u8 VAR_9,
      void (*VAR_10) (void *VAR_11, struct urb *VAR_12, u8 *VAR_13, int VAR_14,
          int VAR_15, int VAR_16, int VAR_17, int VAR_18,
          int VAR_19, int VAR_20, int VAR_21, int VAR_22))
{
 u8 VAR_23 = VAR_4 - 1;
wait:if (VAR_3->disconnected > 0) {
  return -VAR_2;
 } else if (VAR_3->initialized == 0) {
  return -VAR_2;
 } else {
  int VAR_24;
  FUNC_2(&VAR_3->u132_lock);
  VAR_24 = VAR_3->command_next - VAR_3->command_head;
  if (VAR_24 < VAR_1) {
   u32 VAR_25 = VAR_6->transfer_buffer_length -
    VAR_6->actual_length;
   struct u132_target *VAR_26 = &VAR_3->target[VAR_23];
   struct u132_command *VAR_27 = &VAR_3->command[
    VAR_0 & VAR_3->command_next];
   VAR_27->header = 0x83 | (VAR_23 << 5);
   if (VAR_25 == 0) {
    VAR_27->length = 0x0000;
   } else if (VAR_25 > 1024) {
    VAR_27->length = 0x8000 | 1023;
   } else
    VAR_27->length = 0x8000 | (VAR_25 -
           1);
   VAR_27->address = (VAR_9 << 6) | (VAR_8 << 2)
    | (VAR_7 << 0);
   VAR_27->width = FUNC_4(VAR_6->dev, VAR_6->pipe,
             FUNC_5(VAR_6->pipe));
   VAR_27->follows = 0;
   VAR_27->value = 0;
   VAR_27->buffer = ((void*)0);
   VAR_26->callback = VAR_10;
   VAR_26->endp = VAR_5;
   VAR_26->urb = VAR_6;
   VAR_26->active = 1;
   VAR_3->command_next += 1;
   FUNC_0(VAR_3);
   FUNC_3(&VAR_3->u132_lock);
   return 0;
  } else {
   FUNC_3(&VAR_3->u132_lock);
   FUNC_1(100);
   goto wait;
  }
 }
}
