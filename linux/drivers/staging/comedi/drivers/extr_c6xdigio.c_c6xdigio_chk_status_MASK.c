
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_3, unsigned long VAR_4)
{
 unsigned int VAR_5;
 int VAR_6 = 0;

 do {
  VAR_5 = FUNC_0(VAR_3->iobase + VAR_0);
  if ((VAR_5 & 0x80) != VAR_4)
   return 0;
  VAR_6++;
 } while (VAR_6 < VAR_1);

 return -VAR_2;
}
