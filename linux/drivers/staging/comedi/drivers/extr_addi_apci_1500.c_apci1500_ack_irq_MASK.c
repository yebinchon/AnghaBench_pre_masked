
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct comedi_device*,unsigned int) ;
 int FUNC_1 (struct comedi_device*,unsigned int,unsigned int) ;

__attribute__((used)) static bool FUNC_2(struct comedi_device *VAR_2,
        unsigned int VAR_3)
{
 unsigned int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if ((VAR_4 & VAR_1) == VAR_1) {
  VAR_4 &= 0x0f;
  VAR_4 |= VAR_0;
  FUNC_1(VAR_2, VAR_4, VAR_3);

  return 1;
 }
 return 0;
}
