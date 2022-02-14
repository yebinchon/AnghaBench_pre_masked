
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_6, unsigned int VAR_7)
{
 int VAR_8 = 0;
 int VAR_9 = VAR_2;

 do {
  VAR_8 = FUNC_0(VAR_6->iobase + VAR_1);

  if (VAR_8 & VAR_3)
   return VAR_8;
  if (!(VAR_8 & VAR_4)) {
   FUNC_1(VAR_7 & 0xff, VAR_6->iobase + VAR_0);
   return 0;
  }
 } while (--VAR_9 > 0);

 return -VAR_5;
}
