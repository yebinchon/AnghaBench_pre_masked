
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;
 unsigned int VAR_1 ;
 unsigned int FUNC_4 (unsigned int) ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_5 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct comedi_device *VAR_4,
        unsigned int VAR_5,
        int VAR_6)
{
 unsigned int VAR_7 = FUNC_1(VAR_5);
 unsigned int VAR_8 = FUNC_2(VAR_5);
 unsigned int VAR_9 = FUNC_0(VAR_5);
 unsigned int VAR_10;

 VAR_10 = FUNC_3(VAR_7) | FUNC_4(VAR_8);

 if (VAR_9 == VAR_0)
  VAR_10 |= VAR_1;

 if (VAR_6)
  VAR_10 |= VAR_3;

 FUNC_5(VAR_10 & 0xff, VAR_4->iobase + VAR_2);
 FUNC_5((VAR_10 >> 8) & 0xff, VAR_4->iobase + VAR_2);
}
