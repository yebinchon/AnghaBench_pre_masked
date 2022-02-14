
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dio200_board {scalar_t__ is_pcie; } ;
struct comedi_device {scalar_t__ iobase; scalar_t__ mmio; struct dio200_board* board_ptr; } ;


 int FUNC_0 (unsigned int,scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_0,
      unsigned int VAR_1, unsigned int VAR_2)
{
 const struct dio200_board *VAR_3 = VAR_0->board_ptr;

 if (VAR_3->is_pcie)
  VAR_1 <<= 3;

 if (VAR_0->mmio)
  FUNC_1(VAR_2, VAR_0->mmio + VAR_1);
 else
  FUNC_0(VAR_2, VAR_0->iobase + VAR_1);
}
