
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {scalar_t__ status; int number_of_packets; TYPE_2__* iso_frame_desc; scalar_t__ transfer_buffer; int actual_length; int pipe; } ;
struct em28xx {TYPE_1__* dvb; scalar_t__ disconnected; } ;
struct TYPE_4__ {scalar_t__ status; int actual_length; scalar_t__ offset; } ;
struct TYPE_3__ {int demux; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__,int ) ;
 int FUNC_1 (struct em28xx*,int,scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline int FUNC_3(struct em28xx *VAR_1, struct urb *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 if (!VAR_1)
  return 0;

 if (VAR_1->disconnected)
  return 0;

 if (VAR_2->status < 0)
  FUNC_1(VAR_1, -1, VAR_2->status);

 VAR_3 = FUNC_2(VAR_2->pipe);

 if (VAR_3)
  VAR_4 = 1;
 else
  VAR_4 = VAR_2->number_of_packets;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  if (VAR_3) {
   if (VAR_2->status < 0) {
    FUNC_1(VAR_1, VAR_5, VAR_2->status);
    if (VAR_2->status != -VAR_0)
     continue;
   }
   if (!VAR_2->actual_length)
    continue;
   FUNC_0(&VAR_1->dvb->demux, VAR_2->transfer_buffer,
      VAR_2->actual_length);
  } else {
   if (VAR_2->iso_frame_desc[VAR_5].status < 0) {
    FUNC_1(VAR_1, VAR_5,
       VAR_2->iso_frame_desc[VAR_5].status);
    if (VAR_2->iso_frame_desc[VAR_5].status != -VAR_0)
     continue;
   }
   if (!VAR_2->iso_frame_desc[VAR_5].actual_length)
    continue;
   FUNC_0(&VAR_1->dvb->demux,
      VAR_2->transfer_buffer +
      VAR_2->iso_frame_desc[VAR_5].offset,
      VAR_2->iso_frame_desc[VAR_5].actual_length);
  }
 }

 return 0;
}
