
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci9118_private {int ai_cfg; int ai_ctrl; int int_ctrl; scalar_t__ dma_actbuf; scalar_t__ ai_neverending; scalar_t__ ai_act_dmapos; scalar_t__ usedma; scalar_t__ ai_do; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; int pacer; struct pci9118_private* private; } ;
struct TYPE_2__ {int * inttrig; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (struct comedi_device*,int) ;
 int FUNC_4 (struct comedi_device*,int) ;
 int FUNC_5 (struct comedi_device*,int) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_7,
        struct comedi_subdevice *VAR_8)
{
 struct pci9118_private *VAR_9 = VAR_7->private;

 if (VAR_9->usedma)
  FUNC_3(VAR_7, 0);
 FUNC_5(VAR_7, 0);
 FUNC_0(VAR_7->pacer, 1, 2, 0);

 VAR_9->ai_cfg = VAR_2 | VAR_3;
 FUNC_1(VAR_9->ai_cfg, VAR_7->iobase + VAR_4);

 VAR_9->ai_ctrl = 0;
 FUNC_1(VAR_9->ai_ctrl, VAR_7->iobase + VAR_5);
 FUNC_1(0, VAR_7->iobase + VAR_1);

 FUNC_1(1, VAR_7->iobase + VAR_0);
 FUNC_1(2, VAR_7->iobase + VAR_0);
 FUNC_2(VAR_7);

 VAR_9->int_ctrl = 0;
 FUNC_1(VAR_9->int_ctrl, VAR_7->iobase + VAR_6);
 FUNC_4(VAR_7, 0);

 VAR_9->ai_do = 0;
 VAR_9->usedma = 0;

 VAR_9->ai_act_dmapos = 0;
 VAR_8->async->inttrig = ((void*)0);
 VAR_9->ai_neverending = 0;
 VAR_9->dma_actbuf = 0;

 return 0;
}
