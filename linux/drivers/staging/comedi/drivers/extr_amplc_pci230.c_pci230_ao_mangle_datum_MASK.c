
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci230_private {scalar_t__ ao_bipolar; } ;
struct pci230_board {int ao_bits; } ;
struct comedi_device {struct pci230_private* private; struct pci230_board* board_ptr; } ;



__attribute__((used)) static unsigned short FUNC_0(struct comedi_device *VAR_0,
          unsigned short VAR_1)
{
 const struct pci230_board *VAR_2 = VAR_0->board_ptr;
 struct pci230_private *VAR_3 = VAR_0->private;





 VAR_1 <<= (16 - VAR_2->ao_bits);




 if (VAR_3->ao_bipolar)
  VAR_1 ^= 0x8000;
 return VAR_1;
}
