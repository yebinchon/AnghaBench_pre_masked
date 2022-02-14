
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
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_7, int *VAR_8)
{
 int VAR_9 = 0;
 int VAR_10 = VAR_2;

 do {
  VAR_9 = FUNC_0(VAR_7->iobase + VAR_1);
  if (VAR_9 & (VAR_3 | VAR_5))
   return VAR_9;
  if (VAR_9 & VAR_4) {
   *VAR_8 = FUNC_0(VAR_7->iobase + VAR_0);
   return 0;
  }
 } while (--VAR_10 > 0);

 return -VAR_6;
}
