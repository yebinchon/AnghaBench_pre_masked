
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;


 int FUNC_0 (struct comedi_subdevice*,unsigned short*,int) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_0,
      struct comedi_subdevice *VAR_1,
      unsigned short *VAR_2,
      unsigned int VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5;
 unsigned short VAR_6;

 for (VAR_5 = VAR_4; VAR_5; VAR_5--) {
  VAR_6 = VAR_2[VAR_3++];
  FUNC_0(VAR_1, &VAR_6, 1);

  if (!FUNC_1(VAR_0, VAR_1))
   break;
 }
}
