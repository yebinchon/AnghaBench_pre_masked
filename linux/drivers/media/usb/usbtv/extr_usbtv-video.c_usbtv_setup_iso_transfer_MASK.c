
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbtv {int iso_size; int udev; } ;
struct urb {int interval; int number_of_packets; int transfer_buffer_length; TYPE_1__* iso_frame_desc; int complete; int transfer_buffer; int transfer_flags; int pipe; struct usbtv* context; int dev; } ;
struct TYPE_2__ {int offset; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int,int ) ;
 struct urb* FUNC_1 (int,int ) ;
 int FUNC_2 (struct urb*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static struct urb *FUNC_4(struct usbtv *VAR_5)
{
 struct urb *VAR_6;
 int VAR_7 = VAR_5->iso_size;
 int VAR_8;

 VAR_6 = FUNC_1(VAR_2, VAR_0);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 VAR_6->dev = VAR_5->udev;
 VAR_6->context = VAR_5;
 VAR_6->pipe = FUNC_3(VAR_5->udev, VAR_3);
 VAR_6->interval = 1;
 VAR_6->transfer_flags = VAR_1;
 VAR_6->transfer_buffer = FUNC_0(VAR_2, VAR_7,
      VAR_0);
 if (!VAR_6->transfer_buffer) {
  FUNC_2(VAR_6);
  return ((void*)0);
 }
 VAR_6->complete = VAR_4;
 VAR_6->number_of_packets = VAR_2;
 VAR_6->transfer_buffer_length = VAR_7 * VAR_2;
 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  VAR_6->iso_frame_desc[VAR_8].offset = VAR_7 * VAR_8;
  VAR_6->iso_frame_desc[VAR_8].length = VAR_7;
 }

 return VAR_6;
}
