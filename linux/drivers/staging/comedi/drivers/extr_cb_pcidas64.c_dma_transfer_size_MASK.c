
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pcidas64_private {unsigned int ai_fifo_segment_length; } ;
struct pcidas64_board {TYPE_1__* ai_fifo; } ;
struct comedi_device {struct pcidas64_private* private; struct pcidas64_board* board_ptr; } ;
struct TYPE_2__ {unsigned int sample_packing_ratio; } ;


 int VAR_0 ;

__attribute__((used)) static inline unsigned int FUNC_0(struct comedi_device *VAR_1)
{
 const struct pcidas64_board *VAR_2 = VAR_1->board_ptr;
 struct pcidas64_private *VAR_3 = VAR_1->private;
 unsigned int VAR_4;

 VAR_4 = VAR_3->ai_fifo_segment_length *
        VAR_2->ai_fifo->sample_packing_ratio;
 if (VAR_4 > VAR_0 / sizeof(u16))
  VAR_4 = VAR_0 / sizeof(u16);

 return VAR_4;
}
