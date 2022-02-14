
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm6000_core {int ** urb_dma; int ** urb_buffer; int urb_size; int udev; } ;


 int VAR_0 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (int ,int ,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct tm6000_core *VAR_1)
{
 int VAR_2;

 if (!VAR_1->urb_buffer)
  return 0;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->urb_buffer[VAR_2]) {
   FUNC_1(VAR_1->udev,
     VAR_1->urb_size,
     VAR_1->urb_buffer[VAR_2],
     VAR_1->urb_dma[VAR_2]);
   VAR_1->urb_buffer[VAR_2] = ((void*)0);
  }
 }
 FUNC_0(VAR_1->urb_buffer);
 FUNC_0(VAR_1->urb_dma);
 VAR_1->urb_buffer = ((void*)0);
 VAR_1->urb_dma = ((void*)0);

 return 0;
}
