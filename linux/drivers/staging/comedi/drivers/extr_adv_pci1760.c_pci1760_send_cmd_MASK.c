
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 unsigned long VAR_2 ;
 int FUNC_4 (unsigned char,scalar_t__) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;
 unsigned long FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_3,
       unsigned char VAR_4, unsigned short VAR_5)
{
 unsigned long VAR_6;


 FUNC_4(VAR_5 & 0xff, VAR_3->iobase + FUNC_1(0));
 FUNC_4((VAR_5 >> 8) & 0xff, VAR_3->iobase + FUNC_1(1));
 FUNC_4(VAR_4, VAR_3->iobase + FUNC_1(2));
 FUNC_4(0, VAR_3->iobase + FUNC_1(3));


 VAR_6 = VAR_2 + FUNC_6(VAR_1);
 do {
  if (FUNC_3(VAR_3->iobase + FUNC_0(2)) == VAR_4) {

   return FUNC_3(VAR_3->iobase + FUNC_0(0)) |
          (FUNC_3(VAR_3->iobase + FUNC_0(1)) << 8);
  }
  FUNC_2();
 } while (FUNC_5(VAR_2, VAR_6));

 return -VAR_0;
}
