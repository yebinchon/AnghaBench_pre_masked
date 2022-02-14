
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int dio_output; scalar_t__ serial_interval_ns; } ;
struct comedi_subdevice {int state; } ;
struct comedi_insn {int n; } ;
struct comedi_device {struct ni_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ FUNC_1 (struct comedi_subdevice*,unsigned int*) ;
 unsigned int FUNC_2 (struct comedi_device*,int ) ;
 int FUNC_3 (struct comedi_device*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_6,
       struct comedi_subdevice *VAR_7,
       struct comedi_insn *VAR_8,
       unsigned int *VAR_9)
{
 struct ni_private *VAR_10 = VAR_6->private;


 if ((VAR_9[0] & (VAR_4 | VAR_5)) &&
     VAR_10->serial_interval_ns)
  return -VAR_0;

 if (FUNC_1(VAR_7, VAR_9)) {
  VAR_10->dio_output &= ~VAR_2;
  VAR_10->dio_output |= FUNC_0(VAR_7->state);
  FUNC_3(VAR_6, VAR_10->dio_output, VAR_3);
 }

 VAR_9[1] = FUNC_2(VAR_6, VAR_1);

 return VAR_8->n;
}
