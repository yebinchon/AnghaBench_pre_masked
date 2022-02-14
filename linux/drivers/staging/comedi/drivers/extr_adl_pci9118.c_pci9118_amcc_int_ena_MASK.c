
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci9118_private {scalar_t__ iobase_a; } ;
struct comedi_device {struct pci9118_private* private; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_1, bool VAR_2)
{
 struct pci9118_private *VAR_3 = VAR_1->private;
 unsigned int VAR_4;


 VAR_4 = FUNC_0(VAR_3->iobase_a + VAR_0);
 if (VAR_2)
  VAR_4 |= 0x1f00;
 else
  VAR_4 &= ~0x1f00;
 FUNC_1(VAR_4, VAR_3->iobase_a + VAR_0);
}
