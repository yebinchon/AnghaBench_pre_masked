
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv_pcm3724 {unsigned int dio_1; unsigned int dio_2; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; struct comedi_subdevice* subdevices; struct priv_pcm3724* private; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_7, struct comedi_subdevice *VAR_8,
   int VAR_9)
{
 struct priv_pcm3724 *VAR_10 = VAR_7->private;
 struct comedi_subdevice *VAR_11 = &VAR_7->subdevices[0];
 unsigned int VAR_12;
 int VAR_13;

 VAR_13 = 0;

 VAR_12 = 1 << FUNC_0(VAR_9);
 if (VAR_8 == VAR_11)
  VAR_10->dio_1 |= VAR_12;
 else
  VAR_10->dio_2 |= VAR_12;

 if (VAR_10->dio_1 & 0xff0000)
  VAR_13 |= VAR_4;

 if (VAR_10->dio_1 & 0xff00)
  VAR_13 |= VAR_2;

 if (VAR_10->dio_1 & 0xff)
  VAR_13 |= VAR_0;

 if (VAR_10->dio_2 & 0xff0000)
  VAR_13 |= VAR_5;

 if (VAR_10->dio_2 & 0xff00)
  VAR_13 |= VAR_3;

 if (VAR_10->dio_2 & 0xff)
  VAR_13 |= VAR_1;

 FUNC_1(VAR_13, VAR_7->iobase + VAR_6);
}
