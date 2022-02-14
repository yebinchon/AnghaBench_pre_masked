
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
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_4(struct comedi_device *VAR_2,
     unsigned int VAR_3)
{
 struct apci3120_private *VAR_4 = VAR_2->private;
 unsigned int VAR_5;


 FUNC_3(FUNC_0(VAR_4->do_bits) |
      FUNC_1(VAR_3),
      VAR_2->iobase + VAR_0);
 VAR_5 = FUNC_2(VAR_2->iobase + VAR_1);

 if (VAR_3 == 2) {

  FUNC_3(FUNC_0(VAR_4->do_bits) |
       FUNC_1(VAR_3 + 1),
       VAR_2->iobase + VAR_0);
  VAR_5 |= (FUNC_2(VAR_2->iobase + VAR_1) << 16);
 }

 return VAR_5;
}
