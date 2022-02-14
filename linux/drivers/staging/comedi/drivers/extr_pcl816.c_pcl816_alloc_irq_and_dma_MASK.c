
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcl816_private {int dma; } ;
struct comedi_device {unsigned int irq; int board_name; struct pcl816_private* private; } ;
struct comedi_devconfig {unsigned int* options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comedi_device*,int,unsigned int,unsigned int,int,int ) ;
 int FUNC_1 (unsigned int,struct comedi_device*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (unsigned int,int ,int ,int ,struct comedi_device*) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_3,
         struct comedi_devconfig *VAR_4)
{
 struct pcl816_private *VAR_5 = VAR_3->private;
 unsigned int VAR_6 = VAR_4->options[1];
 unsigned int VAR_7 = VAR_4->options[2];


 if (!(VAR_6 >= 2 && VAR_6 <= 7) ||
     !(VAR_7 == 3 || VAR_7 == 1))
  return;

 if (FUNC_2(VAR_6, VAR_2, 0, VAR_3->board_name, VAR_3))
  return;


 VAR_5->dma = FUNC_0(VAR_3, 2, VAR_7, VAR_7,
        VAR_1 * 4, VAR_0);
 if (!VAR_5->dma)
  FUNC_1(VAR_6, VAR_3);
 else
  VAR_3->irq = VAR_6;
}
