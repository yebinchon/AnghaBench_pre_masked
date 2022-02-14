
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int maxdata; } ;
struct comedi_device {int dummy; } ;
typedef int __le16 ;


 unsigned int FUNC_0 (struct comedi_subdevice*,unsigned int) ;
 unsigned short FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_0,
      struct comedi_subdevice *VAR_1, void *VAR_2,
      unsigned int VAR_3,
      unsigned int VAR_4)
{
 unsigned short *VAR_5 = VAR_2;
 unsigned int VAR_6 = FUNC_0(VAR_1, VAR_3);
 unsigned int VAR_7;
 __le16 *VAR_8 = VAR_2;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  VAR_5[VAR_7] = FUNC_1(VAR_8[VAR_7]);
  if (VAR_1->maxdata == 0x0fff)
   VAR_5[VAR_7] >>= 4;
  VAR_5[VAR_7] &= VAR_1->maxdata;
 }
}
