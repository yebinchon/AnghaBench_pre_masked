
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci230_private {scalar_t__ ai_bipolar; scalar_t__ daqio; } ;
struct pci230_board {int ai_bits; } ;
struct comedi_device {struct pci230_private* private; struct pci230_board* board_ptr; } ;


 scalar_t__ VAR_0 ;
 unsigned short FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned short FUNC_1(struct comedi_device *VAR_1)
{
 const struct pci230_board *VAR_2 = VAR_1->board_ptr;
 struct pci230_private *VAR_3 = VAR_1->private;
 unsigned short VAR_4;


 VAR_4 = FUNC_0(VAR_3->daqio + VAR_0);







 if (VAR_3->ai_bipolar)
  VAR_4 ^= 0x8000;
 VAR_4 >>= (16 - VAR_2->ai_bits);
 return VAR_4;
}
