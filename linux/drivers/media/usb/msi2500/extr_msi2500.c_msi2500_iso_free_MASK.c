
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msi2500_dev {TYPE_1__** urbs; int udev; int dev; } ;
struct TYPE_2__ {int transfer_dma; scalar_t__ transfer_buffer; int transfer_buffer_length; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,scalar_t__,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct msi2500_dev *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1->dev, "\n");


 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->urbs[VAR_2]) {
   FUNC_0(VAR_1->dev, "Freeing URB\n");
   if (VAR_1->urbs[VAR_2]->transfer_buffer) {
    FUNC_1(VAR_1->udev,
     VAR_1->urbs[VAR_2]->transfer_buffer_length,
     VAR_1->urbs[VAR_2]->transfer_buffer,
     VAR_1->urbs[VAR_2]->transfer_dma);
   }
   FUNC_2(VAR_1->urbs[VAR_2]);
   VAR_1->urbs[VAR_2] = ((void*)0);
  }
 }
}
