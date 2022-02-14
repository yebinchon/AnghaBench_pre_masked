
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int status; int actual_length; int transfer_buffer; int transfer_buffer_length; scalar_t__ context; } ;
struct go7007 {int dev; int frame_waitq; int vidq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct go7007*,int ,int ) ;
 int FUNC_2 (struct urb*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct urb *VAR_1)
{
 struct go7007 *VAR_2 = (struct go7007 *)VAR_1->context;
 int VAR_3, VAR_4 = VAR_1->status;

 if (!FUNC_3(&VAR_2->vidq)) {
  FUNC_4(&VAR_2->frame_waitq);
  return;
 }
 if (VAR_4) {
  FUNC_0(VAR_2->dev, "error in video pipe: %d\n", VAR_4);
  return;
 }
 if (VAR_1->actual_length != VAR_1->transfer_buffer_length) {
  FUNC_0(VAR_2->dev, "short read in video pipe!\n");
  return;
 }
 FUNC_1(VAR_2, VAR_1->transfer_buffer, VAR_1->actual_length);
 VAR_3 = FUNC_2(VAR_1, VAR_0);
 if (VAR_3 < 0)
  FUNC_0(VAR_2->dev, "error in video pipe: %d\n", VAR_3);
}
