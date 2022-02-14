
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {unsigned int number_of_packets; TYPE_1__* iso_frame_desc; scalar_t__ actual_length; } ;
struct TYPE_2__ {scalar_t__ actual_length; } ;



__attribute__((used)) static void FUNC_0(struct urb *VAR_0)
{
 unsigned int VAR_1;

 if (VAR_0->number_of_packets > 0) {
  VAR_0->actual_length = 0;
  for (VAR_1 = 0; VAR_1 < VAR_0->number_of_packets; VAR_1++)
   VAR_0->actual_length +=
     VAR_0->iso_frame_desc[VAR_1].actual_length;
 }
}
