
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct das1800_private {scalar_t__ ai_is_unipolar; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct das1800_private* private; } ;


 unsigned int FUNC_0 (struct comedi_subdevice*,unsigned int) ;
 unsigned short FUNC_1 (struct comedi_subdevice*,unsigned short) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_0,
        struct comedi_subdevice *VAR_1,
        void *VAR_2, unsigned int VAR_3,
        unsigned int VAR_4)
{
 struct das1800_private *VAR_5 = VAR_0->private;
 unsigned short *VAR_6 = VAR_2;
 unsigned int VAR_7 = FUNC_0(VAR_1, VAR_3);
 unsigned int VAR_8;

 if (VAR_5->ai_is_unipolar)
  return;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
  VAR_6[VAR_8] = FUNC_1(VAR_1, VAR_6[VAR_8]);
}
