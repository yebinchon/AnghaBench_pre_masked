
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_data_stream {int buf_num; unsigned long buf_size; int state; int ** buf_list; scalar_t__* dma_addr; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,int ,unsigned long) ;
 int * FUNC_2 (int ,unsigned long,int ,scalar_t__*) ;
 int FUNC_3 (struct usb_data_stream*) ;

__attribute__((used)) static int FUNC_4(struct usb_data_stream *VAR_3, int VAR_4, unsigned long VAR_5)
{
 VAR_3->buf_num = 0;
 VAR_3->buf_size = VAR_5;

 FUNC_0("all in all I will use %lu bytes for streaming\n",VAR_4*VAR_5);

 for (VAR_3->buf_num = 0; VAR_3->buf_num < VAR_4; VAR_3->buf_num++) {
  FUNC_0("allocating buffer %d\n",VAR_3->buf_num);
  if (( VAR_3->buf_list[VAR_3->buf_num] =
     FUNC_2(VAR_3->udev, VAR_5, VAR_1,
     &VAR_3->dma_addr[VAR_3->buf_num]) ) == ((void*)0)) {
   FUNC_0("not enough memory for urb-buffer allocation.\n");
   FUNC_3(VAR_3);
   return -VAR_0;
  }
  FUNC_0("buffer %d: %p (dma: %Lu)\n",
   VAR_3->buf_num,
VAR_3->buf_list[VAR_3->buf_num], (long long)VAR_3->dma_addr[VAR_3->buf_num]);
  FUNC_1(VAR_3->buf_list[VAR_3->buf_num],0,VAR_5);
  VAR_3->state |= VAR_2;
 }
 FUNC_0("allocation successful\n");

 return 0;
}
