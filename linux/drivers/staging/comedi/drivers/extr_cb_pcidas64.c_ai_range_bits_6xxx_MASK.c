
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcidas64_board {int* ai_range_code; } ;
struct comedi_device {struct pcidas64_board* board_ptr; } ;



__attribute__((used)) static unsigned int FUNC_0(const struct comedi_device *VAR_0,
           unsigned int VAR_1)
{
 const struct pcidas64_board *VAR_2 = VAR_0->board_ptr;

 return VAR_2->ai_range_code[VAR_1] << 8;
}
