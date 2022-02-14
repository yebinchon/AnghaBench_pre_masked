
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; struct apci3120_private* private; } ;
struct apci3120_private {int do_bits; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_2,
     unsigned int VAR_3, unsigned int VAR_4)
{
 struct apci3120_private *VAR_5 = VAR_2->private;


 FUNC_2(FUNC_0(VAR_5->do_bits) |
      FUNC_1(VAR_3),
      VAR_2->iobase + VAR_0);
 FUNC_3(VAR_4 & 0xffff, VAR_2->iobase + VAR_1);

 if (VAR_3 == 2) {

  FUNC_2(FUNC_0(VAR_5->do_bits) |
       FUNC_1(VAR_3 + 1),
       VAR_2->iobase + VAR_0);
  FUNC_3((VAR_4 >> 16) & 0xffff, VAR_2->iobase + VAR_1);
 }
}
