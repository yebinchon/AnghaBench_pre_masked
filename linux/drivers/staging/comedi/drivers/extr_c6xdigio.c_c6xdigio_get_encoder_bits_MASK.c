
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct comedi_device*,unsigned int,unsigned int) ;
 unsigned int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_1,
         unsigned int *VAR_2,
         unsigned int VAR_3,
         unsigned int VAR_4)
{
 unsigned int VAR_5;

 VAR_5 = FUNC_1(VAR_1->iobase + VAR_0);
 VAR_5 >>= 3;
 VAR_5 &= 0x07;

 *VAR_2 = VAR_5;

 return FUNC_0(VAR_1, VAR_3, VAR_4);
}
