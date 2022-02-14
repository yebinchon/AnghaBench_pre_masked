
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {scalar_t__ is_m_series; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct ni_private* private; } ;


 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,unsigned int*,unsigned int,int) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,unsigned int*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_0,
     struct comedi_subdevice *VAR_1,
     unsigned int VAR_2[], unsigned int VAR_3,
     int VAR_4)
{
 struct ni_private *VAR_5 = VAR_0->private;

 if (VAR_5->is_m_series)
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3,
            VAR_4);
 else
  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
}
