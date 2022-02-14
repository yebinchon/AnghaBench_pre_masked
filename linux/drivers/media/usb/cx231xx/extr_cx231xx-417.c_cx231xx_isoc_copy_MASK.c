
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct urb {size_t number_of_packets; unsigned char* transfer_buffer; TYPE_1__* iso_frame_desc; struct cx231xx_dmaqueue* context; } ;
struct cx231xx_dmaqueue {scalar_t__ left_data_count; unsigned char* p_left_data; size_t mpeg_buffer_completed; } ;
struct cx231xx {int dummy; } ;
struct TYPE_2__ {int offset; size_t actual_length; } ;


 int FUNC_0 (struct cx231xx*,unsigned char*,size_t,struct urb*,struct cx231xx_dmaqueue*) ;

__attribute__((used)) static int FUNC_1(struct cx231xx *VAR_0, struct urb *VAR_1)
{
 struct cx231xx_dmaqueue *VAR_2 = VAR_1->context;
 unsigned char *VAR_3;
 u32 VAR_4 = 0;
 u32 VAR_5 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_1->number_of_packets; VAR_5++) {
  if (VAR_2->left_data_count > 0) {
   FUNC_0(VAR_0, VAR_2->p_left_data,
        VAR_2->left_data_count, VAR_1, VAR_2);
   VAR_2->mpeg_buffer_completed = VAR_2->left_data_count;
   VAR_2->left_data_count = 0;
  }

  VAR_3 = VAR_1->transfer_buffer +
    VAR_1->iso_frame_desc[VAR_5].offset;
  VAR_4 = VAR_1->iso_frame_desc[VAR_5].actual_length;

  if (VAR_4 > 0)
   FUNC_0(VAR_0, VAR_3, VAR_4, VAR_1, VAR_2);
 }

 return 0;
}
