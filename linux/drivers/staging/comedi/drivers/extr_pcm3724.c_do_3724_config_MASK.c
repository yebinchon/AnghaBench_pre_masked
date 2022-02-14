
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int io_bits; } ;
struct comedi_device {unsigned long iobase; struct comedi_subdevice* subdevices; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_0 (int,int,struct comedi_subdevice*) ;
 int FUNC_1 (int,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_8,
      struct comedi_subdevice *VAR_9, int VAR_10)
{
 struct comedi_subdevice *VAR_11 = &VAR_8->subdevices[0];
 struct comedi_subdevice *VAR_12 = &VAR_8->subdevices[1];
 int VAR_13;
 int VAR_14;
 unsigned long VAR_15;

 VAR_13 = VAR_2;
 VAR_14 = 0;


 if (!(VAR_9->io_bits & 0x0000ff))
  VAR_13 |= VAR_0;

 if (!(VAR_9->io_bits & 0x00ff00))
  VAR_13 |= VAR_1;

 if (!(VAR_9->io_bits & 0xff0000))
  VAR_13 |= VAR_3 | VAR_4;

 VAR_14 = FUNC_0(0, 0, VAR_11);
 VAR_14 = FUNC_0(VAR_14, 1, VAR_12);

 if (VAR_9 == VAR_11)
  VAR_15 = VAR_8->iobase + VAR_5;
 else
  VAR_15 = VAR_8->iobase + VAR_6 + VAR_5;

 FUNC_1(VAR_14, VAR_8->iobase + VAR_7);

 FUNC_1(VAR_13, VAR_15);
}
