
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {struct comedi_device const* device; } ;
struct comedi_device {int dummy; } ;


 unsigned int VAR_0 ;
 struct comedi_subdevice** VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct comedi_subdevice *
FUNC_2(const struct comedi_device *VAR_3, unsigned int VAR_4)
{
 struct comedi_subdevice *VAR_5;
 unsigned int VAR_6 = VAR_4 - VAR_0;

 FUNC_0(&VAR_2);
 VAR_5 = VAR_1[VAR_6];
 if (VAR_5 && VAR_5->device != VAR_3)
  VAR_5 = ((void*)0);
 FUNC_1(&VAR_2);
 return VAR_5;
}
