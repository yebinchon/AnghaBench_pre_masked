
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;


 unsigned short FUNC_0 (struct comedi_device*,unsigned int,unsigned int) ;
 unsigned short FUNC_1 (struct comedi_device*,unsigned int,unsigned int) ;
 unsigned short FUNC_2 (struct comedi_device*,unsigned int,unsigned int) ;

__attribute__((used)) static unsigned short FUNC_3(struct comedi_device *VAR_0,
        unsigned int VAR_1, unsigned int VAR_2,
        unsigned int VAR_3)
{
 enum {
  SAWTOOTH_CHAN,
  SQUARE_CHAN,
 };
 switch (VAR_1) {
 case SAWTOOTH_CHAN:
  return FUNC_1(VAR_0, VAR_2, VAR_3);
 case SQUARE_CHAN:
  return FUNC_2(VAR_0, VAR_2, VAR_3);
 default:
  break;
 }

 return FUNC_0(VAR_0, VAR_2, VAR_3);
}
