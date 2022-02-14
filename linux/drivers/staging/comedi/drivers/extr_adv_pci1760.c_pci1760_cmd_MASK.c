
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned char FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct comedi_device*,unsigned char,unsigned short) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_3,
         unsigned char VAR_4, unsigned short VAR_5)
{
 int VAR_6;
 int VAR_7;


 if (FUNC_1(VAR_3->iobase + FUNC_0(2)) == VAR_4) {
  VAR_7 = FUNC_2(VAR_3, VAR_1, 0);
  if (VAR_7 < 0) {

   VAR_7 = FUNC_2(VAR_3, VAR_1, 0);
   if (VAR_7 < 0)
    return -VAR_0;
  }
 }


 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5);
  if (VAR_7 >= 0)
   return VAR_7;
 }


 return -VAR_0;
}
