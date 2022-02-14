
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;


 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,int (*) (struct comedi_device*,int,int,int,unsigned long),unsigned long,int) ;

int FUNC_1(struct comedi_device *VAR_0, struct comedi_subdevice *VAR_1,
       int (*VAR_2)(struct comedi_device *VAR_3, int VAR_4, int VAR_5,
          int VAR_6, unsigned long VAR_7),
       unsigned long VAR_8)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_8, 0);
}
