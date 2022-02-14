
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci9118_private {scalar_t__ iobase_a; } ;
struct comedi_device {struct pci9118_private* private; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_4, bool VAR_5)
{
 struct pci9118_private *VAR_6 = VAR_4->private;
 unsigned int VAR_7;

 VAR_7 = FUNC_0(VAR_6->iobase_a + VAR_1);
 if (VAR_5)
  VAR_7 |= VAR_3 | VAR_0 | VAR_2;
 else
  VAR_7 &= ~VAR_2;
 FUNC_1(VAR_7, VAR_6->iobase_a + VAR_1);
}
