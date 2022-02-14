
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int status; int number_of_packets; TYPE_2__* iso_frame_desc; scalar_t__ transfer_buffer; } ;
struct cx231xx {int state; TYPE_1__* dvb; } ;
struct TYPE_4__ {int status; int actual_length; scalar_t__ offset; } ;
struct TYPE_3__ {int demux; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,scalar_t__,int ) ;
 int FUNC_1 (struct cx231xx*,int,int) ;

__attribute__((used)) static inline int FUNC_2(struct cx231xx *VAR_3, struct urb *VAR_4)
{
 int VAR_5;

 if (!VAR_3)
  return 0;

 if (VAR_3->state & VAR_0)
  return 0;

 if (VAR_4->status < 0) {
  FUNC_1(VAR_3, -1, VAR_4->status);
  if (VAR_4->status == -VAR_1)
   return 0;
 }

 for (VAR_5 = 0; VAR_5 < VAR_4->number_of_packets; VAR_5++) {
  int VAR_6 = VAR_4->iso_frame_desc[VAR_5].status;

  if (VAR_6 < 0) {
   FUNC_1(VAR_3, VAR_5, VAR_6);
   if (VAR_4->iso_frame_desc[VAR_5].status != -VAR_2)
    continue;
  }

  FUNC_0(&VAR_3->dvb->demux,
     VAR_4->transfer_buffer +
    VAR_4->iso_frame_desc[VAR_5].offset,
    VAR_4->iso_frame_desc[VAR_5].actual_length);
 }

 return 0;
}
