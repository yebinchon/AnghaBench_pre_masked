
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pcidas64_board {unsigned int* ao_range_code; } ;
struct comedi_device {int class_dev; struct pcidas64_board* board_ptr; } ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_0,
          u16 *VAR_1, unsigned int VAR_2,
          unsigned int VAR_3)
{
 const struct pcidas64_board *VAR_4 = VAR_0->board_ptr;
 unsigned int VAR_5 = VAR_4->ao_range_code[VAR_3];

 if (VAR_2 > 1)
  FUNC_0(VAR_0->class_dev, "bug! bad channel?\n");
 if (VAR_5 & ~0x3)
  FUNC_0(VAR_0->class_dev, "bug! bad range code?\n");

 *VAR_1 &= ~(0x3 << (2 * VAR_2));
 *VAR_1 |= VAR_5 << (2 * VAR_2);
}
