
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int buffersize; } ;
struct TYPE_8__ {TYPE_1__ bulk; } ;
struct TYPE_9__ {int count; TYPE_2__ u; int endpoint; } ;
struct usb_data_stream {int urbs_initialized; int * dma_addr; TYPE_4__** urb_list; TYPE_3__ props; int * buf_list; int udev; } ;
struct TYPE_10__ {int transfer_dma; int transfer_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 TYPE_4__* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct usb_data_stream*,int,int ) ;
 int FUNC_3 (TYPE_4__*,int ,int ,int ,int ,int ,struct usb_data_stream*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct usb_data_stream *VAR_4)
{
 int VAR_5, VAR_6;

 if ((VAR_5 = FUNC_2(VAR_4,VAR_4->props.count,
     VAR_4->props.u.bulk.buffersize)) < 0)
  return VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_4->props.count; VAR_5++) {
  VAR_4->urb_list[VAR_5] = FUNC_1(0, VAR_1);
  if (!VAR_4->urb_list[VAR_5]) {
   FUNC_0("not enough memory for urb_alloc_urb!.\n");
   for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
    FUNC_4(VAR_4->urb_list[VAR_6]);
   return -VAR_0;
  }
  FUNC_3( VAR_4->urb_list[VAR_5], VAR_4->udev,
    FUNC_5(VAR_4->udev,VAR_4->props.endpoint),
    VAR_4->buf_list[VAR_5],
    VAR_4->props.u.bulk.buffersize,
    VAR_3, VAR_4);

  VAR_4->urb_list[VAR_5]->transfer_flags = VAR_2;
  VAR_4->urb_list[VAR_5]->transfer_dma = VAR_4->dma_addr[VAR_5];
  VAR_4->urbs_initialized++;
 }
 return 0;
}
