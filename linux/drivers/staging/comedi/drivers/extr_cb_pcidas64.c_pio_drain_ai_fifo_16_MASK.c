
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pcidas64_private {int ai_fifo_segment_length; scalar_t__ main_iobase; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {int class_dev; struct comedi_subdevice* read_subdev; struct pcidas64_private* private; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct comedi_subdevice*,unsigned short*,int) ;
 int FUNC_3 (struct comedi_subdevice*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct comedi_device *VAR_4)
{
 struct pcidas64_private *VAR_5 = VAR_4->private;
 struct comedi_subdevice *VAR_6 = VAR_4->read_subdev;
 unsigned int VAR_7;
 u16 VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13;

 do {

  VAR_10 = FUNC_5(VAR_5->main_iobase + VAR_1) &
        0x7fff;
  VAR_12 = FUNC_5(VAR_5->main_iobase + VAR_2) &
         0x7fff;







  VAR_8 = FUNC_5(VAR_5->main_iobase + VAR_3);





  VAR_9 = FUNC_0(VAR_8);
  VAR_11 = FUNC_1(VAR_8);

  if (VAR_9 != VAR_11)
   VAR_13 =
    VAR_5->ai_fifo_segment_length - VAR_10;
  else
   VAR_13 = VAR_12 - VAR_10;
  if (VAR_13 < 0) {
   FUNC_4(VAR_4->class_dev,
    "cb_pcidas64: bug! num_samples < 0\n");
   break;
  }

  VAR_13 = FUNC_3(VAR_6, VAR_13);
  if (VAR_13 == 0)
   break;

  for (VAR_7 = 0; VAR_7 < VAR_13; VAR_7++) {
   unsigned short VAR_14;

   VAR_14 = FUNC_5(VAR_5->main_iobase + VAR_0);
   FUNC_2(VAR_6, &VAR_14, 1);
  }

 } while (VAR_9 != VAR_11);
}
