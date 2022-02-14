
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct daqp_private {scalar_t__ stop; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; struct daqp_private* private; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_5,
     struct comedi_subdevice *VAR_6)
{
 struct daqp_private *VAR_7 = VAR_5->private;

 if (VAR_7->stop)
  return -VAR_4;





 FUNC_1(VAR_1, VAR_5->iobase + VAR_0);
 FUNC_1(0, VAR_5->iobase + VAR_2);
 FUNC_0(VAR_5->iobase + VAR_3);

 return 0;
}
