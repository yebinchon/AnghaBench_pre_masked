
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2,
      int VAR_3, int VAR_4, int VAR_5, unsigned long VAR_6)
{

 FUNC_1(VAR_0, VAR_2->iobase + VAR_1);

 if (VAR_3) {
  FUNC_1(VAR_5, VAR_2->iobase + VAR_6 + VAR_4);
  return 0;
 }
 return FUNC_0(VAR_2->iobase + VAR_6 + VAR_4);
}
