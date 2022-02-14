
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subdev_8255_private {unsigned long regbase; unsigned int (* io ) (struct comedi_device*,int,int ,int,unsigned long) ;} ;
struct comedi_subdevice {int state; struct subdev_8255_private* private; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct comedi_subdevice*,unsigned int*) ;
 unsigned int FUNC_1 (struct comedi_device*,int,int ,int,unsigned long) ;
 unsigned int FUNC_2 (struct comedi_device*,int,int ,int,unsigned long) ;
 unsigned int FUNC_3 (struct comedi_device*,int,int ,int,unsigned long) ;
 unsigned int FUNC_4 (struct comedi_device*,int,int ,int,unsigned long) ;
 int FUNC_5 (struct comedi_device*,int,int ,int,unsigned long) ;
 int FUNC_6 (struct comedi_device*,int,int ,int,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_3,
       struct comedi_subdevice *VAR_4,
       struct comedi_insn *VAR_5,
       unsigned int *VAR_6)
{
 struct subdev_8255_private *VAR_7 = VAR_4->private;
 unsigned long VAR_8 = VAR_7->regbase;
 unsigned int VAR_9;
 unsigned int VAR_10;

 VAR_9 = FUNC_0(VAR_4, VAR_6);
 if (VAR_9) {
  if (VAR_9 & 0xff)
   VAR_7->io(VAR_3, 1, VAR_0,
      VAR_4->state & 0xff, VAR_8);
  if (VAR_9 & 0xff00)
   VAR_7->io(VAR_3, 1, VAR_1,
      (VAR_4->state >> 8) & 0xff, VAR_8);
  if (VAR_9 & 0xff0000)
   VAR_7->io(VAR_3, 1, VAR_2,
      (VAR_4->state >> 16) & 0xff, VAR_8);
 }

 VAR_10 = VAR_7->io(VAR_3, 0, VAR_0, 0, VAR_8);
 VAR_10 |= (VAR_7->io(VAR_3, 0, VAR_1, 0, VAR_8) << 8);
 VAR_10 |= (VAR_7->io(VAR_3, 0, VAR_2, 0, VAR_8) << 16);

 VAR_6[1] = VAR_10;

 return VAR_5->n;
}
