
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dt282x_private {int dma; } ;
struct comedi_device {unsigned int irq; int board_name; struct dt282x_private* private; } ;
struct comedi_devconfig {unsigned int* options; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_device*,int,unsigned int,unsigned int,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (unsigned int,struct comedi_device*) ;
 scalar_t__ FUNC_2 (unsigned int,int ,int ,int ,struct comedi_device*) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_2,
        struct comedi_devconfig *VAR_3)
{
 struct dt282x_private *VAR_4 = VAR_2->private;
 unsigned int VAR_5 = VAR_3->options[1];
 unsigned int VAR_6[2];

 if (VAR_3->options[2] < VAR_3->options[3]) {
  VAR_6[0] = VAR_3->options[2];
  VAR_6[1] = VAR_3->options[3];
 } else {
  VAR_6[0] = VAR_3->options[3];
  VAR_6[1] = VAR_3->options[2];
 }

 if (!VAR_5 || VAR_6[0] == VAR_6[1] ||
     VAR_6[0] < 5 || VAR_6[0] > 7 ||
     VAR_6[1] < 5 || VAR_6[1] > 7)
  return;

 if (FUNC_2(VAR_5, VAR_1, 0, VAR_2->board_name, VAR_2))
  return;


 VAR_4->dma = FUNC_0(VAR_2, 2, VAR_6[0], VAR_6[1],
        VAR_0, 0);
 if (!VAR_4->dma)
  FUNC_1(VAR_5, VAR_2);
 else
  VAR_2->irq = VAR_5;
}
