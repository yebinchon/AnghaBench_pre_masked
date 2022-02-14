
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcidas64_private {unsigned int ai_fifo_segment_length; } ;
struct pcidas64_board {TYPE_1__* ai_fifo; } ;
struct comedi_device {struct pcidas64_private* private; struct pcidas64_board* board_ptr; } ;
struct TYPE_2__ {unsigned int num_segments; unsigned int sample_packing_ratio; } ;



__attribute__((used)) static unsigned int FUNC_0(struct comedi_device *VAR_0)
{
 const struct pcidas64_board *VAR_1 = VAR_0->board_ptr;
 struct pcidas64_private *VAR_2 = VAR_0->private;

 return VAR_2->ai_fifo_segment_length *
        VAR_1->ai_fifo->num_segments *
        VAR_1->ai_fifo->sample_packing_ratio;
}
