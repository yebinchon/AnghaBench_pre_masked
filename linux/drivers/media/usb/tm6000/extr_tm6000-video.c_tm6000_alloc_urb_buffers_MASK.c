
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm6000_core {int urb_size; int * urb_buffer; int * urb_dma; int udev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int,int,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct tm6000_core *VAR_3)
{
 int VAR_4 = VAR_2;
 int VAR_5;

 if (VAR_3->urb_buffer)
  return 0;

 VAR_3->urb_buffer = FUNC_0(VAR_4, sizeof(void *), VAR_1);
 if (!VAR_3->urb_buffer)
  return -VAR_0;

 VAR_3->urb_dma = FUNC_0(VAR_4, sizeof(dma_addr_t *),
         VAR_1);
 if (!VAR_3->urb_dma)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_3->urb_buffer[VAR_5] = FUNC_3(
     VAR_3->udev, VAR_3->urb_size,
     VAR_1, &VAR_3->urb_dma[VAR_5]);
  if (!VAR_3->urb_buffer[VAR_5]) {
   FUNC_2("unable to allocate %i bytes for transfer buffer %i\n",
        VAR_3->urb_size, VAR_5);
   return -VAR_0;
  }
  FUNC_1(VAR_3->urb_buffer[VAR_5], 0, VAR_3->urb_size);
 }

 return 0;
}
