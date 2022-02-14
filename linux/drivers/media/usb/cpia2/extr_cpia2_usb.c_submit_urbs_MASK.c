
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int number_of_packets; int interval; int transfer_buffer_length; TYPE_1__* iso_frame_desc; int complete; int * transfer_buffer; int transfer_flags; int pipe; struct camera_data* context; int dev; } ;
struct camera_data {TYPE_2__* sbuf; int dev; } ;
struct TYPE_4__ {struct urb* urb; int * data; } ;
struct TYPE_3__ {int offset; int length; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int,int ) ;
 struct urb* FUNC_3 (int,int ) ;
 int FUNC_4 (struct urb*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct urb*,int ) ;

__attribute__((used)) static int FUNC_7(struct camera_data *VAR_7)
{
 struct urb *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;

 for(VAR_11=0; VAR_11<VAR_4; ++VAR_11) {
  if (VAR_7->sbuf[VAR_11].data)
   continue;
  VAR_7->sbuf[VAR_11].data =
      FUNC_2(VAR_2, VAR_1,
      VAR_3);
  if (!VAR_7->sbuf[VAR_11].data) {
   while (--VAR_11 >= 0) {
    FUNC_1(VAR_7->sbuf[VAR_11].data);
    VAR_7->sbuf[VAR_11].data = ((void*)0);
   }
   return -VAR_0;
  }
 }




 for(VAR_11=0; VAR_11<VAR_4; ++VAR_11) {
  if(VAR_7->sbuf[VAR_11].urb) {
   continue;
  }
  VAR_8 = FUNC_3(VAR_1, VAR_3);
  if (!VAR_8) {
   for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
    FUNC_4(VAR_7->sbuf[VAR_12].urb);
   for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
    FUNC_1(VAR_7->sbuf[VAR_12].data);
    VAR_7->sbuf[VAR_12].data = ((void*)0);
   }
   return -VAR_0;
  }

  VAR_7->sbuf[VAR_11].urb = VAR_8;
  VAR_8->dev = VAR_7->dev;
  VAR_8->context = VAR_7;
  VAR_8->pipe = FUNC_5(VAR_7->dev, 1 );
  VAR_8->transfer_flags = VAR_5;
  VAR_8->transfer_buffer = VAR_7->sbuf[VAR_11].data;
  VAR_8->complete = VAR_6;
  VAR_8->number_of_packets = VAR_1;
  VAR_8->interval = 1;
  VAR_8->transfer_buffer_length =
   VAR_2 * VAR_1;

  for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
   VAR_8->iso_frame_desc[VAR_9].offset =
    VAR_2 * VAR_9;
   VAR_8->iso_frame_desc[VAR_9].length = VAR_2;
  }
 }



 for(VAR_11=0; VAR_11<VAR_4; ++VAR_11) {
  VAR_10 = FUNC_6(VAR_7->sbuf[VAR_11].urb, VAR_3);
  if (VAR_10) {
   FUNC_0("usb_submit_urb[%d]() = %d\n", VAR_11, VAR_10);
   return VAR_10;
  }
 }

 return 0;
}
