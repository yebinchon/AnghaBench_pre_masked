
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int maxdata; } ;
struct comedi_device {int dummy; } ;


 unsigned int FUNC_0 (struct comedi_subdevice*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_0,
        struct comedi_subdevice *VAR_1, void *VAR_2,
        unsigned int VAR_3,
        unsigned int VAR_4)
{
 unsigned short *VAR_5 = VAR_2;
 unsigned int VAR_6 = VAR_1->maxdata;
 unsigned int VAR_7 = (VAR_6 + 1) >> 1;
 unsigned int VAR_8 = (VAR_6 == 0xffff) ? 0 : 4;
 unsigned int VAR_9 = FUNC_0(VAR_1, VAR_3);
 unsigned int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
  VAR_5[VAR_10] = ((VAR_5[VAR_10] >> VAR_8) & VAR_6) ^ VAR_7;
}
