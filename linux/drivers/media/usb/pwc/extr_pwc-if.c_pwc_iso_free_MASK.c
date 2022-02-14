
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int transfer_dma; scalar_t__ transfer_buffer; int transfer_buffer_length; TYPE_1__* dev; } ;
struct pwc_device {struct urb** urbs; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,scalar_t__,int ) ;
 int FUNC_2 (struct urb*) ;

__attribute__((used)) static void FUNC_3(struct pwc_device *VAR_1)
{
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct urb *VAR_3 = VAR_1->urbs[VAR_2];

  if (VAR_3) {
   FUNC_0("Freeing URB\n");
   if (VAR_3->transfer_buffer)
    FUNC_1(&VAR_3->dev->dev,
          VAR_3->transfer_buffer_length,
          VAR_3->transfer_buffer,
          VAR_3->transfer_dma);
   FUNC_2(VAR_3);
   VAR_1->urbs[VAR_2] = ((void*)0);
  }
 }
}
