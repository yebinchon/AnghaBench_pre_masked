
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dio200_board {scalar_t__ is_pcie; } ;
struct comedi_device {scalar_t__ iobase; scalar_t__ mmio; struct dio200_board* board_ptr; } ;


 unsigned char FUNC_0 (scalar_t__) ;
 unsigned char FUNC_1 (scalar_t__) ;

__attribute__((used)) static unsigned char FUNC_2(struct comedi_device *VAR_0,
      unsigned int VAR_1)
{
 const struct dio200_board *VAR_2 = VAR_0->board_ptr;

 if (VAR_2->is_pcie)
  VAR_1 <<= 3;

 if (VAR_0->mmio)
  return FUNC_1(VAR_0->mmio + VAR_1);
 return FUNC_0(VAR_0->iobase + VAR_1);
}
