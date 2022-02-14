
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {unsigned int irq; int board_name; struct a2150_private* private; } ;
struct comedi_devconfig {unsigned int* options; } ;
struct a2150_private {int irq_dma_bits; int dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_2 ;
 int FUNC_2 (struct comedi_device*,int,unsigned int,unsigned int,int ,int ) ;
 int FUNC_3 (unsigned int,struct comedi_device*) ;
 scalar_t__ FUNC_4 (unsigned int,int ,int ,int ,struct comedi_device*) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_3,
        struct comedi_devconfig *VAR_4)
{
 struct a2150_private *VAR_5 = VAR_3->private;
 unsigned int VAR_6 = VAR_4->options[1];
 unsigned int VAR_7 = VAR_4->options[2];





 if (VAR_6 > 15 || VAR_7 > 7 ||
     !((1 << VAR_6) & 0xdef8) || !((1 << VAR_7) & 0xef))
  return;

 if (FUNC_4(VAR_6, VAR_2, 0, VAR_3->board_name, VAR_3))
  return;


 VAR_5->dma = FUNC_2(VAR_3, 1, VAR_7, VAR_7,
        VAR_0,
        VAR_1);
 if (!VAR_5->dma) {
  FUNC_3(VAR_6, VAR_3);
 } else {
  VAR_3->irq = VAR_6;
  VAR_5->irq_dma_bits = FUNC_1(VAR_6) |
     FUNC_0(VAR_7);
 }
}
