
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int is_611x; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct comedi_subdevice* read_subdev; struct ni_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comedi_subdevice*,unsigned short*,int) ;
 int FUNC_1 (struct comedi_device*,int ) ;
 unsigned int FUNC_2 (struct comedi_device*,int ) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_2)
{
 struct ni_private *VAR_3 = VAR_2->private;
 struct comedi_subdevice *VAR_4 = VAR_2->read_subdev;
 unsigned short VAR_5;
 unsigned int VAR_6;

 if (!VAR_3->is_611x)
  return;


 if (FUNC_1(VAR_2, VAR_1) & 0x80) {
  VAR_6 = FUNC_2(VAR_2, VAR_0);
  VAR_5 = VAR_6 & 0xffff;
  FUNC_0(VAR_4, &VAR_5, 1);
 }
}
