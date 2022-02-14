
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {scalar_t__ status; int number_of_packets; unsigned int actual_length; unsigned char* transfer_buffer; TYPE_1__* iso_frame_desc; int pipe; } ;
struct em28xx {unsigned int max_pkt_size; scalar_t__ is_em25xx; scalar_t__ disconnected; } ;
struct TYPE_2__ {scalar_t__ status; unsigned int actual_length; int offset; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct em28xx*,int,scalar_t__) ;
 int FUNC_2 (struct em28xx*,unsigned char*,unsigned int) ;
 int FUNC_3 (struct em28xx*,unsigned char*,unsigned int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static inline int FUNC_5(struct em28xx *VAR_1, struct urb *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 unsigned char *VAR_6;
 unsigned int VAR_7;

 if (!VAR_1)
  return 0;

 if (VAR_1->disconnected)
  return 0;

 if (VAR_2->status < 0)
  FUNC_1(VAR_1, -1, VAR_2->status);

 VAR_3 = FUNC_4(VAR_2->pipe);

 if (VAR_3)
  VAR_4 = 1;
 else
  VAR_4 = VAR_2->number_of_packets;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  if (VAR_3) {
   VAR_7 = VAR_2->actual_length;

   VAR_6 = VAR_2->transfer_buffer;
  } else {
   if (VAR_2->iso_frame_desc[VAR_5].status < 0) {
    FUNC_1(VAR_1, VAR_5,
       VAR_2->iso_frame_desc[VAR_5].status);
    if (VAR_2->iso_frame_desc[VAR_5].status != -VAR_0)
     continue;
   }

   VAR_7 = VAR_2->iso_frame_desc[VAR_5].actual_length;
   if (VAR_7 > VAR_1->max_pkt_size) {
    FUNC_0("packet bigger than packet size");
    continue;
   }

   VAR_6 = VAR_2->transfer_buffer +
           VAR_2->iso_frame_desc[VAR_5].offset;
  }

  if (VAR_7 == 0) {


   continue;
  }

  if (VAR_1->is_em25xx)
   FUNC_2(VAR_1,
        VAR_6, VAR_7);
  else
   FUNC_3(VAR_1,
        VAR_6, VAR_7);
 }
 return 1;
}
