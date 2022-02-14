
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;


 unsigned int FUNC_0 (struct comedi_subdevice*,unsigned short*,unsigned int) ;
 unsigned int FUNC_1 (struct comedi_subdevice*,unsigned int) ;
 unsigned int FUNC_2 (struct comedi_subdevice*,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_3(struct comedi_device *VAR_0,
            struct comedi_subdevice *VAR_1,
            unsigned short *VAR_2,
            unsigned int VAR_3)
{
 unsigned int VAR_4 = FUNC_1(VAR_1, VAR_3);
 unsigned int VAR_5;

 VAR_4 = FUNC_2(VAR_1, VAR_4);
 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_4);

 return FUNC_1(VAR_1, VAR_5);
}
