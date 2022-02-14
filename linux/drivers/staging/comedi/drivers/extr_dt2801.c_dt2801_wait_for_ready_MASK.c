
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_5)
{
 int VAR_6 = VAR_1;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_5->iobase + VAR_0);
 if (VAR_7 & VAR_3)
  return 0;
 do {
  VAR_7 = FUNC_0(VAR_5->iobase + VAR_0);

  if (VAR_7 & VAR_2)
   return VAR_7;
  if (VAR_7 & VAR_3)
   return 0;
 } while (--VAR_6 > 0);

 return -VAR_4;
}
