
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int * usb_complete_t ;
struct hackrf_dev {int urbs_initialized; int * dma_addr; TYPE_1__** urb_list; int * buf_list; int udev; int dev; } ;
struct TYPE_4__ {int transfer_dma; int transfer_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,unsigned int,int ,int ,int *,struct hackrf_dev*) ;
 int FUNC_3 (TYPE_1__*) ;
 unsigned int FUNC_4 (int ,int) ;
 unsigned int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(struct hackrf_dev *VAR_7, bool VAR_8)
{
 int VAR_9, VAR_10;
 unsigned int VAR_11;
 usb_complete_t VAR_12;

 if (VAR_8) {
  VAR_11 = FUNC_4(VAR_7->udev, 0x81);
  VAR_12 = &VAR_5;
 } else {
  VAR_11 = FUNC_5(VAR_7->udev, 0x02);
  VAR_12 = &VAR_6;
 }


 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  FUNC_0(VAR_7->dev, "alloc urb=%d\n", VAR_9);
  VAR_7->urb_list[VAR_9] = FUNC_1(0, VAR_2);
  if (!VAR_7->urb_list[VAR_9]) {
   for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
    FUNC_3(VAR_7->urb_list[VAR_10]);
   return -VAR_1;
  }
  FUNC_2(VAR_7->urb_list[VAR_9],
    VAR_7->udev,
    VAR_11,
    VAR_7->buf_list[VAR_9],
    VAR_0,
    VAR_12, VAR_7);

  VAR_7->urb_list[VAR_9]->transfer_flags = VAR_4;
  VAR_7->urb_list[VAR_9]->transfer_dma = VAR_7->dma_addr[VAR_9];
  VAR_7->urbs_initialized++;
 }

 return 0;
}
