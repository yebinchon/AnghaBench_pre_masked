
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int status; scalar_t__ actual_length; scalar_t__ transfer_buffer_length; scalar_t__ transfer_buffer; scalar_t__ context; } ;
struct go7007 {scalar_t__ status; int interrupt_available; int interrupt_waitq; void* interrupt_data; void* interrupt_value; int dev; } ;
typedef int __le16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*,void*,void*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct urb *VAR_2)
{
 struct go7007 *VAR_3 = (struct go7007 *)VAR_2->context;
 __le16 *VAR_4 = (__le16 *)VAR_2->transfer_buffer;
 int VAR_5 = VAR_2->status;

 if (VAR_5) {
  if (VAR_5 != -VAR_0 &&
    VAR_3->status != VAR_1) {
   FUNC_1(VAR_3->dev, "error in read interrupt: %d\n", VAR_2->status);
  } else {
   FUNC_3(&VAR_3->interrupt_waitq);
   return;
  }
 } else if (VAR_2->actual_length != VAR_2->transfer_buffer_length) {
  FUNC_1(VAR_3->dev, "short read in interrupt pipe!\n");
 } else {
  VAR_3->interrupt_available = 1;
  VAR_3->interrupt_data = FUNC_0(VAR_4[0]);
  VAR_3->interrupt_value = FUNC_0(VAR_4[1]);
  FUNC_2("ReadInterrupt: %04x %04x\n",
    VAR_3->interrupt_value, VAR_3->interrupt_data);
 }

 FUNC_3(&VAR_3->interrupt_waitq);
}
