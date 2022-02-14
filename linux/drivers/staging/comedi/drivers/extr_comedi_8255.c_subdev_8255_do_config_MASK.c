
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subdev_8255_private {unsigned long regbase; int (* io ) (struct comedi_device*,int,int ,int,unsigned long) ;} ;
struct comedi_subdevice {int io_bits; struct subdev_8255_private* private; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct comedi_device*,int,int ,int,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_6,
      struct comedi_subdevice *VAR_7)
{
 struct subdev_8255_private *VAR_8 = VAR_7->private;
 unsigned long VAR_9 = VAR_8->regbase;
 int VAR_10;

 VAR_10 = VAR_2;

 if (!(VAR_7->io_bits & 0x0000ff))
  VAR_10 |= VAR_0;
 if (!(VAR_7->io_bits & 0x00ff00))
  VAR_10 |= VAR_1;
 if (!(VAR_7->io_bits & 0x0f0000))
  VAR_10 |= VAR_4;
 if (!(VAR_7->io_bits & 0xf00000))
  VAR_10 |= VAR_3;

 VAR_8->io(VAR_6, 1, VAR_5, VAR_10, VAR_9);
}
