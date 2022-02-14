
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dio200_subdev_8255 {scalar_t__ ofs; } ;
struct comedi_subdevice {int io_bits; struct dio200_subdev_8255* private; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct comedi_device*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_6,
           struct comedi_subdevice *VAR_7)
{
 struct dio200_subdev_8255 *VAR_8 = VAR_7->private;
 int VAR_9;

 VAR_9 = VAR_2;

 if (!(VAR_7->io_bits & 0x0000ff))
  VAR_9 |= VAR_0;
 if (!(VAR_7->io_bits & 0x00ff00))
  VAR_9 |= VAR_1;
 if (!(VAR_7->io_bits & 0x0f0000))
  VAR_9 |= VAR_4;
 if (!(VAR_7->io_bits & 0xf00000))
  VAR_9 |= VAR_3;
 FUNC_0(VAR_6, VAR_8->ofs + VAR_5, VAR_9);
}
