
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 scalar_t__ FUNC_2 (struct comedi_subdevice*,unsigned int) ;

__attribute__((used)) static unsigned char FUNC_3(struct comedi_subdevice *VAR_6,
           unsigned int VAR_7)
{
 unsigned int VAR_8 = FUNC_1(VAR_7);
 unsigned int VAR_9 = FUNC_0(VAR_7);
 unsigned char VAR_10;

 VAR_10 = VAR_5;
 if (VAR_9 != VAR_1)
  VAR_10 |= VAR_3;
 if (VAR_9 == VAR_0)
  VAR_10 |= VAR_2;
 if (FUNC_2(VAR_6, VAR_8))
  VAR_10 |= VAR_4;

 return VAR_10;
}
