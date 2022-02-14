
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int status; int actual_length; int transfer_buffer; int transfer_buffer_length; scalar_t__ context; } ;
struct go7007 {int dev; int (* audio_deliver ) (struct go7007*,int ,int ) ;int vidq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct go7007*,int ,int ) ;
 int FUNC_2 (struct urb*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct urb *VAR_1)
{
 struct go7007 *VAR_2 = (struct go7007 *)VAR_1->context;
 int VAR_3, VAR_4 = VAR_1->status;

 if (!FUNC_3(&VAR_2->vidq))
  return;
 if (VAR_4) {
  FUNC_0(VAR_2->dev, "error in audio pipe: %d\n",
   VAR_4);
  return;
 }
 if (VAR_1->actual_length != VAR_1->transfer_buffer_length) {
  FUNC_0(VAR_2->dev, "short read in audio pipe!\n");
  return;
 }
 if (VAR_2->audio_deliver != ((void*)0))
  VAR_2->audio_deliver(VAR_2, VAR_1->transfer_buffer, VAR_1->actual_length);
 VAR_3 = FUNC_2(VAR_1, VAR_0);
 if (VAR_3 < 0)
  FUNC_0(VAR_2->dev, "error in audio pipe: %d\n", VAR_3);
}
