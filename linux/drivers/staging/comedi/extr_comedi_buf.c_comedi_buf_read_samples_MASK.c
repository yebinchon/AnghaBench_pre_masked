
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct TYPE_2__ {int events; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_subdevice*,void*,unsigned int) ;
 unsigned int FUNC_1 (struct comedi_subdevice*,int ) ;
 int FUNC_2 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_3 (struct comedi_subdevice*) ;
 unsigned int FUNC_4 (struct comedi_subdevice*,int ) ;
 int FUNC_5 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_6 (struct comedi_subdevice*,unsigned int) ;

unsigned int FUNC_7(struct comedi_subdevice *VAR_1,
         void *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;
 unsigned int VAR_5;


 VAR_4 = FUNC_4(VAR_1,
           FUNC_3(VAR_1));
 if (VAR_3 > VAR_4)
  VAR_3 = VAR_4;

 if (VAR_3 == 0)
  return 0;

 VAR_5 = FUNC_1(VAR_1,
           FUNC_6(VAR_1, VAR_3));
 FUNC_0(VAR_1, VAR_2, VAR_5);
 FUNC_2(VAR_1, VAR_5);
 FUNC_5(VAR_1, VAR_5);
 VAR_1->async->events |= VAR_0;

 return VAR_5;
}
