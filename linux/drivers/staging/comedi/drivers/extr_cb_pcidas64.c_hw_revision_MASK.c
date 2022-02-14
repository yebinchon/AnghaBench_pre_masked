
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pcidas64_board {scalar_t__ layout; } ;
struct comedi_device {struct pcidas64_board* board_ptr; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(const struct comedi_device *VAR_1,
    u16 VAR_2)
{
 const struct pcidas64_board *VAR_3 = VAR_1->board_ptr;

 if (VAR_3->layout == VAR_0)
  return (VAR_2 >> 13) & 0x7;

 return (VAR_2 >> 12) & 0xf;
}
