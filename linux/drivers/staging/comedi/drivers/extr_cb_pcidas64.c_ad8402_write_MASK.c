
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcidas64_private {scalar_t__ main_iobase; } ;
struct comedi_device {struct pcidas64_private* private; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_4, unsigned int VAR_5,
    unsigned int VAR_6)
{
 struct pcidas64_private *VAR_7 = VAR_4->private;
 static const int VAR_8 = 10;
 unsigned int VAR_9, VAR_10;
 unsigned int VAR_11 = ((VAR_5 & 0x3) << 8) | (VAR_6 & 0xff);
 static const int VAR_12 = 1;

 VAR_10 = VAR_1;
 FUNC_0(VAR_12);
 FUNC_1(VAR_10, VAR_7->main_iobase + VAR_0);

 for (VAR_9 = 1 << (VAR_8 - 1); VAR_9; VAR_9 >>= 1) {
  if (VAR_11 & VAR_9)
   VAR_10 |= VAR_3;
  else
   VAR_10 &= ~VAR_3;
  FUNC_0(VAR_12);
  FUNC_1(VAR_10, VAR_7->main_iobase + VAR_0);
  FUNC_0(VAR_12);
  FUNC_1(VAR_10 | VAR_2,
         VAR_7->main_iobase + VAR_0);
 }

 FUNC_0(VAR_12);
 FUNC_1(0, VAR_7->main_iobase + VAR_0);
}
