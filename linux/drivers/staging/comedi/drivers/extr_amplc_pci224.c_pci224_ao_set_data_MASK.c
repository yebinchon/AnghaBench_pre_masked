
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci224_private {unsigned short daccon; } ;
struct pci224_board {int ao_bits; int * ao_hwrange; } ;
struct comedi_device {scalar_t__ iobase; struct pci224_private* private; struct pci224_board* board_ptr; } ;


 unsigned short FUNC_0 (unsigned short,int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned short VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned short,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct comedi_device *VAR_8, int VAR_9, int VAR_10,
     unsigned int VAR_11)
{
 const struct pci224_board *VAR_12 = VAR_8->board_ptr;
 struct pci224_private *VAR_13 = VAR_8->private;
 unsigned short VAR_14;


 FUNC_2(1 << VAR_9, VAR_8->iobase + VAR_0);

 VAR_13->daccon = FUNC_0(VAR_13->daccon, VAR_12->ao_hwrange[VAR_10],
      VAR_4 |
      VAR_5);
 FUNC_2(VAR_13->daccon | VAR_2,
      VAR_8->iobase + VAR_1);





 VAR_14 = (unsigned short)VAR_11 << (16 - VAR_12->ao_bits);
 if ((VAR_13->daccon & VAR_4) ==
     VAR_3) {
  VAR_14 ^= 0x8000;
 }

 FUNC_2(VAR_14, VAR_8->iobase + VAR_6);

 FUNC_1(VAR_8->iobase + VAR_7);
}
