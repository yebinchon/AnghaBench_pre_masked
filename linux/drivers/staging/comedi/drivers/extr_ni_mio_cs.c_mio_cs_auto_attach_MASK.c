
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {int config_flags; int irq; struct comedi_device* priv; TYPE_1__** resource; } ;
struct ni_board_struct {int name; } ;
struct comedi_device {int irq; int iobase; int board_name; struct ni_board_struct const* board_ptr; } ;
struct TYPE_2__ {int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct comedi_device*,int ) ;
 struct pcmcia_device* FUNC_1 (struct comedi_device*) ;
 int VAR_3 ;
 int FUNC_2 (struct comedi_device*,int ,int) ;
 int VAR_4 ;
 int FUNC_3 (struct comedi_device*) ;
 struct ni_board_struct* FUNC_4 (struct comedi_device*,struct pcmcia_device*) ;
 int FUNC_5 (struct pcmcia_device*,int ) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_5,
         unsigned long VAR_6)
{
 struct pcmcia_device *VAR_7 = FUNC_1(VAR_5);
 static const struct ni_board_struct *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_4(VAR_5, VAR_7);
 if (!VAR_8)
  return -VAR_2;
 VAR_5->board_ptr = VAR_8;
 VAR_5->board_name = VAR_8->name;

 VAR_7->config_flags |= VAR_0 | VAR_1;
 VAR_9 = FUNC_0(VAR_5, VAR_3);
 if (VAR_9)
  return VAR_9;
 VAR_5->iobase = VAR_7->resource[0]->start;

 VAR_7->priv = VAR_5;
 VAR_9 = FUNC_5(VAR_7, VAR_4);
 if (VAR_9)
  return VAR_9;
 VAR_5->irq = VAR_7->irq;

 VAR_9 = FUNC_3(VAR_5);
 if (VAR_9)
  return VAR_9;

 return FUNC_2(VAR_5, 0, 1);
}
