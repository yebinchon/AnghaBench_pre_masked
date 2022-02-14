
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct airspy {int urbs_initialized; int * dma_addr; TYPE_1__** urb_list; int * buf_list; int udev; int dev; } ;
struct TYPE_4__ {int transfer_dma; int transfer_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ,int ,int ,struct airspy*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct airspy *VAR_6)
{
 int VAR_7, VAR_8;


 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  FUNC_0(VAR_6->dev, "alloc urb=%d\n", VAR_7);
  VAR_6->urb_list[VAR_7] = FUNC_1(0, VAR_2);
  if (!VAR_6->urb_list[VAR_7]) {
   for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
    FUNC_3(VAR_6->urb_list[VAR_8]);
   return -VAR_1;
  }
  FUNC_2(VAR_6->urb_list[VAR_7],
    VAR_6->udev,
    FUNC_4(VAR_6->udev, 0x81),
    VAR_6->buf_list[VAR_7],
    VAR_0,
    VAR_5, VAR_6);

  VAR_6->urb_list[VAR_7]->transfer_flags = VAR_4;
  VAR_6->urb_list[VAR_7]->transfer_dma = VAR_6->dma_addr[VAR_7];
  VAR_6->urbs_initialized++;
 }

 return 0;
}
