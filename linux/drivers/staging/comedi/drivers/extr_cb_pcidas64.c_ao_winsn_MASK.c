
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcidas64_private {unsigned int dac_control1_bits; scalar_t__ main_iobase; } ;
struct pcidas64_board {scalar_t__ layout; } ;
struct comedi_subdevice {unsigned int* readback; } ;
struct comedi_insn {unsigned int n; int chanspec; } ;
struct comedi_device {struct pcidas64_private* private; struct pcidas64_board* board_ptr; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (unsigned int) ;
 int FUNC_5 (struct comedi_device*,unsigned int*,unsigned int,unsigned int) ;
 int FUNC_6 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_3, struct comedi_subdevice *VAR_4,
      struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 const struct pcidas64_board *VAR_7 = VAR_3->board_ptr;
 struct pcidas64_private *VAR_8 = VAR_3->private;
 unsigned int VAR_9 = FUNC_0(VAR_5->chanspec);
 unsigned int VAR_10 = FUNC_1(VAR_5->chanspec);
 unsigned int VAR_11 = VAR_4->readback[VAR_9];
 unsigned int VAR_12;


 FUNC_6(0, VAR_8->main_iobase + VAR_0);


 FUNC_5(VAR_3, &VAR_8->dac_control1_bits, VAR_9, VAR_10);
 FUNC_6(VAR_8->dac_control1_bits,
        VAR_8->main_iobase + VAR_1);

 for (VAR_12 = 0; VAR_12 < VAR_5->n; VAR_12++) {

  VAR_11 = VAR_6[VAR_12];
  if (VAR_7->layout == VAR_2) {
   FUNC_6(VAR_11 & 0xff,
          VAR_8->main_iobase + FUNC_3(VAR_9));
   FUNC_6((VAR_11 >> 8) & 0xf,
          VAR_8->main_iobase + FUNC_4(VAR_9));
  } else {
   FUNC_6(VAR_11,
          VAR_8->main_iobase + FUNC_2(VAR_9));
  }
 }


 VAR_4->readback[VAR_9] = VAR_11;

 return VAR_5->n;
}
